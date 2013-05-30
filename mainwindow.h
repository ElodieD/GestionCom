#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QSqlTableModel>
#include <QSqlDatabase>
namespace Ui {
    class MainWindow;
}

class MainWindow : public QMainWindow {
    Q_OBJECT
public:
    MainWindow(QWidget *parent = 0);
    ~MainWindow();

protected:
    void changeEvent(QEvent *e);

private:
    Ui::MainWindow *ui;
     QSqlDatabase baseCommerciale;
    //le modele de données associé aux produits
    QSqlTableModel * modelProduits;
    QSqlDatabase  bdGestionCom; //base de données de la table produits
    QSqlTableModel * modelCommandes;
    QSqlDatabase bdGestionCommandes; //base de données de la table commandes
    QSqlTableModel * modelClients;
    QSqlDatabase baseClients; //base de données de la table client
    QSqlQueryModel * modelRechClient;



private slots:
    void on_comboBoxProduit_activated(QString );
    void on_pushButtonEnregistrerPanier_clicked(); //enrgClient
    void on_pushButtonRechClient_clicked();//rechClient
    void on_pushButtonAjouterProd_clicked();//ajout produit au panier
    void on_actionEnregistrement_des_commandes_triggered();
    void on_pushButtonNouveauClient_clicked();//nouveau client bouton 3 ptis points
    void on_actionClient_triggered(); //gestion des clients
    void on_pushButtonSupprProduit_clicked(); //supprimer un produit
    void on_pushButtonAjoutProduit_clicked(); //ajouter un produit
    void on_actionGestion_du_catalogue_triggered(); //gestion catalogue/produits
    void on_actionQuitter_triggered();  //quitter
    //void rechClient// slot pour le RechercherCLient
};

#endif // MAINWINDOW_H
