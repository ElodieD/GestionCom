#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
#include <QTextCodec>
#include <QSqlDatabase>
#include <QSqlRelationalTableModel>
#include <QDebug>
#include <QSqlError>
#include <QSqlRecord>
#include <QSqlQuery>
#include <QSqlQueryModel> //pour les requetes.. meme système que les qsqltablemodel
#include "dialogclient.h"
#include "ui_dialogclient.h"
#include <QDate>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    //prise en compte de l'utilité pour les chaines dans le code
    QTextCodec::setCodecForCStrings(QTextCodec::codecForName("UTF-8"));
    QTextCodec::setCodecForTr(QTextCodec::codecForName("UTF-8"));
    //connexion à la base
    baseCommerciale = QSqlDatabase::addDatabase("QMYSQL");
    baseCommerciale.setHostName("localhost");
    baseCommerciale.setUserName("root");
    baseCommerciale.setPassword("ini01");
    baseCommerciale.setDatabaseName("dbGestionCom");
    if (!baseCommerciale.open())
    {
         QMessageBox::warning(this,this->windowTitle(),"Le serveur de base de données est inaccessible \r\n Merci de contacter votre administrateur \r\n et de relancer l'application après avoir réglé le problème");
    }
    else
    {
       statusBar()->showMessage(tr("Connexion à la base réussie"));
    }
    //bosser les modeles
    modelProduits=new QSqlTableModel(this);
    modelProduits->setTable("Produit");
    //associe model client a sa table
    modelClients=new QSqlTableModel(this);
    modelClients->setTable("Client");
    //

    ui->dateEdit->setDate(QDate::currentDate());            //pour la date
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::changeEvent(QEvent *e)
{
    QMainWindow::changeEvent(e);
    switch (e->type()) {
    case QEvent::LanguageChange:
        ui->retranslateUi(this);
        break;
    default:
        break;
    }
}

void MainWindow::on_actionQuitter_triggered()
{
    //quitter
    if(QMessageBox::question(this, this->windowTitle(),tr("Etes-vous sûr de vouloir quitter l'application ?"),QMessageBox::Ok|QMessageBox::Cancel,QMessageBox::Cancel)==QMessageBox::Ok)
    {
        close();
    }
}

void MainWindow::on_actionGestion_du_catalogue_triggered()
{
     //affichage des produits
         qDebug()<<"void MainWindow::on_actionGestion_du_catalogue_triggered()";
         modelProduits = new QSqlRelationalTableModel(this, baseCommerciale);
         modelProduits->setTable("Produit");
         modelProduits->setEditStrategy(QSqlRelationalTableModel::OnRowChange);
         //fait le select sur la table
         bool ouvertureTableReussie=modelProduits->select();
         if(ouvertureTableReussie)
         {
             qDebug()<<"ouverture ok";
         }
         else
         {
             qDebug()<<modelProduits->lastError().databaseText();
         }
         modelProduits->setHeaderData(0, Qt::Horizontal, tr("Numéro"));
         modelProduits->setHeaderData(1, Qt::Horizontal, tr("Libellé"));
         modelProduits->setHeaderData(2, Qt::Horizontal, tr("Prix"));
         modelProduits->setHeaderData(3, Qt::Horizontal, tr("Quantité"));
         //on associe le modèle à sa vue
         ui->tableViewCatalogue->setModel(modelProduits);
         //vue... montre-toi
         ui->tableViewCatalogue->show();
}


void MainWindow::on_pushButtonAjoutProduit_clicked()
{
    //ajout d'un produit
    QSqlRecord nouveauProduit=modelProduits->record();
    QSqlQuery maRequete("SELECT max(prodNum)+1 FROM Produit");
    //placement sur le prochain enregistrement dispo
    maRequete.next();
    //obtention du prochain numéro de produit valide
    int numeroProduitOk=maRequete.value(0).toInt();
    nouveauProduit.setValue("prodNum", numeroProduitOk);
    modelProduits->insertRecord(-1,nouveauProduit);

}

void MainWindow::on_pushButtonSupprProduit_clicked()
{
    //supprimer un  produit
    int numeroDeLigneSelectionnee=ui->tableViewCatalogue->selectionModel()->currentIndex().row();
    modelProduits->removeRow(numeroDeLigneSelectionnee);
}


void MainWindow::on_pushButtonNouveauClient_clicked()
{
    // bouton 3 ptis points !
    //ouverture de la fenetre nouveauClient
    DialogClient * formNouveauClient = new DialogClient(this);

    if(formNouveauClient->exec()==QDialog::Accepted)
    {
        qDebug()<<"Ajout d'un nouveau client";
        //enregistrement d'un nouveau client
        QSqlRecord recordClient=modelClients->record();

        recordClient.setValue("cliId",formNouveauClient->ui->lineEditId->text().toInt());
        recordClient.setValue("cliNom",formNouveauClient->ui->lineEditNom->text());
        recordClient.setValue("cliPrenom",formNouveauClient->ui->lineEditPrenom->text());
        recordClient.setValue("cliRue",formNouveauClient->ui->lineEditRue->text());
        recordClient.setValue("cliCP",formNouveauClient->ui->lineEditCP->text());
        recordClient.setValue("cliVille",formNouveauClient->ui->lineEditVille->text());
        recordClient.setValue("cliTel",formNouveauClient->ui->lineEditTel->text());
        qDebug()<<recordClient;

        if (modelClients->insertRecord(-1,recordClient))
        {
            ui->statusBar->showMessage("Client ajouté avec succès",3000);
            //choix du client
            //ui->lineEditId.setText("cliId",formNouveauClient->ui->lineEditId->text().toInt());
        }//fin if

        else
        {
            QString erreurSql=baseCommerciale.lastError().databaseText();
            ui->statusBar->showMessage(erreurSql,3000);
        }//fin else

    }//fin if (formNouveauClient->exec()==QDialog::Accepted)

    else
    {

    }

}

void MainWindow::on_actionEnregistrement_des_commandes_triggered()
{
    //Commande  en haut tableau pour afficher les clients
    //affichage des clients
        qDebug()<<"void MainWindow::on_actionClient_triggered()";
        modelCommandes = new QSqlRelationalTableModel(this, baseClients);
        modelCommandes->setTable("Client");
        modelCommandes->setEditStrategy(QSqlRelationalTableModel::OnManualSubmit);
        //fait le select sur la table
        bool ouvertureTableReussie=modelCommandes->select();
        if(ouvertureTableReussie)
        {
            qDebug()<<"ouverture ok";
        }
        else
        {
            qDebug()<<modelCommandes->lastError().databaseText();
        }
        modelCommandes->setHeaderData(0, Qt::Horizontal, tr("Numéro"));
        modelCommandes->setHeaderData(1,Qt::Horizontal, tr("Nom"));
        modelCommandes->setHeaderData(2, Qt::Horizontal, tr ("Prenom"));
        //on associe le modèle à sa vue
        ui->tableViewCommande->setModel(modelCommandes);
        //vue... montre-toi
        ui->tableViewCommande->show();

}

void MainWindow::on_pushButtonAjouterProd_clicked()
{
    //Bouton Ajouter produit
    QSqlRecord recordProd=modelProduits->record();
    QSqlQuery maRequete("SELECT * FROM Produit");
    //sélectionner nom produit avec sa quantité

}

void MainWindow::on_pushButtonRechClient_clicked()
{
    ///////////////

    //requête recherche Client
    modelRechClient->setQuery("SELECT * FROM Client");
    //les connexions des signaux aux slots correspondants
    connect(ui->lineEditId, SIGNAL(textChanged(QString)), this, SLOT(rechCLient()));
    connect(ui->lineEdit_Nom, SIGNAL(textChanged(QString)), this, SLOT(rechClient()));
    connect(ui->lineEdit_Prenom, SIGNAL(textChanged(QString)), this, SLOT(rechClient()));
    connect(ui->lineEdit_Rue, SIGNAL(textChanged(QString)), this, SLOT(rechClient()));
    connect(ui->lineEditCP, SIGNAL(textChanged(QString)), this, SLOT(rechClient()));
    connect(ui->lineEdit_Ville, SIGNAL(textChanged(QString)), this, SLOT(rechClient())); //entre paranthèse utiliser le void RechercherClient et non le bouton

    //////////////
    //if()
}

void MainWindow::on_pushButtonEnregistrerPanier_clicked()
{
    //enregistrer Panier
}



void MainWindow::on_actionClient_triggered()
{
    //fenetre pour faire la recherche des clients
    //affichage des clients
        qDebug()<<"void MainWindow::on_actionClient_triggered()";
        modelCommandes = new QSqlRelationalTableModel(this, baseClients);
        modelCommandes->setTable("Client");
        modelCommandes->setEditStrategy(QSqlRelationalTableModel::OnManualSubmit);
        //fait le select sur la table
        bool ouvertureTableReussie=modelClients->select();
        if(ouvertureTableReussie)
        {
            qDebug()<<"ouverture ok";
        }
        else
        {
            qDebug()<<modelClients->lastError().databaseText();
        }
        modelClients->setHeaderData(0, Qt::Horizontal, tr("Numéro"));
        modelClients->setHeaderData(1,Qt::Horizontal, tr("Nom"));
        modelClients->setHeaderData(2, Qt::Horizontal, tr ("Prenom"));
        //on associe le modèle à sa vue
        ui->tableViewClient->setModel(modelClients);
        //vue... montre-toi
        ui->tableViewClient->show();
}

/*void MainWindow::SLOT(rechClient)
{

}
*/

void MainWindow::on_comboBoxProduit_activated(QString )
{
    /*
    int combobox->itemData(combobox->currentIndex());
    QSqlRecord rec = modelProduits->record(comboBox->currentIndex());
    int index = rec.value("prodNum").toInt();


    int currentIndex = comboBoxProduit->currentIndex();
    int idIndex = model->fieldIndex("prodNum");
    int id = modelProduits->data(modelProduits->index(currentIndex,idIndex)).toInt();
    //combobox->itemData(combobox->currentIndex());
    ui->comboBoxProduit->addItem("pneu", QVariant(2));
    */
}
