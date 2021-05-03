/********************************************************************************
** Form generated from reading UI file 'gestion_livraison.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GESTION_LIVRAISON_H
#define UI_GESTION_LIVRAISON_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_gestion_livraison
{
public:
    QWidget *centralwidget;
    QStackedWidget *sw_main;
    QWidget *page;
    QWidget *page_2;
    QLabel *label;
    QTabWidget *tw_livraur;
    QWidget *ajouter_livreur;
    QPushButton *pb_ajouter_livreur;
    QLineEdit *le_id_ajouter_livreur;
    QLineEdit *le_nom_ajouter_livreur;
    QLineEdit *le_prenom_ajouter_livreur;
    QLineEdit *le_salaire_ajouter_livreur;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QWidget *afficher_livreur;
    QLineEdit *le_search_livreur;
    QTableView *tv_livreur;
    QComboBox *cb_sort_livreur;
    QRadioButton *pdf;
    QCheckBox *Translate;
    QWidget *modifier_livreur;
    QLabel *label_7;
    QLabel *label_8;
    QLabel *label_9;
    QLineEdit *le_prenom_modifier_livreur;
    QPushButton *pb_modifer_livreur;
    QLabel *label_10;
    QLineEdit *le_nom_modfier_livreur;
    QLineEdit *le_salaire_modifer_livreur;
    QComboBox *cb_modfier_livreur;
    QWidget *supprimer_livreur;
    QComboBox *cb_supp_livreur;
    QPushButton *pb_supp_livreur;
    QWidget *tab;
    QPushButton *buttonHis;
    QLineEdit *searchHis;
    QTextBrowser *textHisto;
    QWidget *page_3;
    QLabel *label_2;
    QTabWidget *tw_livraur_2;
    QWidget *ajouter_livreur_2;
    QPushButton *pb_liv_ajout;
    QLineEdit *le_id_liv_ajout;
    QLineEdit *le_adresse_liv_ajout;
    QLabel *label_11;
    QLabel *label_12;
    QLabel *label_13;
    QTextEdit *te_des_liv_ajout;
    QComboBox *cb_commande_ajout;
    QComboBox *cb_livreur_ajout;
    QLabel *label_14;
    QLabel *label_19;
    QWidget *afficher_livreur_2;
    QLineEdit *le_search_liv;
    QTableView *tv_liv;
    QComboBox *cb_sort_liv;
    QWidget *modifier_livreur_2;
    QComboBox *cb_livreur_modif;
    QLabel *label_15;
    QLineEdit *le_adresse_liv_modif;
    QComboBox *cb_commande_modif;
    QLabel *label_16;
    QPushButton *pb_liv_modif;
    QLabel *label_17;
    QTextEdit *te_des_liv_modif;
    QLabel *label_18;
    QLabel *label_20;
    QComboBox *cb_liv_modif;
    QWidget *supprimer_livreur_2;
    QComboBox *cb_supp_liv;
    QPushButton *pb_supp_liv;
    QPushButton *pb_livreur;
    QPushButton *pushButton_2;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *gestion_livraison)
    {
        if (gestion_livraison->objectName().isEmpty())
            gestion_livraison->setObjectName(QStringLiteral("gestion_livraison"));
        gestion_livraison->resize(800, 600);
        gestion_livraison->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        centralwidget = new QWidget(gestion_livraison);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        sw_main = new QStackedWidget(centralwidget);
        sw_main->setObjectName(QStringLiteral("sw_main"));
        sw_main->setGeometry(QRect(50, -20, 851, 481));
        sw_main->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        page = new QWidget();
        page->setObjectName(QStringLiteral("page"));
        sw_main->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName(QStringLiteral("page_2"));
        label = new QLabel(page_2);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(130, 20, 55, 16));
        tw_livraur = new QTabWidget(page_2);
        tw_livraur->setObjectName(QStringLiteral("tw_livraur"));
        tw_livraur->setGeometry(QRect(40, 50, 701, 411));
        tw_livraur->setStyleSheet(QLatin1String("QTabWidget::pane { /* The tab widget frame */\n"
"border-top: 5px solid white ;\n"
"}\n"
"/* Style the tab using the tab sub-control. Note that it reads QTabBar not QTabWidget */\n"
"QTabBar::tab {\n"
"background: #FFFFF;\n"
"border: 2px solid #87CEEB;\n"
"border-bottom-color: #87CEEB; /* same as the pane color */\n"
"border-top-left-radius:8px;\n"
"border-top-right-radius: 8px;\n"
"min-width: 140px;\n"
"padding: 8px;\n"
"color: #696969;\n"
"\n"
"\n"
"}\n"
"QTabBar::tab:selected, QTabBar::tab:hover {\n"
"background: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #DCDCDC, stop: 0.4 #C0C0C0, stop: 0.5 #A9A9A9, stop: 1.0 #A9A9A9);\n"
"}\n"
"QTabBar::tab:selected {\n"
"border-color: #9B9B9B;\n"
"border-bottom-color: #87CEEB; /* same as pane color */\n"
"color: #FFFFFF;\n"
";\n"
"\n"
"}\n"
"QTabBar::tab:!selected {\n"
"margin-top: 2px; /* make non-selected tabs look smaller */\n"
"}\n"
"QLineEdit {\n"
"  width: 100%;\n"
"  padding: 12px 20px;\n"
"  margin: 8px 0;\n"
"  display: inline-block;\n"
"  border: 1px "
                        "solid #ccc;\n"
"  border-radius: 4px;\n"
"  box-sizing: border-box;\n"
"}"));
        ajouter_livreur = new QWidget();
        ajouter_livreur->setObjectName(QStringLiteral("ajouter_livreur"));
        pb_ajouter_livreur = new QPushButton(ajouter_livreur);
        pb_ajouter_livreur->setObjectName(QStringLiteral("pb_ajouter_livreur"));
        pb_ajouter_livreur->setGeometry(QRect(320, 110, 93, 28));
        pb_ajouter_livreur->setStyleSheet(QLatin1String("QPushButton {\n"
"	font: 87 8pt \"Segoe UI Black\";\n"
"color: #dcdcdc;\n"
"background:#778899;\n"
"border: none;\n"
"border: 1px solid #DCDCDC;\n"
"border-radius: 8px;\n"
"\n"
"}\n"
"QPushButton:hover {\n"
"color:#fff;\n"
"font: 87 8pt \"Segoe UI Black\";\n"
"background:#ADD8E6;\n"
"border: none;\n"
"}"));
        le_id_ajouter_livreur = new QLineEdit(ajouter_livreur);
        le_id_ajouter_livreur->setObjectName(QStringLiteral("le_id_ajouter_livreur"));
        le_id_ajouter_livreur->setGeometry(QRect(100, 31, 113, 41));
        le_id_ajouter_livreur->setStyleSheet(QLatin1String("QLineEdit {\n"
"  width: 100%;\n"
"  padding: 12px 20px;\n"
"  margin: 8px 0;\n"
"  display: inline-block;\n"
"  border: 1px solid #dcdcdc;\n"
"  border-radius: 4px;\n"
"  box-sizing: border-box;\n"
"  background: #ADD8E6;\n"
"  color: #FFFFFF;\n"
"}"));
        le_nom_ajouter_livreur = new QLineEdit(ajouter_livreur);
        le_nom_ajouter_livreur->setObjectName(QStringLiteral("le_nom_ajouter_livreur"));
        le_nom_ajouter_livreur->setGeometry(QRect(100, 71, 113, 41));
        le_nom_ajouter_livreur->setStyleSheet(QLatin1String("QLineEdit {\n"
"  width: 100%;\n"
"  padding: 12px 20px;\n"
"  margin: 8px 0;\n"
"  display: inline-block;\n"
"  border: 1px solid #dcdcdc;\n"
"  border-radius: 4px;\n"
"  box-sizing: border-box;\n"
"  background: #ADD8E6;\n"
"  color: #FFFFFF;\n"
"}"));
        le_prenom_ajouter_livreur = new QLineEdit(ajouter_livreur);
        le_prenom_ajouter_livreur->setObjectName(QStringLiteral("le_prenom_ajouter_livreur"));
        le_prenom_ajouter_livreur->setGeometry(QRect(100, 111, 113, 41));
        le_prenom_ajouter_livreur->setStyleSheet(QLatin1String("QLineEdit {\n"
"  width: 100%;\n"
"  padding: 12px 20px;\n"
"  margin: 8px 0;\n"
"  display: inline-block;\n"
"  border: 1px solid #dcdcdc;\n"
"  border-radius: 4px;\n"
"  box-sizing: border-box;\n"
"  background: #ADD8E6;\n"
"  color: #FFFFFF;\n"
"}"));
        le_salaire_ajouter_livreur = new QLineEdit(ajouter_livreur);
        le_salaire_ajouter_livreur->setObjectName(QStringLiteral("le_salaire_ajouter_livreur"));
        le_salaire_ajouter_livreur->setGeometry(QRect(100, 151, 113, 41));
        le_salaire_ajouter_livreur->setStyleSheet(QLatin1String("QLineEdit {\n"
"  width: 100%;\n"
"  padding: 12px 20px;\n"
"  margin: 8px 0;\n"
"  display: inline-block;\n"
"  border: 1px solid #dcdcdc;\n"
"  border-radius: 4px;\n"
"  box-sizing: border-box;\n"
"  background: #ADD8E6;\n"
"  color: #FFFFFF;\n"
"}"));
        label_3 = new QLabel(ajouter_livreur);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(20, 50, 55, 16));
        label_3->setStyleSheet(QLatin1String("background-color: transparent;\n"
"font: 8pt \"Castellar\";\n"
"	color: #454544;\n"
"	font-weight: bold;\n"
"	font-size: 13px;\n"
"border:none;"));
        label_4 = new QLabel(ajouter_livreur);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(20, 90, 55, 16));
        label_4->setStyleSheet(QLatin1String("background-color: transparent;\n"
"font: 8pt \"Castellar\";\n"
"	color: #454544;\n"
"	font-weight: bold;\n"
"	font-size: 13px;\n"
"border:none;"));
        label_5 = new QLabel(ajouter_livreur);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(20, 130, 71, 16));
        label_5->setStyleSheet(QLatin1String("background-color: transparent;\n"
"font: 8pt \"Castellar\";\n"
"	color: #454544;\n"
"	font-weight: bold;\n"
"	font-size: 13px;\n"
"border:none;"));
        label_6 = new QLabel(ajouter_livreur);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(20, 170, 81, 16));
        label_6->setStyleSheet(QLatin1String("background-color: transparent;\n"
"font: 8pt \"Castellar\";\n"
"	color: #454544;\n"
"	font-weight: bold;\n"
"	font-size: 13px;\n"
"border:none;"));
        tw_livraur->addTab(ajouter_livreur, QString());
        afficher_livreur = new QWidget();
        afficher_livreur->setObjectName(QStringLiteral("afficher_livreur"));
        le_search_livreur = new QLineEdit(afficher_livreur);
        le_search_livreur->setObjectName(QStringLiteral("le_search_livreur"));
        le_search_livreur->setGeometry(QRect(380, 1, 281, 41));
        le_search_livreur->setStyleSheet(QLatin1String("border: 2px solid #87CEEB;\n"
"border-radius: 8px;"));
        tv_livreur = new QTableView(afficher_livreur);
        tv_livreur->setObjectName(QStringLiteral("tv_livreur"));
        tv_livreur->setGeometry(QRect(10, 80, 641, 192));
        tv_livreur->setStyleSheet(QLatin1String("border: 2px solid #87CEEB;\n"
"border-radius: 8px;"));
        cb_sort_livreur = new QComboBox(afficher_livreur);
        cb_sort_livreur->setObjectName(QStringLiteral("cb_sort_livreur"));
        cb_sort_livreur->setGeometry(QRect(70, 11, 151, 21));
        cb_sort_livreur->setStyleSheet(QLatin1String("border: 2px solid #87CEEB;\n"
"border-radius: 8px;"));
        pdf = new QRadioButton(afficher_livreur);
        pdf->setObjectName(QStringLiteral("pdf"));
        pdf->setGeometry(QRect(230, 10, 111, 31));
        pdf->setStyleSheet(QLatin1String("QRadioButton {\n"
"color: #dcdcdc;\n"
"background:#778899;\n"
"border: none;\n"
"font-size:20px;\n"
"font: 87 8pt \"Segoe UI Black\";\n"
"text-align: left;\n"
"border: 1px solid #FFD700;\n"
"border-radius: 8px;\n"
"}\n"
"QRadioButton:hover {\n"
"color:#fff;\n"
"background:#87CEEB;\n"
"border: none;\n"
"text-align: left;\n"
"}\n"
""));
        Translate = new QCheckBox(afficher_livreur);
        Translate->setObjectName(QStringLiteral("Translate"));
        Translate->setGeometry(QRect(240, 50, 91, 21));
        tw_livraur->addTab(afficher_livreur, QString());
        modifier_livreur = new QWidget();
        modifier_livreur->setObjectName(QStringLiteral("modifier_livreur"));
        label_7 = new QLabel(modifier_livreur);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(70, 40, 55, 16));
        label_7->setStyleSheet(QLatin1String("background-color: transparent;\n"
"font: 8pt \"Castellar\";\n"
"	color: #454544;\n"
"	font-weight: bold;\n"
"	font-size: 13px;\n"
"border:none;"));
        label_8 = new QLabel(modifier_livreur);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(70, 160, 71, 16));
        label_8->setStyleSheet(QLatin1String("background-color: transparent;\n"
"font: 8pt \"Castellar\";\n"
"	color: #454544;\n"
"	font-weight: bold;\n"
"	font-size: 13px;\n"
"border:none;"));
        label_9 = new QLabel(modifier_livreur);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(70, 120, 71, 16));
        label_9->setStyleSheet(QLatin1String("background-color: transparent;\n"
"font: 8pt \"Castellar\";\n"
"	color: #454544;\n"
"	font-weight: bold;\n"
"	font-size: 13px;\n"
"border:none;"));
        le_prenom_modifier_livreur = new QLineEdit(modifier_livreur);
        le_prenom_modifier_livreur->setObjectName(QStringLiteral("le_prenom_modifier_livreur"));
        le_prenom_modifier_livreur->setGeometry(QRect(170, 100, 113, 41));
        le_prenom_modifier_livreur->setStyleSheet(QLatin1String("QLineEdit {\n"
"  width: 100%;\n"
"  padding: 12px 20px;\n"
"  margin: 8px 0;\n"
"  display: inline-block;\n"
"  border: 1px solid #dcdcdc;\n"
"  border-radius: 4px;\n"
"  box-sizing: border-box;\n"
"  background: #ADD8E6;\n"
"  color: #FFFFFF;\n"
"}"));
        pb_modifer_livreur = new QPushButton(modifier_livreur);
        pb_modifer_livreur->setObjectName(QStringLiteral("pb_modifer_livreur"));
        pb_modifer_livreur->setGeometry(QRect(370, 100, 93, 28));
        pb_modifer_livreur->setStyleSheet(QLatin1String("QPushButton {\n"
"	font: 87 8pt \"Segoe UI Black\";\n"
"color: #dcdcdc;\n"
"background:#778899;\n"
"border: none;\n"
"border: 1px solid #DCDCDC;\n"
"border-radius: 8px;\n"
"\n"
"}\n"
"QPushButton:hover {\n"
"color:#fff;\n"
"font: 87 8pt \"Segoe UI Black\";\n"
"background:#ADD8E6;\n"
"border: none;\n"
"}"));
        label_10 = new QLabel(modifier_livreur);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(70, 80, 55, 16));
        label_10->setStyleSheet(QLatin1String("background-color: transparent;\n"
"font: 8pt \"Castellar\";\n"
"	color: #454544;\n"
"	font-weight: bold;\n"
"	font-size: 13px;\n"
"border:none;"));
        le_nom_modfier_livreur = new QLineEdit(modifier_livreur);
        le_nom_modfier_livreur->setObjectName(QStringLiteral("le_nom_modfier_livreur"));
        le_nom_modfier_livreur->setGeometry(QRect(170, 60, 113, 41));
        le_nom_modfier_livreur->setStyleSheet(QLatin1String("QLineEdit {\n"
"  width: 100%;\n"
"  padding: 12px 20px;\n"
"  margin: 8px 0;\n"
"  display: inline-block;\n"
"  border: 1px solid #dcdcdc;\n"
"  border-radius: 4px;\n"
"  box-sizing: border-box;\n"
"  background: #ADD8E6;\n"
"  color: #FFFFFF;\n"
"}"));
        le_salaire_modifer_livreur = new QLineEdit(modifier_livreur);
        le_salaire_modifer_livreur->setObjectName(QStringLiteral("le_salaire_modifer_livreur"));
        le_salaire_modifer_livreur->setGeometry(QRect(170, 140, 113, 41));
        le_salaire_modifer_livreur->setStyleSheet(QLatin1String("QLineEdit {\n"
"  width: 100%;\n"
"  padding: 12px 20px;\n"
"  margin: 8px 0;\n"
"  display: inline-block;\n"
"  border: 1px solid #dcdcdc;\n"
"  border-radius: 4px;\n"
"  box-sizing: border-box;\n"
"  background: #ADD8E6;\n"
"  color: #FFFFFF;\n"
"}"));
        cb_modfier_livreur = new QComboBox(modifier_livreur);
        cb_modfier_livreur->setObjectName(QStringLiteral("cb_modfier_livreur"));
        cb_modfier_livreur->setGeometry(QRect(170, 21, 111, 41));
        cb_modfier_livreur->setStyleSheet(QLatin1String("background-color: rgb(250, 211, 0);\n"
"width: 100%;\n"
"  padding: 12px 20px;\n"
"  margin: 8px 0;\n"
"  display: inline-block;\n"
"  border: 1px solid #dcdcdc;\n"
"  border-radius: 4px;\n"
"  box-sizing: border-box;\n"
"  background: #ADD8E6;\n"
"  color: #FFFFFF;"));
        tw_livraur->addTab(modifier_livreur, QString());
        supprimer_livreur = new QWidget();
        supprimer_livreur->setObjectName(QStringLiteral("supprimer_livreur"));
        cb_supp_livreur = new QComboBox(supprimer_livreur);
        cb_supp_livreur->setObjectName(QStringLiteral("cb_supp_livreur"));
        cb_supp_livreur->setGeometry(QRect(100, 41, 161, 41));
        cb_supp_livreur->setStyleSheet(QLatin1String("background-color: rgb(250, 211, 0);\n"
"width: 100%;\n"
"  padding: 12px 20px;\n"
"  margin: 8px 0;\n"
"  display: inline-block;\n"
"  border: 1px solid #dcdcdc;\n"
"  border-radius: 4px;\n"
"  box-sizing: border-box;\n"
"  background: #ADD8E6;\n"
"  color: #FFFFFF;"));
        pb_supp_livreur = new QPushButton(supprimer_livreur);
        pb_supp_livreur->setObjectName(QStringLiteral("pb_supp_livreur"));
        pb_supp_livreur->setGeometry(QRect(340, 60, 93, 28));
        pb_supp_livreur->setStyleSheet(QLatin1String("QPushButton {\n"
"	font: 87 8pt \"Segoe UI Black\";\n"
"color: #dcdcdc;\n"
"background:#778899;\n"
"border: none;\n"
"border: 1px solid #DCDCDC;\n"
"border-radius: 8px;\n"
"\n"
"}\n"
"QPushButton:hover {\n"
"color:#fff;\n"
"font: 87 8pt \"Segoe UI Black\";\n"
"background:#ADD8E6;\n"
"border: none;\n"
"}"));
        tw_livraur->addTab(supprimer_livreur, QString());
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        buttonHis = new QPushButton(tab);
        buttonHis->setObjectName(QStringLiteral("buttonHis"));
        buttonHis->setGeometry(QRect(410, 70, 75, 23));
        buttonHis->setStyleSheet(QLatin1String("QPushButton {\n"
"	font: 87 8pt \"Segoe UI Black\";\n"
"color: #dcdcdc;\n"
"background:#778899;\n"
"border: none;\n"
"border: 1px solid #DCDCDC;\n"
"border-radius: 8px;\n"
"\n"
"}\n"
"QPushButton:hover {\n"
"color:#fff;\n"
"font: 87 8pt \"Segoe UI Black\";\n"
"background:#ADD8E6;\n"
"border: none;\n"
"}"));
        searchHis = new QLineEdit(tab);
        searchHis->setObjectName(QStringLiteral("searchHis"));
        searchHis->setGeometry(QRect(120, 60, 281, 41));
        searchHis->setStyleSheet(QLatin1String("border: 2px solid #87CEEB;\n"
"border-radius: 8px;"));
        textHisto = new QTextBrowser(tab);
        textHisto->setObjectName(QStringLiteral("textHisto"));
        textHisto->setGeometry(QRect(100, 110, 471, 241));
        QFont font;
        font.setFamily(QStringLiteral("Modern No. 20"));
        font.setPointSize(8);
        font.setBold(false);
        font.setItalic(false);
        font.setWeight(50);
        textHisto->setFont(font);
        tw_livraur->addTab(tab, QString());
        sw_main->addWidget(page_2);
        page_3 = new QWidget();
        page_3->setObjectName(QStringLiteral("page_3"));
        label_2 = new QLabel(page_3);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(20, 20, 55, 16));
        tw_livraur_2 = new QTabWidget(page_3);
        tw_livraur_2->setObjectName(QStringLiteral("tw_livraur_2"));
        tw_livraur_2->setGeometry(QRect(60, 60, 731, 291));
        tw_livraur_2->setStyleSheet(QLatin1String("QTabWidget::pane { /* The tab widget frame */\n"
"border-top: 5px solid white ;\n"
"}\n"
"/* Style the tab using the tab sub-control. Note that it reads QTabBar not QTabWidget */\n"
"QTabBar::tab {\n"
"background: #FFFFF;\n"
"border: 2px solid #87CEEB;\n"
"border-bottom-color: #87CEEB; /* same as the pane color */\n"
"border-top-left-radius:8px;\n"
"border-top-right-radius: 8px;\n"
"min-width: 140px;\n"
"padding: 8px;\n"
"color: #696969;\n"
"\n"
"\n"
"}\n"
"QTabBar::tab:selected, QTabBar::tab:hover {\n"
"background: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #DCDCDC, stop: 0.4 #C0C0C0, stop: 0.5 #A9A9A9, stop: 1.0 #A9A9A9);\n"
"}\n"
"QTabBar::tab:selected {\n"
"border-color: #9B9B9B;\n"
"border-bottom-color: #87CEEB; /* same as pane color */\n"
"color: #FFFFFF;\n"
";\n"
"\n"
"}\n"
"QTabBar::tab:!selected {\n"
"margin-top: 2px; /* make non-selected tabs look smaller */\n"
"}\n"
"QLineEdit {\n"
"  width: 100%;\n"
"  padding: 12px 20px;\n"
"  margin: 8px 0;\n"
"  display: inline-block;\n"
"  border: 1px "
                        "solid #ccc;\n"
"  border-radius: 4px;\n"
"  box-sizing: border-box;\n"
"}"));
        ajouter_livreur_2 = new QWidget();
        ajouter_livreur_2->setObjectName(QStringLiteral("ajouter_livreur_2"));
        pb_liv_ajout = new QPushButton(ajouter_livreur_2);
        pb_liv_ajout->setObjectName(QStringLiteral("pb_liv_ajout"));
        pb_liv_ajout->setGeometry(QRect(510, 170, 93, 28));
        pb_liv_ajout->setStyleSheet(QLatin1String("QPushButton {\n"
"	font: 87 8pt \"Segoe UI Black\";\n"
"color: #dcdcdc;\n"
"background:#778899;\n"
"border: none;\n"
"border: 1px solid #DCDCDC;\n"
"border-radius: 8px;\n"
"\n"
"}\n"
"QPushButton:hover {\n"
"color:#fff;\n"
"font: 87 8pt \"Segoe UI Black\";\n"
"background:#ADD8E6;\n"
"border: none;\n"
"}"));
        le_id_liv_ajout = new QLineEdit(ajouter_livreur_2);
        le_id_liv_ajout->setObjectName(QStringLiteral("le_id_liv_ajout"));
        le_id_liv_ajout->setGeometry(QRect(150, 31, 113, 41));
        le_id_liv_ajout->setStyleSheet(QLatin1String("QLineEdit {\n"
"  width: 100%;\n"
"  padding: 12px 20px;\n"
"  margin: 8px 0;\n"
"  display: inline-block;\n"
"  border: 1px solid #dcdcdc;\n"
"  border-radius: 4px;\n"
"  box-sizing: border-box;\n"
"  background: #ADD8E6;\n"
"  color: #FFFFFF;\n"
"}"));
        le_adresse_liv_ajout = new QLineEdit(ajouter_livreur_2);
        le_adresse_liv_ajout->setObjectName(QStringLiteral("le_adresse_liv_ajout"));
        le_adresse_liv_ajout->setGeometry(QRect(150, 71, 113, 41));
        le_adresse_liv_ajout->setStyleSheet(QLatin1String("QLineEdit {\n"
"  width: 100%;\n"
"  padding: 12px 20px;\n"
"  margin: 8px 0;\n"
"  display: inline-block;\n"
"  border: 1px solid #dcdcdc;\n"
"  border-radius: 4px;\n"
"  box-sizing: border-box;\n"
"  background: #ADD8E6;\n"
"  color: #FFFFFF;\n"
"}"));
        label_11 = new QLabel(ajouter_livreur_2);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setGeometry(QRect(20, 50, 55, 16));
        label_11->setStyleSheet(QLatin1String("background-color: transparent;\n"
"font: 8pt \"Castellar\";\n"
"	color: #454544;\n"
"	font-weight: bold;\n"
"	font-size: 13px;\n"
"border:none;"));
        label_12 = new QLabel(ajouter_livreur_2);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setGeometry(QRect(20, 90, 81, 16));
        label_12->setStyleSheet(QLatin1String("background-color: transparent;\n"
"font: 8pt \"Castellar\";\n"
"	color: #454544;\n"
"	font-weight: bold;\n"
"	font-size: 13px;\n"
"border:none;"));
        label_13 = new QLabel(ajouter_livreur_2);
        label_13->setObjectName(QStringLiteral("label_13"));
        label_13->setGeometry(QRect(20, 150, 111, 16));
        label_13->setStyleSheet(QLatin1String("background-color: transparent;\n"
"font: 8pt \"Castellar\";\n"
"	color: #454544;\n"
"	font-weight: bold;\n"
"	font-size: 13px;\n"
"border:none;"));
        te_des_liv_ajout = new QTextEdit(ajouter_livreur_2);
        te_des_liv_ajout->setObjectName(QStringLiteral("te_des_liv_ajout"));
        te_des_liv_ajout->setGeometry(QRect(150, 140, 201, 121));
        te_des_liv_ajout->setStyleSheet(QLatin1String("background-color: rgb(250, 211, 0);\n"
"width: 100%;\n"
"  padding: 12px 20px;\n"
"  margin: 8px 0;\n"
"  display: inline-block;\n"
"  border: 1px solid #dcdcdc;\n"
"  border-radius: 4px;\n"
"  box-sizing: border-box;\n"
"  background: #ADD8E6;\n"
"  color: #FFFFFF;"));
        cb_commande_ajout = new QComboBox(ajouter_livreur_2);
        cb_commande_ajout->setObjectName(QStringLiteral("cb_commande_ajout"));
        cb_commande_ajout->setGeometry(QRect(510, 31, 111, 41));
        cb_commande_ajout->setStyleSheet(QLatin1String("background-color: rgb(250, 211, 0);\n"
"width: 100%;\n"
"  padding: 12px 20px;\n"
"  margin: 8px 0;\n"
"  display: inline-block;\n"
"  border: 1px solid #dcdcdc;\n"
"  border-radius: 4px;\n"
"  box-sizing: border-box;\n"
"  background: #ADD8E6;\n"
"  color: #FFFFFF;"));
        cb_livreur_ajout = new QComboBox(ajouter_livreur_2);
        cb_livreur_ajout->setObjectName(QStringLiteral("cb_livreur_ajout"));
        cb_livreur_ajout->setGeometry(QRect(510, 71, 111, 41));
        cb_livreur_ajout->setStyleSheet(QLatin1String("background-color: rgb(250, 211, 0);\n"
"width: 100%;\n"
"  padding: 12px 20px;\n"
"  margin: 8px 0;\n"
"  display: inline-block;\n"
"  border: 1px solid #dcdcdc;\n"
"  border-radius: 4px;\n"
"  box-sizing: border-box;\n"
"  background: #ADD8E6;\n"
"  color: #FFFFFF;"));
        label_14 = new QLabel(ajouter_livreur_2);
        label_14->setObjectName(QStringLiteral("label_14"));
        label_14->setGeometry(QRect(370, 50, 131, 20));
        label_14->setStyleSheet(QLatin1String("background-color: transparent;\n"
"font: 8pt \"Castellar\";\n"
"	color: #454544;\n"
"	font-weight: bold;\n"
"	font-size: 13px;\n"
"border:none;"));
        label_19 = new QLabel(ajouter_livreur_2);
        label_19->setObjectName(QStringLiteral("label_19"));
        label_19->setGeometry(QRect(370, 90, 101, 20));
        label_19->setStyleSheet(QLatin1String("background-color: transparent;\n"
"font: 8pt \"Castellar\";\n"
"	color: #454544;\n"
"	font-weight: bold;\n"
"	font-size: 13px;\n"
"border:none;"));
        tw_livraur_2->addTab(ajouter_livreur_2, QString());
        afficher_livreur_2 = new QWidget();
        afficher_livreur_2->setObjectName(QStringLiteral("afficher_livreur_2"));
        le_search_liv = new QLineEdit(afficher_livreur_2);
        le_search_liv->setObjectName(QStringLiteral("le_search_liv"));
        le_search_liv->setGeometry(QRect(380, 1, 281, 41));
        le_search_liv->setStyleSheet(QLatin1String("border: 2px solid #87CEEB;\n"
"border-radius: 8px;"));
        tv_liv = new QTableView(afficher_livreur_2);
        tv_liv->setObjectName(QStringLiteral("tv_liv"));
        tv_liv->setGeometry(QRect(20, 50, 641, 192));
        tv_liv->setStyleSheet(QLatin1String("border: 2px solid #87CEEB;\n"
"border-radius: 8px;"));
        cb_sort_liv = new QComboBox(afficher_livreur_2);
        cb_sort_liv->setObjectName(QStringLiteral("cb_sort_liv"));
        cb_sort_liv->setGeometry(QRect(70, 1, 151, 41));
        cb_sort_liv->setStyleSheet(QLatin1String("background-color: rgb(250, 211, 0);\n"
"width: 100%;\n"
"  padding: 12px 20px;\n"
"  margin: 8px 0;\n"
"  display: inline-block;\n"
"  border: 1px solid #dcdcdc;\n"
"  border-radius: 4px;\n"
"  box-sizing: border-box;\n"
"  background: #ADD8E6;\n"
"  color: #FFFFFF;"));
        tw_livraur_2->addTab(afficher_livreur_2, QString());
        modifier_livreur_2 = new QWidget();
        modifier_livreur_2->setObjectName(QStringLiteral("modifier_livreur_2"));
        cb_livreur_modif = new QComboBox(modifier_livreur_2);
        cb_livreur_modif->setObjectName(QStringLiteral("cb_livreur_modif"));
        cb_livreur_modif->setGeometry(QRect(540, 51, 111, 41));
        cb_livreur_modif->setStyleSheet(QLatin1String("background-color: rgb(250, 211, 0);\n"
"width: 100%;\n"
"  padding: 12px 20px;\n"
"  margin: 8px 0;\n"
"  display: inline-block;\n"
"  border: 1px solid #dcdcdc;\n"
"  border-radius: 4px;\n"
"  box-sizing: border-box;\n"
"  background: #ADD8E6;\n"
"  color: #FFFFFF;"));
        label_15 = new QLabel(modifier_livreur_2);
        label_15->setObjectName(QStringLiteral("label_15"));
        label_15->setGeometry(QRect(50, 30, 55, 16));
        label_15->setStyleSheet(QLatin1String("background-color: transparent;\n"
"font: 8pt \"Castellar\";\n"
"	color: #454544;\n"
"	font-weight: bold;\n"
"	font-size: 13px;\n"
"border:none;"));
        le_adresse_liv_modif = new QLineEdit(modifier_livreur_2);
        le_adresse_liv_modif->setObjectName(QStringLiteral("le_adresse_liv_modif"));
        le_adresse_liv_modif->setGeometry(QRect(180, 51, 113, 41));
        le_adresse_liv_modif->setStyleSheet(QLatin1String("QLineEdit {\n"
"  width: 100%;\n"
"  padding: 12px 20px;\n"
"  margin: 8px 0;\n"
"  display: inline-block;\n"
"  border: 1px solid #dcdcdc;\n"
"  border-radius: 4px;\n"
"  box-sizing: border-box;\n"
"  background: #ADD8E6;\n"
"  color: #FFFFFF;\n"
"}"));
        cb_commande_modif = new QComboBox(modifier_livreur_2);
        cb_commande_modif->setObjectName(QStringLiteral("cb_commande_modif"));
        cb_commande_modif->setGeometry(QRect(540, 11, 111, 41));
        cb_commande_modif->setStyleSheet(QLatin1String("background-color: rgb(250, 211, 0);\n"
"width: 100%;\n"
"  padding: 12px 20px;\n"
"  margin: 8px 0;\n"
"  display: inline-block;\n"
"  border: 1px solid #dcdcdc;\n"
"  border-radius: 4px;\n"
"  box-sizing: border-box;\n"
"  background: #ADD8E6;\n"
"  color: #FFFFFF;"));
        label_16 = new QLabel(modifier_livreur_2);
        label_16->setObjectName(QStringLiteral("label_16"));
        label_16->setGeometry(QRect(400, 30, 131, 20));
        label_16->setStyleSheet(QLatin1String("background-color: transparent;\n"
"font: 8pt \"Castellar\";\n"
"	color: #454544;\n"
"	font-weight: bold;\n"
"	font-size: 13px;\n"
"border:none;"));
        pb_liv_modif = new QPushButton(modifier_livreur_2);
        pb_liv_modif->setObjectName(QStringLiteral("pb_liv_modif"));
        pb_liv_modif->setGeometry(QRect(540, 150, 93, 28));
        pb_liv_modif->setStyleSheet(QLatin1String("QPushButton {\n"
"	font: 87 8pt \"Segoe UI Black\";\n"
"color: #dcdcdc;\n"
"background:#778899;\n"
"border: none;\n"
"border: 1px solid #DCDCDC;\n"
"border-radius: 8px;\n"
"\n"
"}\n"
"QPushButton:hover {\n"
"color:#fff;\n"
"font: 87 8pt \"Segoe UI Black\";\n"
"background:#ADD8E6;\n"
"border: none;\n"
"}"));
        label_17 = new QLabel(modifier_livreur_2);
        label_17->setObjectName(QStringLiteral("label_17"));
        label_17->setGeometry(QRect(50, 130, 111, 16));
        label_17->setStyleSheet(QLatin1String("background-color: transparent;\n"
"font: 8pt \"Castellar\";\n"
"	color: #454544;\n"
"	font-weight: bold;\n"
"	font-size: 13px;\n"
"border:none;"));
        te_des_liv_modif = new QTextEdit(modifier_livreur_2);
        te_des_liv_modif->setObjectName(QStringLiteral("te_des_liv_modif"));
        te_des_liv_modif->setGeometry(QRect(180, 140, 201, 121));
        te_des_liv_modif->setStyleSheet(QLatin1String("background-color: rgb(250, 211, 0);\n"
"width: 100%;\n"
"  padding: 12px 20px;\n"
"  margin: 8px 0;\n"
"  display: inline-block;\n"
"  border: 1px solid #dcdcdc;\n"
"  border-radius: 4px;\n"
"  box-sizing: border-box;\n"
"  background: #ADD8E6;\n"
"  color: #FFFFFF;"));
        label_18 = new QLabel(modifier_livreur_2);
        label_18->setObjectName(QStringLiteral("label_18"));
        label_18->setGeometry(QRect(50, 70, 81, 16));
        label_18->setStyleSheet(QLatin1String("background-color: transparent;\n"
"font: 8pt \"Castellar\";\n"
"	color: #454544;\n"
"	font-weight: bold;\n"
"	font-size: 13px;\n"
"border:none;"));
        label_20 = new QLabel(modifier_livreur_2);
        label_20->setObjectName(QStringLiteral("label_20"));
        label_20->setGeometry(QRect(400, 70, 101, 20));
        label_20->setStyleSheet(QLatin1String("background-color: transparent;\n"
"font: 8pt \"Castellar\";\n"
"	color: #454544;\n"
"	font-weight: bold;\n"
"	font-size: 13px;\n"
"border:none;"));
        cb_liv_modif = new QComboBox(modifier_livreur_2);
        cb_liv_modif->setObjectName(QStringLiteral("cb_liv_modif"));
        cb_liv_modif->setGeometry(QRect(180, 11, 111, 41));
        cb_liv_modif->setStyleSheet(QLatin1String("background-color: rgb(250, 211, 0);\n"
"width: 100%;\n"
"  padding: 12px 20px;\n"
"  margin: 8px 0;\n"
"  display: inline-block;\n"
"  border: 1px solid #dcdcdc;\n"
"  border-radius: 4px;\n"
"  box-sizing: border-box;\n"
"  background: #ADD8E6;\n"
"  color: #FFFFFF;"));
        tw_livraur_2->addTab(modifier_livreur_2, QString());
        supprimer_livreur_2 = new QWidget();
        supprimer_livreur_2->setObjectName(QStringLiteral("supprimer_livreur_2"));
        cb_supp_liv = new QComboBox(supprimer_livreur_2);
        cb_supp_liv->setObjectName(QStringLiteral("cb_supp_liv"));
        cb_supp_liv->setGeometry(QRect(100, 41, 161, 41));
        cb_supp_liv->setStyleSheet(QLatin1String("background-color: rgb(250, 211, 0);\n"
"width: 100%;\n"
"  padding: 12px 20px;\n"
"  margin: 8px 0;\n"
"  display: inline-block;\n"
"  border: 1px solid #dcdcdc;\n"
"  border-radius: 4px;\n"
"  box-sizing: border-box;\n"
"  background: #ADD8E6;\n"
"  color: #FFFFFF;"));
        pb_supp_liv = new QPushButton(supprimer_livreur_2);
        pb_supp_liv->setObjectName(QStringLiteral("pb_supp_liv"));
        pb_supp_liv->setGeometry(QRect(340, 60, 93, 28));
        pb_supp_liv->setStyleSheet(QLatin1String("QPushButton {\n"
"	font: 87 8pt \"Segoe UI Black\";\n"
"color: #dcdcdc;\n"
"background:#778899;\n"
"border: none;\n"
"border: 1px solid #DCDCDC;\n"
"border-radius: 8px;\n"
"\n"
"}\n"
"QPushButton:hover {\n"
"color:#fff;\n"
"font: 87 8pt \"Segoe UI Black\";\n"
"background:#ADD8E6;\n"
"border: none;\n"
"}"));
        tw_livraur_2->addTab(supprimer_livreur_2, QString());
        sw_main->addWidget(page_3);
        pb_livreur = new QPushButton(centralwidget);
        pb_livreur->setObjectName(QStringLiteral("pb_livreur"));
        pb_livreur->setGeometry(QRect(-10, 50, 71, 61));
        pb_livreur->setStyleSheet(QLatin1String("border: 2px solid #87CEEB;\n"
"border-radius: 8px;"));
        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(-40, 120, 93, 61));
        pushButton_2->setStyleSheet(QLatin1String("border: 2px solid #87CEEB;\n"
"border-radius: 8px;"));
        gestion_livraison->setCentralWidget(centralwidget);
        menubar = new QMenuBar(gestion_livraison);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 22));
        gestion_livraison->setMenuBar(menubar);
        statusbar = new QStatusBar(gestion_livraison);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        gestion_livraison->setStatusBar(statusbar);

        retranslateUi(gestion_livraison);

        sw_main->setCurrentIndex(1);
        tw_livraur->setCurrentIndex(0);
        tw_livraur_2->setCurrentIndex(3);


        QMetaObject::connectSlotsByName(gestion_livraison);
    } // setupUi

    void retranslateUi(QMainWindow *gestion_livraison)
    {
        gestion_livraison->setWindowTitle(QApplication::translate("gestion_livraison", "MainWindow", Q_NULLPTR));
        label->setText(QApplication::translate("gestion_livraison", "Livreur", Q_NULLPTR));
        pb_ajouter_livreur->setText(QApplication::translate("gestion_livraison", "Ajouter", Q_NULLPTR));
        label_3->setText(QApplication::translate("gestion_livraison", "Id", Q_NULLPTR));
        label_4->setText(QApplication::translate("gestion_livraison", "Nom", Q_NULLPTR));
        label_5->setText(QApplication::translate("gestion_livraison", "Prenom", Q_NULLPTR));
        label_6->setText(QApplication::translate("gestion_livraison", "Salaire", Q_NULLPTR));
        tw_livraur->setTabText(tw_livraur->indexOf(ajouter_livreur), QApplication::translate("gestion_livraison", "Ajouter", Q_NULLPTR));
        pdf->setText(QApplication::translate("gestion_livraison", "Imprimer PDF", Q_NULLPTR));
        Translate->setText(QApplication::translate("gestion_livraison", "version Anglais", Q_NULLPTR));
        tw_livraur->setTabText(tw_livraur->indexOf(afficher_livreur), QApplication::translate("gestion_livraison", "Afficher", Q_NULLPTR));
        label_7->setText(QApplication::translate("gestion_livraison", "Id", Q_NULLPTR));
        label_8->setText(QApplication::translate("gestion_livraison", "Salaire", Q_NULLPTR));
        label_9->setText(QApplication::translate("gestion_livraison", "Prenom", Q_NULLPTR));
        pb_modifer_livreur->setText(QApplication::translate("gestion_livraison", "Modifer", Q_NULLPTR));
        label_10->setText(QApplication::translate("gestion_livraison", "Nom", Q_NULLPTR));
        tw_livraur->setTabText(tw_livraur->indexOf(modifier_livreur), QApplication::translate("gestion_livraison", "Modifier", Q_NULLPTR));
        pb_supp_livreur->setText(QApplication::translate("gestion_livraison", "Supprimer", Q_NULLPTR));
        tw_livraur->setTabText(tw_livraur->indexOf(supprimer_livreur), QApplication::translate("gestion_livraison", "Supprimer", Q_NULLPTR));
        buttonHis->setText(QApplication::translate("gestion_livraison", "chercher his", Q_NULLPTR));
        tw_livraur->setTabText(tw_livraur->indexOf(tab), QApplication::translate("gestion_livraison", "historiques", Q_NULLPTR));
        label_2->setText(QApplication::translate("gestion_livraison", "livraion", Q_NULLPTR));
        pb_liv_ajout->setText(QApplication::translate("gestion_livraison", "Ajouter", Q_NULLPTR));
        label_11->setText(QApplication::translate("gestion_livraison", "Id", Q_NULLPTR));
        label_12->setText(QApplication::translate("gestion_livraison", "Adresse", Q_NULLPTR));
        label_13->setText(QApplication::translate("gestion_livraison", "Description", Q_NULLPTR));
        label_14->setText(QApplication::translate("gestion_livraison", "Id_commande", Q_NULLPTR));
        label_19->setText(QApplication::translate("gestion_livraison", "Id_livreur", Q_NULLPTR));
        tw_livraur_2->setTabText(tw_livraur_2->indexOf(ajouter_livreur_2), QApplication::translate("gestion_livraison", "Ajouter", Q_NULLPTR));
        tw_livraur_2->setTabText(tw_livraur_2->indexOf(afficher_livreur_2), QApplication::translate("gestion_livraison", "Afficher", Q_NULLPTR));
        label_15->setText(QApplication::translate("gestion_livraison", "Id", Q_NULLPTR));
        label_16->setText(QApplication::translate("gestion_livraison", "Id_commande", Q_NULLPTR));
        pb_liv_modif->setText(QApplication::translate("gestion_livraison", "Modifier", Q_NULLPTR));
        label_17->setText(QApplication::translate("gestion_livraison", "Description", Q_NULLPTR));
        label_18->setText(QApplication::translate("gestion_livraison", "Adresse", Q_NULLPTR));
        label_20->setText(QApplication::translate("gestion_livraison", "Id_livreur", Q_NULLPTR));
        tw_livraur_2->setTabText(tw_livraur_2->indexOf(modifier_livreur_2), QApplication::translate("gestion_livraison", "Modifier", Q_NULLPTR));
        pb_supp_liv->setText(QApplication::translate("gestion_livraison", "Supprimer", Q_NULLPTR));
        tw_livraur_2->setTabText(tw_livraur_2->indexOf(supprimer_livreur_2), QApplication::translate("gestion_livraison", "Supprimer", Q_NULLPTR));
        pb_livreur->setText(QApplication::translate("gestion_livraison", "Livreur", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("gestion_livraison", "Livraison", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class gestion_livraison: public Ui_gestion_livraison {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GESTION_LIVRAISON_H
