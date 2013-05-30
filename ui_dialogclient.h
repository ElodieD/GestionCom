/********************************************************************************
** Form generated from reading UI file 'dialogclient.ui'
**
** Created: Fri May 17 10:51:30 2013
**      by: Qt User Interface Compiler version 4.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGCLIENT_H
#define UI_DIALOGCLIENT_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_DialogClient
{
public:
    QVBoxLayout *verticalLayout;
    QGridLayout *gridLayout;
    QLabel *labelId;
    QLineEdit *lineEditId;
    QLineEdit *lineEditNom;
    QLabel *labelPrenom;
    QLineEdit *lineEditPrenom;
    QLabel *labelTel;
    QLineEdit *lineEditTel;
    QLineEdit *lineEditRue;
    QLabel *labelCP;
    QLineEdit *lineEditCP;
    QLabel *labelVille;
    QLineEdit *lineEditVille;
    QLabel *labelNom;
    QLabel *labelRue;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *DialogClient)
    {
        if (DialogClient->objectName().isEmpty())
            DialogClient->setObjectName(QString::fromUtf8("DialogClient"));
        DialogClient->resize(400, 300);
        DialogClient->setStyleSheet(QString::fromUtf8(""));
        verticalLayout = new QVBoxLayout(DialogClient);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        labelId = new QLabel(DialogClient);
        labelId->setObjectName(QString::fromUtf8("labelId"));

        gridLayout->addWidget(labelId, 0, 0, 1, 1);

        lineEditId = new QLineEdit(DialogClient);
        lineEditId->setObjectName(QString::fromUtf8("lineEditId"));

        gridLayout->addWidget(lineEditId, 0, 1, 1, 1);

        lineEditNom = new QLineEdit(DialogClient);
        lineEditNom->setObjectName(QString::fromUtf8("lineEditNom"));

        gridLayout->addWidget(lineEditNom, 1, 1, 1, 1);

        labelPrenom = new QLabel(DialogClient);
        labelPrenom->setObjectName(QString::fromUtf8("labelPrenom"));

        gridLayout->addWidget(labelPrenom, 2, 0, 1, 1);

        lineEditPrenom = new QLineEdit(DialogClient);
        lineEditPrenom->setObjectName(QString::fromUtf8("lineEditPrenom"));

        gridLayout->addWidget(lineEditPrenom, 2, 1, 1, 1);

        labelTel = new QLabel(DialogClient);
        labelTel->setObjectName(QString::fromUtf8("labelTel"));

        gridLayout->addWidget(labelTel, 3, 0, 1, 1);

        lineEditTel = new QLineEdit(DialogClient);
        lineEditTel->setObjectName(QString::fromUtf8("lineEditTel"));

        gridLayout->addWidget(lineEditTel, 3, 1, 1, 1);

        lineEditRue = new QLineEdit(DialogClient);
        lineEditRue->setObjectName(QString::fromUtf8("lineEditRue"));

        gridLayout->addWidget(lineEditRue, 4, 1, 1, 1);

        labelCP = new QLabel(DialogClient);
        labelCP->setObjectName(QString::fromUtf8("labelCP"));

        gridLayout->addWidget(labelCP, 5, 0, 1, 1);

        lineEditCP = new QLineEdit(DialogClient);
        lineEditCP->setObjectName(QString::fromUtf8("lineEditCP"));

        gridLayout->addWidget(lineEditCP, 5, 1, 1, 1);

        labelVille = new QLabel(DialogClient);
        labelVille->setObjectName(QString::fromUtf8("labelVille"));

        gridLayout->addWidget(labelVille, 6, 0, 1, 1);

        lineEditVille = new QLineEdit(DialogClient);
        lineEditVille->setObjectName(QString::fromUtf8("lineEditVille"));

        gridLayout->addWidget(lineEditVille, 6, 1, 1, 1);

        labelNom = new QLabel(DialogClient);
        labelNom->setObjectName(QString::fromUtf8("labelNom"));

        gridLayout->addWidget(labelNom, 1, 0, 1, 1);

        labelRue = new QLabel(DialogClient);
        labelRue->setObjectName(QString::fromUtf8("labelRue"));

        gridLayout->addWidget(labelRue, 4, 0, 1, 1);


        verticalLayout->addLayout(gridLayout);

        buttonBox = new QDialogButtonBox(DialogClient);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(DialogClient);
        QObject::connect(buttonBox, SIGNAL(accepted()), DialogClient, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), DialogClient, SLOT(reject()));

        QMetaObject::connectSlotsByName(DialogClient);
    } // setupUi

    void retranslateUi(QDialog *DialogClient)
    {
        DialogClient->setWindowTitle(QApplication::translate("DialogClient", "Dialog", 0, QApplication::UnicodeUTF8));
        labelId->setText(QApplication::translate("DialogClient", "Identifiant :", 0, QApplication::UnicodeUTF8));
        labelPrenom->setText(QApplication::translate("DialogClient", "Pr\303\251nom :", 0, QApplication::UnicodeUTF8));
        labelTel->setText(QApplication::translate("DialogClient", "T\303\251l\303\251phone :", 0, QApplication::UnicodeUTF8));
        labelCP->setText(QApplication::translate("DialogClient", "Code postal :", 0, QApplication::UnicodeUTF8));
        labelVille->setText(QApplication::translate("DialogClient", "Ville :", 0, QApplication::UnicodeUTF8));
        labelNom->setText(QApplication::translate("DialogClient", "Nom :", 0, QApplication::UnicodeUTF8));
        labelRue->setText(QApplication::translate("DialogClient", "Rue :", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class DialogClient: public Ui_DialogClient {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGCLIENT_H
