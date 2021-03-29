/********************************************************************************
** Form generated from reading UI file 'promointer.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PROMOINTER_H
#define UI_PROMOINTER_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_promointer
{
public:
    QTabWidget *tabWidget;
    QWidget *tab;
    QGroupBox *groupBox;
    QTextEdit *Pourcentage;
    QLabel *label_13;
    QLabel *label_12;
    QLabel *label_15;
    QLabel *label_14;
    QPushButton *AjouterBouton;
    QLabel *label_16;
    QTextEdit *duree;
    QComboBox *comboBox_nomprod;
    QTextBrowser *Prixav;
    QTextBrowser *Prixap;
    QWidget *tab_2;
    QGroupBox *groupBox_2;
    QComboBox *comboBox_supp;
    QLabel *label;
    QPushButton *SupprimerBouton;
    QLabel *label_27;
    QLabel *label_24;
    QLabel *label_25;
    QLabel *label_26;
    QTextBrowser *Nomval;
    QTextBrowser *anciepval;
    QTextBrowser *pourcentageval;
    QTextBrowser *nouvpval;
    QTextBrowser *dureeval;
    QLabel *label_28;
    QTableView *tablemodifier;
    QGroupBox *groupBox_3;
    QComboBox *comboBox_modif;
    QLabel *label_29;
    QLabel *label_30;
    QLabel *label_31;
    QLabel *label_32;
    QLabel *label_33;
    QLineEdit *pourcentagemodif;
    QLineEdit *dureemodif;
    QTextBrowser *nommodif;
    QTextBrowser *anciepmodif;
    QTextBrowser *nouvpmodif;
    QPushButton *btn_modif;
    QLabel *label_2;
    QLineEdit *rechercheav;
    QComboBox *tricombo;
    QLabel *label_3;

    void setupUi(QDialog *promointer)
    {
        if (promointer->objectName().isEmpty())
            promointer->setObjectName(QStringLiteral("promointer"));
        promointer->resize(876, 655);
        tabWidget = new QTabWidget(promointer);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setGeometry(QRect(10, 10, 871, 641));
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        groupBox = new QGroupBox(tab);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(140, 110, 551, 391));
        Pourcentage = new QTextEdit(groupBox);
        Pourcentage->setObjectName(QStringLiteral("Pourcentage"));
        Pourcentage->setGeometry(QRect(200, 161, 211, 31));
        label_13 = new QLabel(groupBox);
        label_13->setObjectName(QStringLiteral("label_13"));
        label_13->setGeometry(QRect(100, 95, 91, 31));
        label_12 = new QLabel(groupBox);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setGeometry(QRect(100, 194, 91, 31));
        label_15 = new QLabel(groupBox);
        label_15->setObjectName(QStringLiteral("label_15"));
        label_15->setGeometry(QRect(100, 161, 91, 31));
        label_14 = new QLabel(groupBox);
        label_14->setObjectName(QStringLiteral("label_14"));
        label_14->setGeometry(QRect(100, 128, 91, 31));
        AjouterBouton = new QPushButton(groupBox);
        AjouterBouton->setObjectName(QStringLiteral("AjouterBouton"));
        AjouterBouton->setGeometry(QRect(255, 275, 75, 23));
        label_16 = new QLabel(groupBox);
        label_16->setObjectName(QStringLiteral("label_16"));
        label_16->setGeometry(QRect(100, 226, 91, 31));
        duree = new QTextEdit(groupBox);
        duree->setObjectName(QStringLiteral("duree"));
        duree->setGeometry(QRect(200, 226, 211, 31));
        comboBox_nomprod = new QComboBox(groupBox);
        comboBox_nomprod->setObjectName(QStringLiteral("comboBox_nomprod"));
        comboBox_nomprod->setGeometry(QRect(200, 100, 211, 22));
        Prixav = new QTextBrowser(groupBox);
        Prixav->setObjectName(QStringLiteral("Prixav"));
        Prixav->setGeometry(QRect(200, 129, 211, 31));
        Prixap = new QTextBrowser(groupBox);
        Prixap->setObjectName(QStringLiteral("Prixap"));
        Prixap->setGeometry(QRect(200, 194, 211, 31));
        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        groupBox_2 = new QGroupBox(tab_2);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setGeometry(QRect(460, 30, 381, 281));
        comboBox_supp = new QComboBox(groupBox_2);
        comboBox_supp->setObjectName(QStringLiteral("comboBox_supp"));
        comboBox_supp->setGeometry(QRect(160, 17, 121, 22));
        label = new QLabel(groupBox_2);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(70, 12, 81, 31));
        SupprimerBouton = new QPushButton(groupBox_2);
        SupprimerBouton->setObjectName(QStringLiteral("SupprimerBouton"));
        SupprimerBouton->setGeometry(QRect(210, 240, 75, 23));
        label_27 = new QLabel(groupBox_2);
        label_27->setObjectName(QStringLiteral("label_27"));
        label_27->setGeometry(QRect(10, 126, 91, 31));
        label_24 = new QLabel(groupBox_2);
        label_24->setObjectName(QStringLiteral("label_24"));
        label_24->setGeometry(QRect(10, 62, 91, 31));
        label_25 = new QLabel(groupBox_2);
        label_25->setObjectName(QStringLiteral("label_25"));
        label_25->setGeometry(QRect(10, 94, 91, 31));
        label_26 = new QLabel(groupBox_2);
        label_26->setObjectName(QStringLiteral("label_26"));
        label_26->setGeometry(QRect(10, 158, 91, 31));
        Nomval = new QTextBrowser(groupBox_2);
        Nomval->setObjectName(QStringLiteral("Nomval"));
        Nomval->setGeometry(QRect(110, 62, 256, 31));
        anciepval = new QTextBrowser(groupBox_2);
        anciepval->setObjectName(QStringLiteral("anciepval"));
        anciepval->setGeometry(QRect(110, 94, 256, 31));
        pourcentageval = new QTextBrowser(groupBox_2);
        pourcentageval->setObjectName(QStringLiteral("pourcentageval"));
        pourcentageval->setGeometry(QRect(110, 126, 256, 31));
        nouvpval = new QTextBrowser(groupBox_2);
        nouvpval->setObjectName(QStringLiteral("nouvpval"));
        nouvpval->setGeometry(QRect(110, 158, 256, 31));
        dureeval = new QTextBrowser(groupBox_2);
        dureeval->setObjectName(QStringLiteral("dureeval"));
        dureeval->setGeometry(QRect(110, 190, 256, 31));
        label_28 = new QLabel(groupBox_2);
        label_28->setObjectName(QStringLiteral("label_28"));
        label_28->setGeometry(QRect(10, 190, 91, 31));
        tablemodifier = new QTableView(tab_2);
        tablemodifier->setObjectName(QStringLiteral("tablemodifier"));
        tablemodifier->setGeometry(QRect(30, 350, 811, 251));
        tablemodifier->setAutoFillBackground(false);
        groupBox_3 = new QGroupBox(tab_2);
        groupBox_3->setObjectName(QStringLiteral("groupBox_3"));
        groupBox_3->setGeometry(QRect(29, 29, 391, 281));
        comboBox_modif = new QComboBox(groupBox_3);
        comboBox_modif->setObjectName(QStringLiteral("comboBox_modif"));
        comboBox_modif->setGeometry(QRect(100, 20, 121, 22));
        label_29 = new QLabel(groupBox_3);
        label_29->setObjectName(QStringLiteral("label_29"));
        label_29->setGeometry(QRect(10, 188, 91, 31));
        label_30 = new QLabel(groupBox_3);
        label_30->setObjectName(QStringLiteral("label_30"));
        label_30->setGeometry(QRect(10, 156, 91, 31));
        label_31 = new QLabel(groupBox_3);
        label_31->setObjectName(QStringLiteral("label_31"));
        label_31->setGeometry(QRect(10, 124, 91, 31));
        label_32 = new QLabel(groupBox_3);
        label_32->setObjectName(QStringLiteral("label_32"));
        label_32->setGeometry(QRect(10, 92, 91, 31));
        label_33 = new QLabel(groupBox_3);
        label_33->setObjectName(QStringLiteral("label_33"));
        label_33->setGeometry(QRect(10, 60, 91, 31));
        pourcentagemodif = new QLineEdit(groupBox_3);
        pourcentagemodif->setObjectName(QStringLiteral("pourcentagemodif"));
        pourcentagemodif->setGeometry(QRect(100, 125, 261, 31));
        dureemodif = new QLineEdit(groupBox_3);
        dureemodif->setObjectName(QStringLiteral("dureemodif"));
        dureemodif->setGeometry(QRect(100, 189, 261, 31));
        nommodif = new QTextBrowser(groupBox_3);
        nommodif->setObjectName(QStringLiteral("nommodif"));
        nommodif->setGeometry(QRect(100, 60, 256, 31));
        anciepmodif = new QTextBrowser(groupBox_3);
        anciepmodif->setObjectName(QStringLiteral("anciepmodif"));
        anciepmodif->setGeometry(QRect(100, 93, 256, 30));
        nouvpmodif = new QTextBrowser(groupBox_3);
        nouvpmodif->setObjectName(QStringLiteral("nouvpmodif"));
        nouvpmodif->setGeometry(QRect(100, 157, 256, 31));
        btn_modif = new QPushButton(groupBox_3);
        btn_modif->setObjectName(QStringLiteral("btn_modif"));
        btn_modif->setGeometry(QRect(170, 240, 75, 23));
        label_2 = new QLabel(tab_2);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(250, 320, 71, 20));
        rechercheav = new QLineEdit(tab_2);
        rechercheav->setObjectName(QStringLiteral("rechercheav"));
        rechercheav->setGeometry(QRect(321, 314, 251, 31));
        tricombo = new QComboBox(tab_2);
        tricombo->setObjectName(QStringLiteral("tricombo"));
        tricombo->setGeometry(QRect(680, 320, 131, 22));
        label_3 = new QLabel(tab_2);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(610, 324, 47, 14));
        tabWidget->addTab(tab_2, QString());

        retranslateUi(promointer);

        tabWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(promointer);
    } // setupUi

    void retranslateUi(QDialog *promointer)
    {
        promointer->setWindowTitle(QApplication::translate("promointer", "Dialog", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("promointer", "Ajouter Promotion", Q_NULLPTR));
        label_13->setText(QApplication::translate("promointer", "Nom Produit :", Q_NULLPTR));
        label_12->setText(QApplication::translate("promointer", "Nouveau prix :", Q_NULLPTR));
        label_15->setText(QApplication::translate("promointer", "Pourcentage :", Q_NULLPTR));
        label_14->setText(QApplication::translate("promointer", "Ancien Prix :", Q_NULLPTR));
        AjouterBouton->setText(QApplication::translate("promointer", "Ajouter", Q_NULLPTR));
        label_16->setText(QApplication::translate("promointer", "Duree :", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("promointer", "Ajouter Promotion", Q_NULLPTR));
        groupBox_2->setTitle(QApplication::translate("promointer", "Supprimer Promotion", Q_NULLPTR));
        label->setText(QApplication::translate("promointer", "ID Promotion", Q_NULLPTR));
        SupprimerBouton->setText(QApplication::translate("promointer", "Supprimer", Q_NULLPTR));
        label_27->setText(QApplication::translate("promointer", "Pourcentage :", Q_NULLPTR));
        label_24->setText(QApplication::translate("promointer", "Nom :", Q_NULLPTR));
        label_25->setText(QApplication::translate("promointer", "Ancien Prix :", Q_NULLPTR));
        label_26->setText(QApplication::translate("promointer", "Nouveau prix :", Q_NULLPTR));
        label_28->setText(QApplication::translate("promointer", "Duree :", Q_NULLPTR));
        groupBox_3->setTitle(QApplication::translate("promointer", "Modifier Promotion", Q_NULLPTR));
        label_29->setText(QApplication::translate("promointer", "Duree :", Q_NULLPTR));
        label_30->setText(QApplication::translate("promointer", "Nouveau prix :", Q_NULLPTR));
        label_31->setText(QApplication::translate("promointer", "Pourcentage :", Q_NULLPTR));
        label_32->setText(QApplication::translate("promointer", "Ancien Prix :", Q_NULLPTR));
        label_33->setText(QApplication::translate("promointer", "Nom :", Q_NULLPTR));
        btn_modif->setText(QApplication::translate("promointer", "Modifier", Q_NULLPTR));
        label_2->setText(QApplication::translate("promointer", "Recherche :", Q_NULLPTR));
        label_3->setText(QApplication::translate("promointer", "Tri par :", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("promointer", "Gerer Promotion", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class promointer: public Ui_promointer {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PROMOINTER_H
