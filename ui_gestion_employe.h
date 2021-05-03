/********************************************************************************
** Form generated from reading UI file 'gestion_employe.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GESTION_EMPLOYE_H
#define UI_GESTION_EMPLOYE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QGroupBox>
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
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_gestion_employe
{
public:
    QWidget *centralwidget;
    QStackedWidget *sw_main;
    QWidget *page;
    QLineEdit *le_login;
    QLineEdit *le_password;
    QLabel *label_13;
    QLabel *label_14;
    QPushButton *pb_login;
    QWidget *page_2;
    QGroupBox *groupBox_3;
    QVBoxLayout *verticalLayout_6;
    QVBoxLayout *verticalLayout_5;
    QLabel *label_38;
    QPushButton *Iheb;
    QLabel *label_39;
    QPushButton *Barkia;
    QStackedWidget *stackedWidget;
    QWidget *accueil;
    QWidget *gestionproduit;
    QStackedWidget *stackedWidget_2;
    QWidget *accueil_3;
    QWidget *gestionproduit_3;
    QStackedWidget *stackedWidget_3;
    QWidget *accueil_4;
    QWidget *gestionproduit_4;
    QPushButton *pb_logout;
    QGroupBox *groupBox_4;
    QVBoxLayout *verticalLayout_9;
    QVBoxLayout *verticalLayout_10;
    QPushButton *Iheb_3;
    QLabel *label_43;
    QPushButton *Barkia_3;
    QLabel *label_44;
    QPushButton *Elaa_3;
    QLabel *label_45;
    QPushButton *Sara_3;
    QLabel *label_46;
    QPushButton *configuration_3;
    QLabel *label_47;
    QPushButton *logout_button_3;
    QStackedWidget *st_menu;
    QWidget *page_3;
    QTabWidget *b_supprimer;
    QWidget *tab;
    QGroupBox *groupBox;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QPushButton *BA;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_3;
    QLineEdit *lineEdit_4;
    QLabel *label_10;
    QLineEdit *linemarque;
    QDateEdit *date1;
    QLabel *label_9;
    QWidget *tab_2;
    QTableView *tab_employe;
    QRadioButton *tri_emp_2;
    QRadioButton *tri_emp_3;
    QRadioButton *tri_emp_4;
    QLineEdit *le_search;
    QPushButton *stats_clicked;
    QRadioButton *radioButton_actualiser;
    QRadioButton *pdf;
    QCheckBox *Translate;
    QWidget *tab_3;
    QLineEdit *supp;
    QLabel *label_4;
    QPushButton *P_supprimer;
    QWidget *tab_4;
    QPushButton *pushButton_5;
    QLineEdit *modif1;
    QLineEdit *modif2;
    QLineEdit *modif3;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QComboBox *comboBox;
    QLabel *label_8;
    QDateEdit *modif4;
    QLineEdit *modif5;
    QLabel *label_22;
    QWidget *tab_5;
    QTableView *tabchercher;
    QLabel *label_11;
    QLabel *label_12;
    QLineEdit *linechercher1;
    QLineEdit *linechercher2;
    QPushButton *chercher;
    QWidget *tab_11;
    QPushButton *pushButtonHisto;
    QTextBrowser *textHisto;
    QLineEdit *historique;
    QWidget *page_4;
    QTabWidget *phofileeeee;
    QWidget *tab_6;
    QGroupBox *groupBox_2;
    QLabel *label_15;
    QLabel *label_16;
    QPushButton *pb_ajout;
    QLineEdit *le_login_;
    QLineEdit *le_password_;
    QLabel *label_19;
    QComboBox *cb_emp;
    QWidget *tab_7;
    QTableView *tv_profile;
    QCheckBox *Translate_2;
    QWidget *tab_8;
    QLabel *label_20;
    QPushButton *pb_supp;
    QComboBox *cb_login_supp;
    QWidget *tab_9;
    QPushButton *pb_modif;
    QLabel *label_21;
    QLabel *label_17;
    QLineEdit *le_password_1;
    QLabel *label_18;
    QComboBox *cb_emp_2;
    QComboBox *cb_login_modif;
    QWidget *tab_10;
    QPushButton *muteSound;
    QPushButton *actionSound;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *gestion_employe)
    {
        if (gestion_employe->objectName().isEmpty())
            gestion_employe->setObjectName(QStringLiteral("gestion_employe"));
        gestion_employe->resize(800, 600);
        centralwidget = new QWidget(gestion_employe);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        sw_main = new QStackedWidget(centralwidget);
        sw_main->setObjectName(QStringLiteral("sw_main"));
        sw_main->setGeometry(QRect(-20, 0, 1161, 711));
        sw_main->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        page = new QWidget();
        page->setObjectName(QStringLiteral("page"));
        le_login = new QLineEdit(page);
        le_login->setObjectName(QStringLiteral("le_login"));
        le_login->setGeometry(QRect(460, 160, 241, 31));
        le_password = new QLineEdit(page);
        le_password->setObjectName(QStringLiteral("le_password"));
        le_password->setGeometry(QRect(460, 220, 241, 31));
        le_password->setEchoMode(QLineEdit::Password);
        label_13 = new QLabel(page);
        label_13->setObjectName(QStringLiteral("label_13"));
        label_13->setGeometry(QRect(344, 170, 81, 21));
        label_13->setStyleSheet(QLatin1String("background-color: transparent;\n"
"font: 8pt \"Castellar\";\n"
"	color: #454544;\n"
"	font-weight: bold;\n"
"	font-size: 13px;\n"
"border:none;"));
        label_14 = new QLabel(page);
        label_14->setObjectName(QStringLiteral("label_14"));
        label_14->setGeometry(QRect(324, 230, 81, 20));
        label_14->setStyleSheet(QLatin1String("background-color: transparent;\n"
"font: 8pt \"Castellar\";\n"
"	color: #454544;\n"
"	font-weight: bold;\n"
"	font-size: 13px;\n"
"border:none;"));
        pb_login = new QPushButton(page);
        pb_login->setObjectName(QStringLiteral("pb_login"));
        pb_login->setGeometry(QRect(510, 270, 141, 51));
        pb_login->setStyleSheet(QLatin1String(" display: inline-block;\n"
"  padding: 15px 25px;\n"
"  font-size: 24px;\n"
"  cursor: pointer;\n"
"  text-align: center;\n"
"  text-decoration: none;\n"
"  outline: none;\n"
"  color: #fff;\n"
"  background-color: #4682B4;\n"
"  border: none;\n"
"  border-radius: 15px;\n"
"  box-shadow: 0 9px #999;\n"
"}\n"
"QPushButton:hover {\n"
"color:#fff;\n"
"background:#87CEEB;\n"
"border: none;\n"
"background-color: ;\n"
""));
        sw_main->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName(QStringLiteral("page_2"));
        groupBox_3 = new QGroupBox(page_2);
        groupBox_3->setObjectName(QStringLiteral("groupBox_3"));
        groupBox_3->setGeometry(QRect(0, 30, 91, 391));
        groupBox_3->setStyleSheet(QLatin1String("QGroupBox  {\n"
"    border: 2px solid gray;\n"
"    border-color:  #87CEEB;\n"
"\n"
"    border-radius: 10px;\n"
" \n"
"\n"
"    \n"
"}\n"
"QGroupBox::title {\n"
"    top: -7,5px;\n"
"    left: 10px;\n"
"}"));
        verticalLayout_6 = new QVBoxLayout(groupBox_3);
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setSpacing(2);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        label_38 = new QLabel(groupBox_3);
        label_38->setObjectName(QStringLiteral("label_38"));
        label_38->setStyleSheet(QLatin1String("background-color: transparent;\n"
"font: 8pt \"Castellar\";\n"
"	color: #454544;\n"
"	font-weight: bold;\n"
"	font-size: 11px;\n"
"border:none;"));

        verticalLayout_5->addWidget(label_38);

        Iheb = new QPushButton(groupBox_3);
        Iheb->setObjectName(QStringLiteral("Iheb"));
        Iheb->setStyleSheet(QStringLiteral("background-image: url(:/Files/gestion des employes.png);"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/colab/icolab.png"), QSize(), QIcon::Normal, QIcon::Off);
        Iheb->setIcon(icon);
        Iheb->setIconSize(QSize(50, 30));

        verticalLayout_5->addWidget(Iheb);

        label_39 = new QLabel(groupBox_3);
        label_39->setObjectName(QStringLiteral("label_39"));
        label_39->setStyleSheet(QLatin1String("background-color: transparent;\n"
"font: 8pt \"Castellar\";\n"
"	color: #454544;\n"
"	font-weight: bold;\n"
"	font-size: 11px;\n"
"border:none;"));

        verticalLayout_5->addWidget(label_39);

        Barkia = new QPushButton(groupBox_3);
        Barkia->setObjectName(QStringLiteral("Barkia"));
        Barkia->setStyleSheet(QStringLiteral("background-image: url(:/Files/gestion des employes.png);"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/reservation/ireservation.png"), QSize(), QIcon::Normal, QIcon::Off);
        Barkia->setIcon(icon1);
        Barkia->setIconSize(QSize(50, 30));

        verticalLayout_5->addWidget(Barkia);


        verticalLayout_6->addLayout(verticalLayout_5);

        stackedWidget = new QStackedWidget(page_2);
        stackedWidget->setObjectName(QStringLiteral("stackedWidget"));
        stackedWidget->setGeometry(QRect(440, 30, 1051, 621));
        accueil = new QWidget();
        accueil->setObjectName(QStringLiteral("accueil"));
        stackedWidget->addWidget(accueil);
        gestionproduit = new QWidget();
        gestionproduit->setObjectName(QStringLiteral("gestionproduit"));
        stackedWidget_2 = new QStackedWidget(gestionproduit);
        stackedWidget_2->setObjectName(QStringLiteral("stackedWidget_2"));
        stackedWidget_2->setGeometry(QRect(440, 0, 1051, 621));
        accueil_3 = new QWidget();
        accueil_3->setObjectName(QStringLiteral("accueil_3"));
        stackedWidget_2->addWidget(accueil_3);
        gestionproduit_3 = new QWidget();
        gestionproduit_3->setObjectName(QStringLiteral("gestionproduit_3"));
        stackedWidget_3 = new QStackedWidget(gestionproduit_3);
        stackedWidget_3->setObjectName(QStringLiteral("stackedWidget_3"));
        stackedWidget_3->setGeometry(QRect(440, 0, 1051, 621));
        accueil_4 = new QWidget();
        accueil_4->setObjectName(QStringLiteral("accueil_4"));
        stackedWidget_3->addWidget(accueil_4);
        gestionproduit_4 = new QWidget();
        gestionproduit_4->setObjectName(QStringLiteral("gestionproduit_4"));
        stackedWidget_3->addWidget(gestionproduit_4);
        pb_logout = new QPushButton(gestionproduit_3);
        pb_logout->setObjectName(QStringLiteral("pb_logout"));
        pb_logout->setGeometry(QRect(80, 550, 131, 51));
        pb_logout->setStyleSheet(QLatin1String("QPushButton {\n"
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
        stackedWidget_2->addWidget(gestionproduit_3);
        groupBox_4 = new QGroupBox(gestionproduit);
        groupBox_4->setObjectName(QStringLiteral("groupBox_4"));
        groupBox_4->setGeometry(QRect(0, 0, 91, 391));
        verticalLayout_9 = new QVBoxLayout(groupBox_4);
        verticalLayout_9->setObjectName(QStringLiteral("verticalLayout_9"));
        verticalLayout_10 = new QVBoxLayout();
        verticalLayout_10->setSpacing(2);
        verticalLayout_10->setObjectName(QStringLiteral("verticalLayout_10"));
        Iheb_3 = new QPushButton(groupBox_4);
        Iheb_3->setObjectName(QStringLiteral("Iheb_3"));
        Iheb_3->setStyleSheet(QStringLiteral("background-image: url(:/Files/stock.png);"));
        Iheb_3->setIcon(icon);
        Iheb_3->setIconSize(QSize(50, 30));

        verticalLayout_10->addWidget(Iheb_3);

        label_43 = new QLabel(groupBox_4);
        label_43->setObjectName(QStringLiteral("label_43"));
        label_43->setStyleSheet(QLatin1String("background-color: transparent;\n"
"	color: #454544;\n"
"	font-weight: bold;\n"
"	font-size: 7px;"));

        verticalLayout_10->addWidget(label_43);

        Barkia_3 = new QPushButton(groupBox_4);
        Barkia_3->setObjectName(QStringLiteral("Barkia_3"));
        Barkia_3->setIcon(icon1);
        Barkia_3->setIconSize(QSize(50, 30));

        verticalLayout_10->addWidget(Barkia_3);

        label_44 = new QLabel(groupBox_4);
        label_44->setObjectName(QStringLiteral("label_44"));

        verticalLayout_10->addWidget(label_44);

        Elaa_3 = new QPushButton(groupBox_4);
        Elaa_3->setObjectName(QStringLiteral("Elaa_3"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/staff/istaff.png"), QSize(), QIcon::Normal, QIcon::Off);
        Elaa_3->setIcon(icon2);
        Elaa_3->setIconSize(QSize(50, 30));

        verticalLayout_10->addWidget(Elaa_3);

        label_45 = new QLabel(groupBox_4);
        label_45->setObjectName(QStringLiteral("label_45"));

        verticalLayout_10->addWidget(label_45);

        Sara_3 = new QPushButton(groupBox_4);
        Sara_3->setObjectName(QStringLiteral("Sara_3"));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/stock/istock.png"), QSize(), QIcon::Normal, QIcon::Off);
        Sara_3->setIcon(icon3);
        Sara_3->setIconSize(QSize(50, 30));

        verticalLayout_10->addWidget(Sara_3);

        label_46 = new QLabel(groupBox_4);
        label_46->setObjectName(QStringLiteral("label_46"));

        verticalLayout_10->addWidget(label_46);

        configuration_3 = new QPushButton(groupBox_4);
        configuration_3->setObjectName(QStringLiteral("configuration_3"));
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/configuration/iconfiguration.png"), QSize(), QIcon::Normal, QIcon::Off);
        configuration_3->setIcon(icon4);
        configuration_3->setIconSize(QSize(50, 30));

        verticalLayout_10->addWidget(configuration_3);

        label_47 = new QLabel(groupBox_4);
        label_47->setObjectName(QStringLiteral("label_47"));

        verticalLayout_10->addWidget(label_47);

        logout_button_3 = new QPushButton(groupBox_4);
        logout_button_3->setObjectName(QStringLiteral("logout_button_3"));
        QIcon icon5;
        icon5.addFile(QStringLiteral(":/log/ilog.png"), QSize(), QIcon::Normal, QIcon::Off);
        logout_button_3->setIcon(icon5);
        logout_button_3->setIconSize(QSize(50, 30));

        verticalLayout_10->addWidget(logout_button_3);


        verticalLayout_9->addLayout(verticalLayout_10);

        stackedWidget->addWidget(gestionproduit);
        st_menu = new QStackedWidget(page_2);
        st_menu->setObjectName(QStringLiteral("st_menu"));
        st_menu->setGeometry(QRect(100, 40, 1011, 511));
        page_3 = new QWidget();
        page_3->setObjectName(QStringLiteral("page_3"));
        b_supprimer = new QTabWidget(page_3);
        b_supprimer->setObjectName(QStringLiteral("b_supprimer"));
        b_supprimer->setGeometry(QRect(0, 0, 951, 491));
        b_supprimer->setStyleSheet(QLatin1String("QTabWidget::pane { /* The tab widget frame */\n"
"border-top: 5px solid white ;\n"
"}\n"
"/* Style the tab using the tab sub-control. Note that it reads QTabBar _not_ QTabWidget */\n"
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
"  border: 1p"
                        "x solid #ccc;\n"
"  border-radius: 4px;\n"
"  box-sizing: border-box;\n"
"}"));
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        groupBox = new QGroupBox(tab);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(10, 0, 691, 371));
        label = new QLabel(groupBox);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(70, 40, 71, 20));
        label->setStyleSheet(QLatin1String("background-color: transparent;\n"
"font: 8pt \"Castellar\";\n"
"	color: #454544;\n"
"	font-weight: bold;\n"
"	font-size: 13px;\n"
"border:none;"));
        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(70, 86, 81, 20));
        label_2->setStyleSheet(QLatin1String("background-color: transparent;\n"
"font: 8pt \"Castellar\";\n"
"	color: #454544;\n"
"	font-weight: bold;\n"
"	font-size: 13px;\n"
"border:none;"));
        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(60, 200, 71, 16));
        label_3->setStyleSheet(QLatin1String("background-color: transparent;\n"
"font: 8pt \"Castellar\";\n"
"	color: #454544;\n"
"	font-weight: bold;\n"
"	font-size: 13px;\n"
"border:none;"));
        BA = new QPushButton(groupBox);
        BA->setObjectName(QStringLiteral("BA"));
        BA->setGeometry(QRect(190, 310, 111, 41));
        BA->setStyleSheet(QLatin1String("QPushButton {\n"
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
        lineEdit = new QLineEdit(groupBox);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(180, 30, 141, 51));
        lineEdit->setStyleSheet(QLatin1String("\n"
"QLineEdit {\n"
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
        lineEdit_3 = new QLineEdit(groupBox);
        lineEdit_3->setObjectName(QStringLiteral("lineEdit_3"));
        lineEdit_3->setGeometry(QRect(180, 80, 141, 51));
        lineEdit_3->setStyleSheet(QLatin1String("QLineEdit {\n"
"  width: 100%;\n"
"  padding: 12px 20px;\n"
"  margin: 8px 0;\n"
"  display: inline-block;\n"
"  border: 1px solid #dcdcdc;\n"
"  border-radius: 4px;\n"
"  box-sizing: border-box;\n"
"  background: #ADD8E6;\n"
"  color: #FFFFFF;\n"
"}\n"
""));
        lineEdit_4 = new QLineEdit(groupBox);
        lineEdit_4->setObjectName(QStringLiteral("lineEdit_4"));
        lineEdit_4->setGeometry(QRect(180, 180, 141, 51));
        lineEdit_4->setStyleSheet(QLatin1String("QLineEdit {\n"
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
        label_10 = new QLabel(groupBox);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(60, 250, 91, 16));
        label_10->setStyleSheet(QLatin1String("background-color: transparent;\n"
"font: 8pt \"Castellar\";\n"
"	color: #454544;\n"
"	font-weight: bold;\n"
"	font-size: 13px;\n"
"border:none;"));
        linemarque = new QLineEdit(groupBox);
        linemarque->setObjectName(QStringLiteral("linemarque"));
        linemarque->setGeometry(QRect(180, 129, 141, 51));
        linemarque->setStyleSheet(QLatin1String("QLineEdit {\n"
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
        date1 = new QDateEdit(groupBox);
        date1->setObjectName(QStringLiteral("date1"));
        date1->setGeometry(QRect(180, 230, 141, 61));
        date1->setStyleSheet(QLatin1String("background-color: rgb(250, 211, 0);\n"
"width: 100%;\n"
"  padding: 12px 20px;\n"
"  margin: 8px 0;\n"
"  display: inline-block;\n"
"  border: 1px solid #dcdcdc;\n"
"  border-radius: 4px;\n"
"  box-sizing: border-box;\n"
"  background: #ADD8E6;\n"
"  color: #FFFFFF;"));
        label_9 = new QLabel(groupBox);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(60, 140, 71, 20));
        label_9->setStyleSheet(QLatin1String("background-color: transparent;\n"
"font: 8pt \"Castellar\";\n"
"	color: #454544;\n"
"	font-weight: bold;\n"
"	font-size: 13px;\n"
"border:none;"));
        b_supprimer->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        tab_employe = new QTableView(tab_2);
        tab_employe->setObjectName(QStringLiteral("tab_employe"));
        tab_employe->setEnabled(true);
        tab_employe->setGeometry(QRect(235, 50, 631, 311));
        tab_employe->setStyleSheet(QLatin1String("border: 2px solid #87CEEB;\n"
"border-radius: 8px;"));
        tri_emp_2 = new QRadioButton(tab_2);
        tri_emp_2->setObjectName(QStringLiteral("tri_emp_2"));
        tri_emp_2->setGeometry(QRect(30, 90, 131, 41));
        tri_emp_2->setStyleSheet(QLatin1String("QRadioButton {\n"
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
        tri_emp_3 = new QRadioButton(tab_2);
        tri_emp_3->setObjectName(QStringLiteral("tri_emp_3"));
        tri_emp_3->setGeometry(QRect(30, 140, 131, 41));
        tri_emp_3->setStyleSheet(QLatin1String("QRadioButton {\n"
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
        tri_emp_4 = new QRadioButton(tab_2);
        tri_emp_4->setObjectName(QStringLiteral("tri_emp_4"));
        tri_emp_4->setGeometry(QRect(30, 190, 131, 41));
        tri_emp_4->setStyleSheet(QLatin1String("QRadioButton {\n"
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
        le_search = new QLineEdit(tab_2);
        le_search->setObjectName(QStringLiteral("le_search"));
        le_search->setGeometry(QRect(470, 1, 401, 51));
        le_search->setStyleSheet(QLatin1String("border: 2px solid #87CEEB;\n"
"border-radius: 8px;"));
        stats_clicked = new QPushButton(tab_2);
        stats_clicked->setObjectName(QStringLiteral("stats_clicked"));
        stats_clicked->setGeometry(QRect(50, 310, 91, 41));
        stats_clicked->setStyleSheet(QLatin1String("QPushButton {\n"
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
        radioButton_actualiser = new QRadioButton(tab_2);
        radioButton_actualiser->setObjectName(QStringLiteral("radioButton_actualiser"));
        radioButton_actualiser->setGeometry(QRect(260, 10, 82, 17));
        radioButton_actualiser->setStyleSheet(QLatin1String("QRadioButton\n"
"{\n"
"	\n"
"	color: rgb(0, 0, 0);\n"
"	\n"
"	font: 87 6pt \"Arial Black\";\n"
"}"));
        pdf = new QRadioButton(tab_2);
        pdf->setObjectName(QStringLiteral("pdf"));
        pdf->setGeometry(QRect(30, 240, 131, 41));
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
        Translate = new QCheckBox(tab_2);
        Translate->setObjectName(QStringLiteral("Translate"));
        Translate->setGeometry(QRect(110, 10, 131, 20));
        b_supprimer->addTab(tab_2, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QStringLiteral("tab_3"));
        supp = new QLineEdit(tab_3);
        supp->setObjectName(QStringLiteral("supp"));
        supp->setGeometry(QRect(170, 20, 121, 51));
        supp->setStyleSheet(QLatin1String("QLineEdit {\n"
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
        label_4 = new QLabel(tab_3);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(90, 40, 61, 16));
        label_4->setStyleSheet(QLatin1String("background-color: transparent;\n"
"font: 8pt \"Castellar\";\n"
"	color: #454544;\n"
"	font-weight: bold;\n"
"	font-size: 13px;\n"
"border:none;"));
        P_supprimer = new QPushButton(tab_3);
        P_supprimer->setObjectName(QStringLiteral("P_supprimer"));
        P_supprimer->setGeometry(QRect(190, 100, 91, 41));
        P_supprimer->setStyleSheet(QLatin1String("QPushButton {\n"
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
        b_supprimer->addTab(tab_3, QString());
        tab_4 = new QWidget();
        tab_4->setObjectName(QStringLiteral("tab_4"));
        pushButton_5 = new QPushButton(tab_4);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));
        pushButton_5->setGeometry(QRect(300, 350, 91, 41));
        pushButton_5->setStyleSheet(QLatin1String("QPushButton {\n"
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
        modif1 = new QLineEdit(tab_4);
        modif1->setObjectName(QStringLiteral("modif1"));
        modif1->setGeometry(QRect(280, 70, 121, 51));
        modif1->setStyleSheet(QLatin1String("QLineEdit {\n"
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
        modif2 = new QLineEdit(tab_4);
        modif2->setObjectName(QStringLiteral("modif2"));
        modif2->setGeometry(QRect(280, 120, 121, 51));
        modif2->setStyleSheet(QLatin1String("QLineEdit {\n"
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
        modif3 = new QLineEdit(tab_4);
        modif3->setObjectName(QStringLiteral("modif3"));
        modif3->setGeometry(QRect(280, 170, 121, 51));
        modif3->setStyleSheet(QLatin1String("QLineEdit {\n"
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
        label_5 = new QLabel(tab_4);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(150, 90, 47, 14));
        label_5->setStyleSheet(QLatin1String("background-color: transparent;\n"
"font: 8pt \"Castellar\";\n"
"	color: #454544;\n"
"	font-weight: bold;\n"
"	font-size: 13px;\n"
"border:none;"));
        label_6 = new QLabel(tab_4);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(140, 140, 61, 20));
        label_6->setStyleSheet(QLatin1String("background-color: transparent;\n"
"font: 8pt \"Castellar\";\n"
"	color: #454544;\n"
"	font-weight: bold;\n"
"	font-size: 13px;\n"
"border:none;"));
        label_7 = new QLabel(tab_4);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(130, 180, 71, 20));
        label_7->setStyleSheet(QLatin1String("background-color: transparent;\n"
"font: 8pt \"Castellar\";\n"
"	color: #454544;\n"
"	font-weight: bold;\n"
"	font-size: 13px;\n"
"border:none;"));
        comboBox = new QComboBox(tab_4);
        comboBox->setObjectName(QStringLiteral("comboBox"));
        comboBox->setGeometry(QRect(270, 10, 131, 51));
        comboBox->setStyleSheet(QLatin1String("background-color: rgb(250, 211, 0);\n"
"width: 100%;\n"
"  padding: 12px 20px;\n"
"  margin: 8px 0;\n"
"  display: inline-block;\n"
"  border: 1px solid #dcdcdc;\n"
"  border-radius: 4px;\n"
"  box-sizing: border-box;\n"
"  background: #ADD8E6;\n"
"  color: #FFFFFF;"));
        label_8 = new QLabel(tab_4);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(120, 30, 121, 20));
        label_8->setStyleSheet(QLatin1String("background-color: transparent;\n"
"font: 8pt \"Castellar\";\n"
"	color: #454544;\n"
"	font-weight: bold;\n"
"	font-size: 13px;\n"
"border:none;"));
        modif4 = new QDateEdit(tab_4);
        modif4->setObjectName(QStringLiteral("modif4"));
        modif4->setGeometry(QRect(280, 220, 131, 61));
        modif4->setStyleSheet(QLatin1String("background-color: rgb(250, 211, 0);\n"
"width: 100%;\n"
"  padding: 12px 20px;\n"
"  margin: 8px 0;\n"
"  display: inline-block;\n"
"  border: 1px solid #dcdcdc;\n"
"  border-radius: 4px;\n"
"  box-sizing: border-box;\n"
"  background: #ADD8E6;\n"
"  color: #FFFFFF;"));
        modif5 = new QLineEdit(tab_4);
        modif5->setObjectName(QStringLiteral("modif5"));
        modif5->setGeometry(QRect(280, 280, 131, 51));
        modif5->setStyleSheet(QLatin1String("QLineEdit {\n"
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
        label_22 = new QLabel(tab_4);
        label_22->setObjectName(QStringLiteral("label_22"));
        label_22->setGeometry(QRect(130, 240, 71, 20));
        label_22->setStyleSheet(QLatin1String("background-color: transparent;\n"
"font: 8pt \"Castellar\";\n"
"	color: #454544;\n"
"	font-weight: bold;\n"
"	font-size: 13px;\n"
"border:none;"));
        b_supprimer->addTab(tab_4, QString());
        tab_5 = new QWidget();
        tab_5->setObjectName(QStringLiteral("tab_5"));
        tabchercher = new QTableView(tab_5);
        tabchercher->setObjectName(QStringLiteral("tabchercher"));
        tabchercher->setGeometry(QRect(460, 20, 281, 261));
        tabchercher->setStyleSheet(QLatin1String("border: 2px solid #87CEEB;\n"
"border-radius: 8px;"));
        label_11 = new QLabel(tab_5);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setGeometry(QRect(80, 60, 47, 14));
        label_11->setStyleSheet(QLatin1String("background-color: transparent;\n"
"font: 8pt \"Castellar\";\n"
"	color: #454544;\n"
"	font-weight: bold;\n"
"	font-size: 13px;\n"
"border:none;"));
        label_12 = new QLabel(tab_5);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setGeometry(QRect(70, 150, 81, 16));
        label_12->setStyleSheet(QLatin1String("background-color: transparent;\n"
"font: 8pt \"Castellar\";\n"
"	color: #454544;\n"
"	font-weight: bold;\n"
"	font-size: 13px;\n"
"border:none;"));
        linechercher1 = new QLineEdit(tab_5);
        linechercher1->setObjectName(QStringLiteral("linechercher1"));
        linechercher1->setGeometry(QRect(50, 80, 121, 51));
        linechercher1->setStyleSheet(QLatin1String("QLineEdit {\n"
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
        linechercher2 = new QLineEdit(tab_5);
        linechercher2->setObjectName(QStringLiteral("linechercher2"));
        linechercher2->setGeometry(QRect(50, 170, 121, 51));
        linechercher2->setStyleSheet(QLatin1String("QLineEdit {\n"
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
        chercher = new QPushButton(tab_5);
        chercher->setObjectName(QStringLiteral("chercher"));
        chercher->setGeometry(QRect(540, 300, 91, 41));
        chercher->setStyleSheet(QLatin1String("QPushButton {\n"
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
        b_supprimer->addTab(tab_5, QString());
        tab_11 = new QWidget();
        tab_11->setObjectName(QStringLiteral("tab_11"));
        pushButtonHisto = new QPushButton(tab_11);
        pushButtonHisto->setObjectName(QStringLiteral("pushButtonHisto"));
        pushButtonHisto->setGeometry(QRect(540, 120, 131, 41));
        QFont font;
        font.setFamily(QStringLiteral("Segoe UI Black"));
        font.setPointSize(8);
        font.setBold(false);
        font.setItalic(false);
        font.setWeight(10);
        pushButtonHisto->setFont(font);
        pushButtonHisto->setStyleSheet(QLatin1String("QPushButton {\n"
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
        textHisto = new QTextBrowser(tab_11);
        textHisto->setObjectName(QStringLiteral("textHisto"));
        textHisto->setGeometry(QRect(370, 180, 471, 241));
        QFont font1;
        font1.setFamily(QStringLiteral("Modern No. 20"));
        font1.setPointSize(8);
        font1.setBold(false);
        font1.setItalic(false);
        font1.setWeight(50);
        textHisto->setFont(font1);
        historique = new QLineEdit(tab_11);
        historique->setObjectName(QStringLiteral("historique"));
        historique->setGeometry(QRect(500, 20, 301, 61));
        historique->setStyleSheet(QLatin1String(" border: 2px solid #87CEEB;\n"
"border-radius: 8px;"));
        b_supprimer->addTab(tab_11, QString());
        st_menu->addWidget(page_3);
        page_4 = new QWidget();
        page_4->setObjectName(QStringLiteral("page_4"));
        phofileeeee = new QTabWidget(page_4);
        phofileeeee->setObjectName(QStringLiteral("phofileeeee"));
        phofileeeee->setGeometry(QRect(30, 10, 951, 491));
        phofileeeee->setStyleSheet(QLatin1String("QTabWidget::pane { /* The tab widget frame */\n"
"border-top: 5px solid white ;\n"
"}\n"
"/* Style the tab using the tab sub-control. Note that it reads QTabBar _not_ QTabWidget */\n"
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
"  border: 1p"
                        "x solid #ccc;\n"
"  border-radius: 4px;\n"
"  box-sizing: border-box;\n"
"}"));
        tab_6 = new QWidget();
        tab_6->setObjectName(QStringLiteral("tab_6"));
        groupBox_2 = new QGroupBox(tab_6);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setGeometry(QRect(0, 0, 691, 371));
        label_15 = new QLabel(groupBox_2);
        label_15->setObjectName(QStringLiteral("label_15"));
        label_15->setGeometry(QRect(70, 40, 71, 20));
        label_15->setStyleSheet(QLatin1String("background-color: transparent;\n"
"font: 8pt \"Castellar\";\n"
"	color: #454544;\n"
"	font-weight: bold;\n"
"	font-size: 13px;\n"
"border:none;"));
        label_16 = new QLabel(groupBox_2);
        label_16->setObjectName(QStringLiteral("label_16"));
        label_16->setGeometry(QRect(60, 86, 91, 20));
        label_16->setStyleSheet(QLatin1String("background-color: transparent;\n"
"font: 8pt \"Castellar\";\n"
"	color: #454544;\n"
"	font-weight: bold;\n"
"	font-size: 13px;\n"
"border:none;"));
        pb_ajout = new QPushButton(groupBox_2);
        pb_ajout->setObjectName(QStringLiteral("pb_ajout"));
        pb_ajout->setGeometry(QRect(190, 210, 101, 41));
        pb_ajout->setStyleSheet(QLatin1String("QPushButton {\n"
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
        le_login_ = new QLineEdit(groupBox_2);
        le_login_->setObjectName(QStringLiteral("le_login_"));
        le_login_->setGeometry(QRect(180, 30, 121, 51));
        le_login_->setStyleSheet(QLatin1String("QLineEdit {\n"
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
        le_password_ = new QLineEdit(groupBox_2);
        le_password_->setObjectName(QStringLiteral("le_password_"));
        le_password_->setGeometry(QRect(180, 80, 121, 51));
        le_password_->setStyleSheet(QLatin1String("QLineEdit {\n"
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
        label_19 = new QLabel(groupBox_2);
        label_19->setObjectName(QStringLiteral("label_19"));
        label_19->setGeometry(QRect(60, 140, 81, 20));
        label_19->setStyleSheet(QLatin1String("background-color: transparent;\n"
"font: 8pt \"Castellar\";\n"
"	color: #454544;\n"
"	font-weight: bold;\n"
"	font-size: 13px;\n"
"border:none;"));
        cb_emp = new QComboBox(groupBox_2);
        cb_emp->setObjectName(QStringLiteral("cb_emp"));
        cb_emp->setGeometry(QRect(180, 130, 121, 51));
        cb_emp->setStyleSheet(QLatin1String("background-color: rgb(250, 211, 0);\n"
"width: 100%;\n"
"  padding: 12px 20px;\n"
"  margin: 8px 0;\n"
"  display: inline-block;\n"
"  border: 1px solid #dcdcdc;\n"
"  border-radius: 4px;\n"
"  box-sizing: border-box;\n"
"  background: #ADD8E6;\n"
"  color: #FFFFFF;"));
        phofileeeee->addTab(tab_6, QString());
        tab_7 = new QWidget();
        tab_7->setObjectName(QStringLiteral("tab_7"));
        tv_profile = new QTableView(tab_7);
        tv_profile->setObjectName(QStringLiteral("tv_profile"));
        tv_profile->setEnabled(true);
        tv_profile->setGeometry(QRect(140, 60, 631, 311));
        tv_profile->setStyleSheet(QLatin1String("border: 2px solid #87CEEB;\n"
"border-radius: 8px;"));
        Translate_2 = new QCheckBox(tab_7);
        Translate_2->setObjectName(QStringLiteral("Translate_2"));
        Translate_2->setGeometry(QRect(60, 10, 131, 20));
        phofileeeee->addTab(tab_7, QString());
        tab_8 = new QWidget();
        tab_8->setObjectName(QStringLiteral("tab_8"));
        label_20 = new QLabel(tab_8);
        label_20->setObjectName(QStringLiteral("label_20"));
        label_20->setGeometry(QRect(86, 50, 61, 20));
        label_20->setStyleSheet(QLatin1String("background-color: transparent;\n"
"font: 8pt \"Castellar\";\n"
"	color: #454544;\n"
"	font-weight: bold;\n"
"	font-size: 13px;\n"
"border:none;"));
        pb_supp = new QPushButton(tab_8);
        pb_supp->setObjectName(QStringLiteral("pb_supp"));
        pb_supp->setGeometry(QRect(190, 140, 91, 41));
        pb_supp->setStyleSheet(QLatin1String("QPushButton {\n"
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
        cb_login_supp = new QComboBox(tab_8);
        cb_login_supp->setObjectName(QStringLiteral("cb_login_supp"));
        cb_login_supp->setGeometry(QRect(170, 40, 131, 51));
        cb_login_supp->setStyleSheet(QLatin1String("background-color: rgb(250, 211, 0);\n"
"width: 100%;\n"
"  padding: 12px 20px;\n"
"  margin: 8px 0;\n"
"  display: inline-block;\n"
"  border: 1px solid #dcdcdc;\n"
"  border-radius: 4px;\n"
"  box-sizing: border-box;\n"
"  background: #ADD8E6;\n"
"  color: #FFFFFF;"));
        phofileeeee->addTab(tab_8, QString());
        tab_9 = new QWidget();
        tab_9->setObjectName(QStringLiteral("tab_9"));
        pb_modif = new QPushButton(tab_9);
        pb_modif->setObjectName(QStringLiteral("pb_modif"));
        pb_modif->setGeometry(QRect(230, 250, 91, 31));
        pb_modif->setStyleSheet(QLatin1String("QPushButton {\n"
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
        label_21 = new QLabel(tab_9);
        label_21->setObjectName(QStringLiteral("label_21"));
        label_21->setGeometry(QRect(90, 180, 81, 20));
        label_21->setStyleSheet(QLatin1String("background-color: transparent;\n"
"font: 8pt \"Castellar\";\n"
"	color: #454544;\n"
"	font-weight: bold;\n"
"	font-size: 13px;\n"
"border:none;"));
        label_17 = new QLabel(tab_9);
        label_17->setObjectName(QStringLiteral("label_17"));
        label_17->setGeometry(QRect(100, 80, 71, 20));
        label_17->setStyleSheet(QLatin1String("background-color: transparent;\n"
"font: 8pt \"Castellar\";\n"
"	color: #454544;\n"
"	font-weight: bold;\n"
"	font-size: 13px;\n"
"border:none;"));
        le_password_1 = new QLineEdit(tab_9);
        le_password_1->setObjectName(QStringLiteral("le_password_1"));
        le_password_1->setGeometry(QRect(220, 110, 131, 51));
        le_password_1->setStyleSheet(QLatin1String("QLineEdit {\n"
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
        label_18 = new QLabel(tab_9);
        label_18->setObjectName(QStringLiteral("label_18"));
        label_18->setGeometry(QRect(90, 130, 81, 20));
        label_18->setStyleSheet(QLatin1String("background-color: transparent;\n"
"font: 8pt \"Castellar\";\n"
"	color: #454544;\n"
"	font-weight: bold;\n"
"	font-size: 13px;\n"
"border:none;"));
        cb_emp_2 = new QComboBox(tab_9);
        cb_emp_2->setObjectName(QStringLiteral("cb_emp_2"));
        cb_emp_2->setGeometry(QRect(220, 180, 131, 51));
        cb_emp_2->setStyleSheet(QLatin1String("background-color: rgb(250, 211, 0);\n"
"width: 100%;\n"
"  padding: 12px 20px;\n"
"  margin: 8px 0;\n"
"  display: inline-block;\n"
"  border: 1px solid #dcdcdc;\n"
"  border-radius: 4px;\n"
"  box-sizing: border-box;\n"
"  background: #ADD8E6;\n"
"  color: #FFFFFF;"));
        cb_login_modif = new QComboBox(tab_9);
        cb_login_modif->setObjectName(QStringLiteral("cb_login_modif"));
        cb_login_modif->setGeometry(QRect(220, 51, 131, 51));
        cb_login_modif->setStyleSheet(QLatin1String("background-color: rgb(250, 211, 0);\n"
"width: 100%;\n"
"  padding: 12px 20px;\n"
"  margin: 8px 0;\n"
"  display: inline-block;\n"
"  border: 1px solid #dcdcdc;\n"
"  border-radius: 4px;\n"
"  box-sizing: border-box;\n"
"  background: #ADD8E6;\n"
"  color: #FFFFFF;"));
        phofileeeee->addTab(tab_9, QString());
        tab_10 = new QWidget();
        tab_10->setObjectName(QStringLiteral("tab_10"));
        phofileeeee->addTab(tab_10, QString());
        st_menu->addWidget(page_4);
        muteSound = new QPushButton(page_2);
        muteSound->setObjectName(QStringLiteral("muteSound"));
        muteSound->setGeometry(QRect(780, 10, 75, 23));
        muteSound->setStyleSheet(QLatin1String("QPushButton {\n"
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
        muteSound->setCheckable(false);
        actionSound = new QPushButton(page_2);
        actionSound->setObjectName(QStringLiteral("actionSound"));
        actionSound->setGeometry(QRect(860, 10, 75, 23));
        actionSound->setStyleSheet(QLatin1String("QPushButton {\n"
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
        sw_main->addWidget(page_2);
        gestion_employe->setCentralWidget(centralwidget);
        menubar = new QMenuBar(gestion_employe);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 22));
        gestion_employe->setMenuBar(menubar);
        statusbar = new QStatusBar(gestion_employe);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        gestion_employe->setStatusBar(statusbar);

        retranslateUi(gestion_employe);

        sw_main->setCurrentIndex(1);
        stackedWidget->setCurrentIndex(0);
        stackedWidget_2->setCurrentIndex(1);
        stackedWidget_3->setCurrentIndex(1);
        st_menu->setCurrentIndex(1);
        b_supprimer->setCurrentIndex(1);
        phofileeeee->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(gestion_employe);
    } // setupUi

    void retranslateUi(QMainWindow *gestion_employe)
    {
        gestion_employe->setWindowTitle(QApplication::translate("gestion_employe", "MainWindow", Q_NULLPTR));
        label_13->setText(QApplication::translate("gestion_employe", "Login", Q_NULLPTR));
        label_14->setText(QApplication::translate("gestion_employe", "Password", Q_NULLPTR));
        pb_login->setText(QApplication::translate("gestion_employe", "LOGIN", Q_NULLPTR));
        groupBox_3->setTitle(QApplication::translate("gestion_employe", "Menu", Q_NULLPTR));
        label_38->setText(QApplication::translate("gestion_employe", "EMPLOYE", Q_NULLPTR));
        Iheb->setText(QString());
        label_39->setText(QApplication::translate("gestion_employe", "PROFILs", Q_NULLPTR));
        Barkia->setText(QString());
        pb_logout->setText(QApplication::translate("gestion_employe", "LOG OUT", Q_NULLPTR));
        groupBox_4->setTitle(QApplication::translate("gestion_employe", "Menu", Q_NULLPTR));
        Iheb_3->setText(QString());
        label_43->setText(QApplication::translate("gestion_employe", "GESTION DE STOCK", Q_NULLPTR));
        Barkia_3->setText(QString());
        label_44->setText(QApplication::translate("gestion_employe", "  Reservation", Q_NULLPTR));
        Elaa_3->setText(QString());
        label_45->setText(QApplication::translate("gestion_employe", "      Staff", Q_NULLPTR));
        Sara_3->setText(QString());
        label_46->setText(QApplication::translate("gestion_employe", "      Stock", Q_NULLPTR));
        configuration_3->setText(QString());
        label_47->setText(QApplication::translate("gestion_employe", " Configuration", Q_NULLPTR));
        logout_button_3->setText(QString());
        groupBox->setTitle(QString());
        label->setText(QApplication::translate("gestion_employe", "id", Q_NULLPTR));
        label_2->setText(QApplication::translate("gestion_employe", "Nom ", Q_NULLPTR));
        label_3->setText(QApplication::translate("gestion_employe", "Salaire", Q_NULLPTR));
        BA->setText(QApplication::translate("gestion_employe", "Ajouter", Q_NULLPTR));
        label_10->setText(QApplication::translate("gestion_employe", "Date ", Q_NULLPTR));
        label_9->setText(QApplication::translate("gestion_employe", "prenom", Q_NULLPTR));
        b_supprimer->setTabText(b_supprimer->indexOf(tab), QApplication::translate("gestion_employe", "Ajouter employes", Q_NULLPTR));
        tri_emp_2->setText(QApplication::translate("gestion_employe", "Trier par nom", Q_NULLPTR));
        tri_emp_3->setText(QApplication::translate("gestion_employe", "Trier par Date", Q_NULLPTR));
        tri_emp_4->setText(QApplication::translate("gestion_employe", "Trier par Prenom", Q_NULLPTR));
        stats_clicked->setText(QApplication::translate("gestion_employe", "statistiques", Q_NULLPTR));
        radioButton_actualiser->setText(QApplication::translate("gestion_employe", "Actualiser", Q_NULLPTR));
        pdf->setText(QApplication::translate("gestion_employe", "Imprimer PDF", Q_NULLPTR));
        Translate->setText(QApplication::translate("gestion_employe", "version Anglais", Q_NULLPTR));
        b_supprimer->setTabText(b_supprimer->indexOf(tab_2), QApplication::translate("gestion_employe", "Afficher employes", Q_NULLPTR));
        label_4->setText(QApplication::translate("gestion_employe", "ID", Q_NULLPTR));
        P_supprimer->setText(QApplication::translate("gestion_employe", "supprimer", Q_NULLPTR));
        b_supprimer->setTabText(b_supprimer->indexOf(tab_3), QApplication::translate("gestion_employe", "Supprimer employes", Q_NULLPTR));
        pushButton_5->setText(QApplication::translate("gestion_employe", "modifier", Q_NULLPTR));
        label_5->setText(QApplication::translate("gestion_employe", "id", Q_NULLPTR));
        label_6->setText(QApplication::translate("gestion_employe", "nom", Q_NULLPTR));
        label_7->setText(QApplication::translate("gestion_employe", "prenom", Q_NULLPTR));
        label_8->setText(QApplication::translate("gestion_employe", "chercher id", Q_NULLPTR));
        label_22->setText(QApplication::translate("gestion_employe", "Date", Q_NULLPTR));
        b_supprimer->setTabText(b_supprimer->indexOf(tab_4), QApplication::translate("gestion_employe", "modifier", Q_NULLPTR));
        label_11->setText(QApplication::translate("gestion_employe", "Nom", Q_NULLPTR));
        label_12->setText(QApplication::translate("gestion_employe", "prenom", Q_NULLPTR));
        linechercher1->setText(QString());
        chercher->setText(QApplication::translate("gestion_employe", "chercher", Q_NULLPTR));
        b_supprimer->setTabText(b_supprimer->indexOf(tab_5), QApplication::translate("gestion_employe", "Chercher ", Q_NULLPTR));
        pushButtonHisto->setText(QApplication::translate("gestion_employe", "Recherche Historique", Q_NULLPTR));
        b_supprimer->setTabText(b_supprimer->indexOf(tab_11), QApplication::translate("gestion_employe", "historique", Q_NULLPTR));
        groupBox_2->setTitle(QString());
        label_15->setText(QApplication::translate("gestion_employe", "Login", Q_NULLPTR));
        label_16->setText(QApplication::translate("gestion_employe", "Password", Q_NULLPTR));
        pb_ajout->setText(QApplication::translate("gestion_employe", "Ajouter", Q_NULLPTR));
        label_19->setText(QApplication::translate("gestion_employe", "Employe", Q_NULLPTR));
        phofileeeee->setTabText(phofileeeee->indexOf(tab_6), QApplication::translate("gestion_employe", "Ajouter Profile", Q_NULLPTR));
        Translate_2->setText(QApplication::translate("gestion_employe", "version Anglais", Q_NULLPTR));
        phofileeeee->setTabText(phofileeeee->indexOf(tab_7), QApplication::translate("gestion_employe", "Afficher Profile", Q_NULLPTR));
        label_20->setText(QApplication::translate("gestion_employe", "Login", Q_NULLPTR));
        pb_supp->setText(QApplication::translate("gestion_employe", "supprimer", Q_NULLPTR));
        phofileeeee->setTabText(phofileeeee->indexOf(tab_8), QApplication::translate("gestion_employe", "Supprimer Profile", Q_NULLPTR));
        pb_modif->setText(QApplication::translate("gestion_employe", "modifier", Q_NULLPTR));
        label_21->setText(QApplication::translate("gestion_employe", "Employe", Q_NULLPTR));
        label_17->setText(QApplication::translate("gestion_employe", "Login", Q_NULLPTR));
        label_18->setText(QApplication::translate("gestion_employe", "Password", Q_NULLPTR));
        phofileeeee->setTabText(phofileeeee->indexOf(tab_9), QApplication::translate("gestion_employe", "modifier Profile", Q_NULLPTR));
        phofileeeee->setTabText(phofileeeee->indexOf(tab_10), QString());
        muteSound->setText(QApplication::translate("gestion_employe", "Mute", Q_NULLPTR));
        actionSound->setText(QApplication::translate("gestion_employe", "Play", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class gestion_employe: public Ui_gestion_employe {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GESTION_EMPLOYE_H
