/********************************************************************************
** Form generated from reading UI file 'evenementinter.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EVENEMENTINTER_H
#define UI_EVENEMENTINTER_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateEdit>
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

class Ui_EvenementInter
{
public:
    QTabWidget *tabWidget;
    QWidget *tab;
    QGroupBox *groupBox;
    QDateEdit *dateEdit;
    QLabel *label_13;
    QLabel *label_12;
    QLabel *label_14;
    QTextEdit *Nom;
    QTextEdit *Description;
    QPushButton *AjouterBouton;
    QWidget *tab_2;
    QGroupBox *groupBox_2;
    QComboBox *comboBox;
    QLabel *label;
    QPushButton *SupprimerBouton;
    QLabel *label_24;
    QLabel *label_25;
    QLabel *label_26;
    QTextBrowser *Nomval;
    QTextBrowser *Descriptionval;
    QTextBrowser *Dateeventval;
    QTableView *tablemodifier;
    QGroupBox *groupBox_3;
    QComboBox *comboBox_modif;
    QLabel *label_29;
    QLabel *label_28;
    QLabel *label_27;
    QLineEdit *nommodif;
    QLineEdit *descmodif;
    QLabel *label_2;
    QDateEdit *datemodif;
    QPushButton *modifiebtn;

    void setupUi(QDialog *EvenementInter)
    {
        if (EvenementInter->objectName().isEmpty())
            EvenementInter->setObjectName(QStringLiteral("EvenementInter"));
        EvenementInter->resize(821, 615);
        tabWidget = new QTabWidget(EvenementInter);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setGeometry(QRect(20, 20, 781, 571));
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        groupBox = new QGroupBox(tab);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(130, 70, 441, 261));
        dateEdit = new QDateEdit(groupBox);
        dateEdit->setObjectName(QStringLiteral("dateEdit"));
        dateEdit->setGeometry(QRect(105, 116, 211, 31));
        label_13 = new QLabel(groupBox);
        label_13->setObjectName(QStringLiteral("label_13"));
        label_13->setGeometry(QRect(5, 52, 91, 31));
        label_12 = new QLabel(groupBox);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setGeometry(QRect(5, 116, 91, 31));
        label_14 = new QLabel(groupBox);
        label_14->setObjectName(QStringLiteral("label_14"));
        label_14->setGeometry(QRect(5, 84, 91, 31));
        Nom = new QTextEdit(groupBox);
        Nom->setObjectName(QStringLiteral("Nom"));
        Nom->setGeometry(QRect(105, 52, 211, 31));
        Description = new QTextEdit(groupBox);
        Description->setObjectName(QStringLiteral("Description"));
        Description->setGeometry(QRect(105, 84, 211, 31));
        AjouterBouton = new QPushButton(groupBox);
        AjouterBouton->setObjectName(QStringLiteral("AjouterBouton"));
        AjouterBouton->setGeometry(QRect(120, 200, 75, 23));
        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        groupBox_2 = new QGroupBox(tab_2);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setGeometry(QRect(370, 30, 381, 201));
        comboBox = new QComboBox(groupBox_2);
        comboBox->setObjectName(QStringLiteral("comboBox"));
        comboBox->setGeometry(QRect(160, 17, 121, 22));
        label = new QLabel(groupBox_2);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(70, 12, 81, 31));
        SupprimerBouton = new QPushButton(groupBox_2);
        SupprimerBouton->setObjectName(QStringLiteral("SupprimerBouton"));
        SupprimerBouton->setGeometry(QRect(170, 160, 75, 23));
        label_24 = new QLabel(groupBox_2);
        label_24->setObjectName(QStringLiteral("label_24"));
        label_24->setGeometry(QRect(10, 51, 91, 31));
        label_25 = new QLabel(groupBox_2);
        label_25->setObjectName(QStringLiteral("label_25"));
        label_25->setGeometry(QRect(10, 85, 91, 31));
        label_26 = new QLabel(groupBox_2);
        label_26->setObjectName(QStringLiteral("label_26"));
        label_26->setGeometry(QRect(10, 119, 91, 31));
        Nomval = new QTextBrowser(groupBox_2);
        Nomval->setObjectName(QStringLiteral("Nomval"));
        Nomval->setGeometry(QRect(110, 51, 256, 31));
        Descriptionval = new QTextBrowser(groupBox_2);
        Descriptionval->setObjectName(QStringLiteral("Descriptionval"));
        Descriptionval->setGeometry(QRect(110, 85, 256, 31));
        Dateeventval = new QTextBrowser(groupBox_2);
        Dateeventval->setObjectName(QStringLiteral("Dateeventval"));
        Dateeventval->setGeometry(QRect(110, 119, 256, 31));
        tablemodifier = new QTableView(tab_2);
        tablemodifier->setObjectName(QStringLiteral("tablemodifier"));
        tablemodifier->setGeometry(QRect(10, 290, 741, 251));
        tablemodifier->setAutoFillBackground(false);
        groupBox_3 = new QGroupBox(tab_2);
        groupBox_3->setObjectName(QStringLiteral("groupBox_3"));
        groupBox_3->setGeometry(QRect(20, 30, 331, 201));
        comboBox_modif = new QComboBox(groupBox_3);
        comboBox_modif->setObjectName(QStringLiteral("comboBox_modif"));
        comboBox_modif->setGeometry(QRect(110, 20, 121, 22));
        label_29 = new QLabel(groupBox_3);
        label_29->setObjectName(QStringLiteral("label_29"));
        label_29->setGeometry(QRect(10, 124, 91, 31));
        label_28 = new QLabel(groupBox_3);
        label_28->setObjectName(QStringLiteral("label_28"));
        label_28->setGeometry(QRect(10, 56, 91, 31));
        label_27 = new QLabel(groupBox_3);
        label_27->setObjectName(QStringLiteral("label_27"));
        label_27->setGeometry(QRect(10, 90, 91, 31));
        nommodif = new QLineEdit(groupBox_3);
        nommodif->setObjectName(QStringLiteral("nommodif"));
        nommodif->setGeometry(QRect(110, 60, 210, 20));
        descmodif = new QLineEdit(groupBox_3);
        descmodif->setObjectName(QStringLiteral("descmodif"));
        descmodif->setGeometry(QRect(110, 95, 211, 20));
        label_2 = new QLabel(groupBox_3);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(10, 16, 81, 31));
        datemodif = new QDateEdit(groupBox_3);
        datemodif->setObjectName(QStringLiteral("datemodif"));
        datemodif->setGeometry(QRect(110, 130, 211, 21));
        modifiebtn = new QPushButton(groupBox_3);
        modifiebtn->setObjectName(QStringLiteral("modifiebtn"));
        modifiebtn->setGeometry(QRect(110, 160, 75, 23));
        tabWidget->addTab(tab_2, QString());

        retranslateUi(EvenementInter);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(EvenementInter);
    } // setupUi

    void retranslateUi(QDialog *EvenementInter)
    {
        EvenementInter->setWindowTitle(QApplication::translate("EvenementInter", "Dialog", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("EvenementInter", "Ajouter Evenement", Q_NULLPTR));
        label_13->setText(QApplication::translate("EvenementInter", "Nom :", Q_NULLPTR));
        label_12->setText(QApplication::translate("EvenementInter", "Date Evenement :", Q_NULLPTR));
        label_14->setText(QApplication::translate("EvenementInter", "Description :", Q_NULLPTR));
        AjouterBouton->setText(QApplication::translate("EvenementInter", "Ajouter", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("EvenementInter", "Ajouter Evenement", Q_NULLPTR));
        groupBox_2->setTitle(QApplication::translate("EvenementInter", "Supprimer Evenement", Q_NULLPTR));
        label->setText(QApplication::translate("EvenementInter", "ID evennement", Q_NULLPTR));
        SupprimerBouton->setText(QApplication::translate("EvenementInter", "Supprimer", Q_NULLPTR));
        label_24->setText(QApplication::translate("EvenementInter", "Nom :", Q_NULLPTR));
        label_25->setText(QApplication::translate("EvenementInter", "Description :", Q_NULLPTR));
        label_26->setText(QApplication::translate("EvenementInter", "Date Evenement :", Q_NULLPTR));
        groupBox_3->setTitle(QApplication::translate("EvenementInter", "Modifier Evenment", Q_NULLPTR));
        label_29->setText(QApplication::translate("EvenementInter", "Date Evenement :", Q_NULLPTR));
        label_28->setText(QApplication::translate("EvenementInter", "Nom :", Q_NULLPTR));
        label_27->setText(QApplication::translate("EvenementInter", "Description :", Q_NULLPTR));
        label_2->setText(QApplication::translate("EvenementInter", "ID evennement", Q_NULLPTR));
        modifiebtn->setText(QApplication::translate("EvenementInter", "Modifier", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("EvenementInter", "Afficher Evenment", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class EvenementInter: public Ui_EvenementInter {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EVENEMENTINTER_H
