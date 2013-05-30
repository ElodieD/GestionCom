/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created: Fri May 24 10:20:51 2013
**      by: Qt User Interface Compiler version 4.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QDateEdit>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QMainWindow>
#include <QtGui/QMenu>
#include <QtGui/QMenuBar>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QSpinBox>
#include <QtGui/QStatusBar>
#include <QtGui/QTabWidget>
#include <QtGui/QTableView>
#include <QtGui/QTableWidget>
#include <QtGui/QToolBar>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionGestion_du_catalogue;
    QAction *actionEnregistrement_des_commandes;
    QAction *actionQuitter;
    QAction *actionA_propos;
    QAction *actionClient;
    QAction *actionTest;
    QWidget *centralWidget;
    QTabWidget *tabWidget;
    QWidget *Catalogue;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer_3;
    QLabel *labelCatalogue;
    QSpacerItem *horizontalSpacer_4;
    QTableView *tableViewCatalogue;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButtonAjoutProduit;
    QPushButton *pushButtonSupprProduit;
    QSpacerItem *horizontalSpacer_2;
    QWidget *Commandes;
    QLabel *label_Client;
    QTableView *tableViewCommande;
    QPushButton *pushButtonNouveauClient;
    QGroupBox *groupBoxProduit;
    QTableWidget *tableWidgetProduit;
    QPushButton *pushButtonValider;
    QWidget *widget;
    QHBoxLayout *horizontalLayout_4;
    QComboBox *comboBoxProduit;
    QSpacerItem *horizontalSpacer_5;
    QLabel *labelQuantite;
    QSpinBox *spinBoxQuantite;
    QSpacerItem *horizontalSpacer_7;
    QPushButton *pushButtonAjouterProd;
    QSpacerItem *horizontalSpacer_6;
    QGroupBox *groupBox_2;
    QTableWidget *tableWidgetPanier;
    QPushButton *pushButtonEnregistrerPanier;
    QDateEdit *dateEdit;
    QWidget *widget1;
    QHBoxLayout *horizontalLayout_3;
    QVBoxLayout *verticalLayout_5;
    QLabel *label_Id;
    QLabel *label_Nom;
    QLabel *label_Prenom;
    QVBoxLayout *verticalLayout_3;
    QLineEdit *lineEdit_Prenom;
    QLineEdit *lineEdit_Nom;
    QLineEdit *lineEditId;
    QVBoxLayout *verticalLayout_4;
    QLabel *label_Rue;
    QLabel *label_Ville;
    QLabel *labelCP;
    QVBoxLayout *verticalLayout_2;
    QLineEdit *lineEditCP;
    QLineEdit *lineEdit_Ville;
    QLineEdit *lineEdit_Rue;
    QWidget *Client;
    QTableView *tableViewClient;
    QPushButton *pushButtonRechClient;
    QMenuBar *menuBar;
    QMenu *menuFichier;
    QMenu *menuEvenement;
    QMenu *menuAide;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(625, 692);
        MainWindow->setStyleSheet(QString::fromUtf8("alternate-background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0.909, stop:0 rgba(193, 130, 255, 255), stop:0.97619 rgba(255, 255, 255, 255));"));
        actionGestion_du_catalogue = new QAction(MainWindow);
        actionGestion_du_catalogue->setObjectName(QString::fromUtf8("actionGestion_du_catalogue"));
        actionEnregistrement_des_commandes = new QAction(MainWindow);
        actionEnregistrement_des_commandes->setObjectName(QString::fromUtf8("actionEnregistrement_des_commandes"));
        actionQuitter = new QAction(MainWindow);
        actionQuitter->setObjectName(QString::fromUtf8("actionQuitter"));
        actionA_propos = new QAction(MainWindow);
        actionA_propos->setObjectName(QString::fromUtf8("actionA_propos"));
        actionClient = new QAction(MainWindow);
        actionClient->setObjectName(QString::fromUtf8("actionClient"));
        actionTest = new QAction(MainWindow);
        actionTest->setObjectName(QString::fromUtf8("actionTest"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        tabWidget = new QTabWidget(centralWidget);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setGeometry(QRect(0, 0, 601, 631));
        tabWidget->setStyleSheet(QString::fromUtf8("font: italic 16pt \"URW Chancery L\";\n"
"color: rgb(108, 0, 81);"));
        Catalogue = new QWidget();
        Catalogue->setObjectName(QString::fromUtf8("Catalogue"));
        layoutWidget = new QWidget(Catalogue);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(2, 0, 531, 231));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_3);

        labelCatalogue = new QLabel(layoutWidget);
        labelCatalogue->setObjectName(QString::fromUtf8("labelCatalogue"));

        horizontalLayout->addWidget(labelCatalogue);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_4);


        verticalLayout->addLayout(horizontalLayout);

        tableViewCatalogue = new QTableView(layoutWidget);
        tableViewCatalogue->setObjectName(QString::fromUtf8("tableViewCatalogue"));
        tableViewCatalogue->setStyleSheet(QString::fromUtf8(""));

        verticalLayout->addWidget(tableViewCatalogue);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        pushButtonAjoutProduit = new QPushButton(layoutWidget);
        pushButtonAjoutProduit->setObjectName(QString::fromUtf8("pushButtonAjoutProduit"));

        horizontalLayout_2->addWidget(pushButtonAjoutProduit);

        pushButtonSupprProduit = new QPushButton(layoutWidget);
        pushButtonSupprProduit->setObjectName(QString::fromUtf8("pushButtonSupprProduit"));

        horizontalLayout_2->addWidget(pushButtonSupprProduit);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);


        verticalLayout->addLayout(horizontalLayout_2);

        tabWidget->addTab(Catalogue, QString());
        Commandes = new QWidget();
        Commandes->setObjectName(QString::fromUtf8("Commandes"));
        label_Client = new QLabel(Commandes);
        label_Client->setObjectName(QString::fromUtf8("label_Client"));
        label_Client->setGeometry(QRect(10, 10, 59, 21));
        tableViewCommande = new QTableView(Commandes);
        tableViewCommande->setObjectName(QString::fromUtf8("tableViewCommande"));
        tableViewCommande->setGeometry(QRect(0, 40, 561, 531));
        tableViewCommande->setStyleSheet(QString::fromUtf8(""));
        pushButtonNouveauClient = new QPushButton(Commandes);
        pushButtonNouveauClient->setObjectName(QString::fromUtf8("pushButtonNouveauClient"));
        pushButtonNouveauClient->setGeometry(QRect(250, 0, 92, 27));
        groupBoxProduit = new QGroupBox(Commandes);
        groupBoxProduit->setObjectName(QString::fromUtf8("groupBoxProduit"));
        groupBoxProduit->setGeometry(QRect(10, 230, 541, 261));
        tableWidgetProduit = new QTableWidget(groupBoxProduit);
        if (tableWidgetProduit->columnCount() < 4)
            tableWidgetProduit->setColumnCount(4);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidgetProduit->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidgetProduit->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidgetProduit->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableWidgetProduit->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        tableWidgetProduit->setObjectName(QString::fromUtf8("tableWidgetProduit"));
        tableWidgetProduit->setGeometry(QRect(0, 40, 451, 171));
        pushButtonValider = new QPushButton(groupBoxProduit);
        pushButtonValider->setObjectName(QString::fromUtf8("pushButtonValider"));
        pushButtonValider->setGeometry(QRect(461, 50, 81, 31));
        widget = new QWidget(groupBoxProduit);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(80, 0, 451, 31));
        horizontalLayout_4 = new QHBoxLayout(widget);
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        comboBoxProduit = new QComboBox(widget);
        comboBoxProduit->setObjectName(QString::fromUtf8("comboBoxProduit"));

        horizontalLayout_4->addWidget(comboBoxProduit);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_5);

        labelQuantite = new QLabel(widget);
        labelQuantite->setObjectName(QString::fromUtf8("labelQuantite"));

        horizontalLayout_4->addWidget(labelQuantite);

        spinBoxQuantite = new QSpinBox(widget);
        spinBoxQuantite->setObjectName(QString::fromUtf8("spinBoxQuantite"));

        horizontalLayout_4->addWidget(spinBoxQuantite);

        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_7);

        pushButtonAjouterProd = new QPushButton(widget);
        pushButtonAjouterProd->setObjectName(QString::fromUtf8("pushButtonAjouterProd"));

        horizontalLayout_4->addWidget(pushButtonAjouterProd);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_6);

        groupBox_2 = new QGroupBox(Commandes);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setGeometry(QRect(10, 450, 541, 111));
        tableWidgetPanier = new QTableWidget(groupBox_2);
        tableWidgetPanier->setObjectName(QString::fromUtf8("tableWidgetPanier"));
        tableWidgetPanier->setGeometry(QRect(0, 50, 531, 61));
        pushButtonEnregistrerPanier = new QPushButton(groupBox_2);
        pushButtonEnregistrerPanier->setObjectName(QString::fromUtf8("pushButtonEnregistrerPanier"));
        pushButtonEnregistrerPanier->setGeometry(QRect(430, 70, 91, 31));
        dateEdit = new QDateEdit(Commandes);
        dateEdit->setObjectName(QString::fromUtf8("dateEdit"));
        dateEdit->setGeometry(QRect(510, 0, 87, 31));
        dateEdit->setStyleSheet(QString::fromUtf8("font: italic 12pt \"URW Chancery L\";"));
        widget1 = new QWidget(Commandes);
        widget1->setObjectName(QString::fromUtf8("widget1"));
        widget1->setGeometry(QRect(12, 152, 341, 71));
        horizontalLayout_3 = new QHBoxLayout(widget1);
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setSpacing(6);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        label_Id = new QLabel(widget1);
        label_Id->setObjectName(QString::fromUtf8("label_Id"));

        verticalLayout_5->addWidget(label_Id);

        label_Nom = new QLabel(widget1);
        label_Nom->setObjectName(QString::fromUtf8("label_Nom"));

        verticalLayout_5->addWidget(label_Nom);

        label_Prenom = new QLabel(widget1);
        label_Prenom->setObjectName(QString::fromUtf8("label_Prenom"));

        verticalLayout_5->addWidget(label_Prenom);


        horizontalLayout_3->addLayout(verticalLayout_5);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        lineEdit_Prenom = new QLineEdit(widget1);
        lineEdit_Prenom->setObjectName(QString::fromUtf8("lineEdit_Prenom"));

        verticalLayout_3->addWidget(lineEdit_Prenom);

        lineEdit_Nom = new QLineEdit(widget1);
        lineEdit_Nom->setObjectName(QString::fromUtf8("lineEdit_Nom"));

        verticalLayout_3->addWidget(lineEdit_Nom);

        lineEditId = new QLineEdit(widget1);
        lineEditId->setObjectName(QString::fromUtf8("lineEditId"));

        verticalLayout_3->addWidget(lineEditId);


        horizontalLayout_3->addLayout(verticalLayout_3);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        label_Rue = new QLabel(widget1);
        label_Rue->setObjectName(QString::fromUtf8("label_Rue"));

        verticalLayout_4->addWidget(label_Rue);

        label_Ville = new QLabel(widget1);
        label_Ville->setObjectName(QString::fromUtf8("label_Ville"));

        verticalLayout_4->addWidget(label_Ville);

        labelCP = new QLabel(widget1);
        labelCP->setObjectName(QString::fromUtf8("labelCP"));

        verticalLayout_4->addWidget(labelCP);


        horizontalLayout_3->addLayout(verticalLayout_4);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        lineEditCP = new QLineEdit(widget1);
        lineEditCP->setObjectName(QString::fromUtf8("lineEditCP"));

        verticalLayout_2->addWidget(lineEditCP);

        lineEdit_Ville = new QLineEdit(widget1);
        lineEdit_Ville->setObjectName(QString::fromUtf8("lineEdit_Ville"));

        verticalLayout_2->addWidget(lineEdit_Ville);

        lineEdit_Rue = new QLineEdit(widget1);
        lineEdit_Rue->setObjectName(QString::fromUtf8("lineEdit_Rue"));

        verticalLayout_2->addWidget(lineEdit_Rue);


        horizontalLayout_3->addLayout(verticalLayout_2);

        tabWidget->addTab(Commandes, QString());
        Client = new QWidget();
        Client->setObjectName(QString::fromUtf8("Client"));
        tableViewClient = new QTableView(Client);
        tableViewClient->setObjectName(QString::fromUtf8("tableViewClient"));
        tableViewClient->setGeometry(QRect(0, 0, 501, 281));
        pushButtonRechClient = new QPushButton(Client);
        pushButtonRechClient->setObjectName(QString::fromUtf8("pushButtonRechClient"));
        pushButtonRechClient->setGeometry(QRect(20, 300, 92, 27));
        tabWidget->addTab(Client, QString());
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 625, 25));
        menuFichier = new QMenu(menuBar);
        menuFichier->setObjectName(QString::fromUtf8("menuFichier"));
        menuEvenement = new QMenu(menuBar);
        menuEvenement->setObjectName(QString::fromUtf8("menuEvenement"));
        menuAide = new QMenu(menuBar);
        menuAide->setObjectName(QString::fromUtf8("menuAide"));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menuFichier->menuAction());
        menuBar->addAction(menuEvenement->menuAction());
        menuBar->addAction(menuAide->menuAction());
        menuFichier->addAction(actionQuitter);
        menuEvenement->addAction(actionGestion_du_catalogue);
        menuEvenement->addAction(actionEnregistrement_des_commandes);
        menuEvenement->addAction(actionClient);
        menuAide->addAction(actionA_propos);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0, QApplication::UnicodeUTF8));
        actionGestion_du_catalogue->setText(QApplication::translate("MainWindow", "Gestion du catalogue", 0, QApplication::UnicodeUTF8));
        actionEnregistrement_des_commandes->setText(QApplication::translate("MainWindow", "Enregistrement des commandes", 0, QApplication::UnicodeUTF8));
        actionQuitter->setText(QApplication::translate("MainWindow", "Quitter", 0, QApplication::UnicodeUTF8));
        actionA_propos->setText(QApplication::translate("MainWindow", "A propos", 0, QApplication::UnicodeUTF8));
        actionClient->setText(QApplication::translate("MainWindow", "Client", 0, QApplication::UnicodeUTF8));
        actionTest->setText(QApplication::translate("MainWindow", "test", 0, QApplication::UnicodeUTF8));
        labelCatalogue->setText(QApplication::translate("MainWindow", "Catalogue", 0, QApplication::UnicodeUTF8));
        pushButtonAjoutProduit->setText(QApplication::translate("MainWindow", "Nouveau", 0, QApplication::UnicodeUTF8));
        pushButtonSupprProduit->setText(QApplication::translate("MainWindow", "Supprimer", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(Catalogue), QApplication::translate("MainWindow", "Catalogue", 0, QApplication::UnicodeUTF8));
        label_Client->setText(QApplication::translate("MainWindow", "Client", 0, QApplication::UnicodeUTF8));
        pushButtonNouveauClient->setText(QApplication::translate("MainWindow", "...", 0, QApplication::UnicodeUTF8));
        groupBoxProduit->setTitle(QApplication::translate("MainWindow", "Produit", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem = tableWidgetProduit->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("MainWindow", "Num", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidgetProduit->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("MainWindow", "Libell\303\251", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidgetProduit->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("MainWindow", "Prix", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidgetProduit->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("MainWindow", "Quantit\303\251", 0, QApplication::UnicodeUTF8));
        pushButtonValider->setText(QApplication::translate("MainWindow", "Valider", 0, QApplication::UnicodeUTF8));
        comboBoxProduit->clear();
        comboBoxProduit->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "pneu", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "crash cage", 0, QApplication::UnicodeUTF8)
        );
        labelQuantite->setText(QApplication::translate("MainWindow", "Quantit\303\251", 0, QApplication::UnicodeUTF8));
        pushButtonAjouterProd->setText(QApplication::translate("MainWindow", "Ajouter", 0, QApplication::UnicodeUTF8));
        groupBox_2->setTitle(QApplication::translate("MainWindow", "Panier", 0, QApplication::UnicodeUTF8));
        pushButtonEnregistrerPanier->setText(QApplication::translate("MainWindow", "Enregistrer", 0, QApplication::UnicodeUTF8));
        label_Id->setText(QApplication::translate("MainWindow", "Identifiant", 0, QApplication::UnicodeUTF8));
        label_Nom->setText(QApplication::translate("MainWindow", "Nom", 0, QApplication::UnicodeUTF8));
        label_Prenom->setText(QApplication::translate("MainWindow", "Pr\303\251nom", 0, QApplication::UnicodeUTF8));
        label_Rue->setText(QApplication::translate("MainWindow", "Rue", 0, QApplication::UnicodeUTF8));
        label_Ville->setText(QApplication::translate("MainWindow", "Ville", 0, QApplication::UnicodeUTF8));
        labelCP->setText(QApplication::translate("MainWindow", "Code Postal", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(Commandes), QApplication::translate("MainWindow", "Commandes", 0, QApplication::UnicodeUTF8));
        pushButtonRechClient->setText(QApplication::translate("MainWindow", "Rechercher", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(Client), QApplication::translate("MainWindow", "Client", 0, QApplication::UnicodeUTF8));
        menuFichier->setTitle(QApplication::translate("MainWindow", "Fichier", 0, QApplication::UnicodeUTF8));
        menuEvenement->setTitle(QApplication::translate("MainWindow", "Evenement", 0, QApplication::UnicodeUTF8));
        menuAide->setTitle(QApplication::translate("MainWindow", "Aide", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
