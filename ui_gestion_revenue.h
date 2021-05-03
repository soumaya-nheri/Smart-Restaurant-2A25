/********************************************************************************
** Form generated from reading UI file 'gestion_revenue.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GESTION_REVENUE_H
#define UI_GESTION_REVENUE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
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
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_gestion_revenue
{
public:
    QWidget *centralwidget;
    QGroupBox *groupBox_3;
    QVBoxLayout *verticalLayout_6;
    QVBoxLayout *verticalLayout_5;
    QLabel *label_34;
    QPushButton *Elaa;
    QLabel *label_35;
    QPushButton *Elaa_2;
    QLabel *label_37;
    QPushButton *logout_button;
    QStackedWidget *stackedWidget;
    QWidget *page_5;
    QTabWidget *b_supprimer;
    QWidget *tab;
    QGroupBox *groupBox;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QPushButton *BA;
    QLineEdit *lineEdit_iddepense;
    QLineEdit *lineEdit_salaire;
    QLineEdit *lineEdit_idproduit;
    QLabel *label_10;
    QDateEdit *DateEdit_depense;
    QWidget *tab_2;
    QTableView *tab_depense;
    QRadioButton *tri_emp_2;
    QRadioButton *tri_emp_3;
    QRadioButton *tri_emp_4;
    QLineEdit *linechercher1;
    QLabel *label_11;
    QWidget *tab_3;
    QLineEdit *supp;
    QLabel *label_4;
    QPushButton *P_supprimer;
    QWidget *tab_4;
    QPushButton *pushButton_5;
    QLineEdit *modif1;
    QLineEdit *modif2;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QComboBox *comboBox;
    QLabel *label_8;
    QDateEdit *modif4;
    QLineEdit *modif5;
    QLabel *label_9;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QWidget *page_6;
    QTabWidget *b_supprimer_2;
    QWidget *tab_8;
    QGroupBox *groupBox_2;
    QLabel *label_12;
    QLabel *label_14;
    QPushButton *BA_2;
    QLineEdit *lineEdit_idrevenue;
    QLineEdit *lineEdit_montant;
    QLabel *label_15;
    QDateEdit *DateEdit_revenue;
    QWidget *tab_9;
    QTableView *tab_revenue;
    QLineEdit *linechercher1_3;
    QLabel *label_23;
    QWidget *tab_10;
    QLineEdit *supp_2;
    QLabel *label_16;
    QPushButton *P_supprimer_2;
    QWidget *tab_11;
    QPushButton *pushButton_6;
    QLineEdit *modif1_r;
    QLabel *label_17;
    QLabel *label_19;
    QComboBox *comboBox_2;
    QLabel *label_20;
    QDateEdit *modif4_r;
    QLineEdit *modif5_r;
    QLabel *label_21;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *gestion_revenue)
    {
        if (gestion_revenue->objectName().isEmpty())
            gestion_revenue->setObjectName(QStringLiteral("gestion_revenue"));
        gestion_revenue->resize(800, 600);
        centralwidget = new QWidget(gestion_revenue);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        groupBox_3 = new QGroupBox(centralwidget);
        groupBox_3->setObjectName(QStringLiteral("groupBox_3"));
        groupBox_3->setGeometry(QRect(-20, 20, 181, 371));
        groupBox_3->setStyleSheet(QLatin1String("background-color: transparent;\n"
"	color: black;\n"
"	font-weight: bold;\n"
"	font-size: 6,5px;"));
        verticalLayout_6 = new QVBoxLayout(groupBox_3);
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setSpacing(2);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        label_34 = new QLabel(groupBox_3);
        label_34->setObjectName(QStringLiteral("label_34"));
        label_34->setEnabled(true);
        label_34->setStyleSheet(QLatin1String("background-color: transparent;\n"
"	color: black;\n"
"	font-weight: bold;\n"
"	font-size: 6,5px;"));

        verticalLayout_5->addWidget(label_34);

        Elaa = new QPushButton(groupBox_3);
        Elaa->setObjectName(QStringLiteral("Elaa"));
        Elaa->setStyleSheet(QStringLiteral("image:url(:/Files/stock.png);"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/staff/istaff.png"), QSize(), QIcon::Normal, QIcon::Off);
        Elaa->setIcon(icon);
        Elaa->setIconSize(QSize(50, 30));

        verticalLayout_5->addWidget(Elaa);

        label_35 = new QLabel(groupBox_3);
        label_35->setObjectName(QStringLiteral("label_35"));
        label_35->setStyleSheet(QLatin1String("background-color: transparent;\n"
"	color: black;\n"
"	font-weight: bold;\n"
"	font-size: 6,5px;"));

        verticalLayout_5->addWidget(label_35);

        Elaa_2 = new QPushButton(groupBox_3);
        Elaa_2->setObjectName(QStringLiteral("Elaa_2"));
        Elaa_2->setStyleSheet(QStringLiteral("image:url(:/Files/stock.png);"));
        Elaa_2->setIcon(icon);
        Elaa_2->setIconSize(QSize(50, 30));

        verticalLayout_5->addWidget(Elaa_2);

        label_37 = new QLabel(groupBox_3);
        label_37->setObjectName(QStringLiteral("label_37"));

        verticalLayout_5->addWidget(label_37);

        logout_button = new QPushButton(groupBox_3);
        logout_button->setObjectName(QStringLiteral("logout_button"));
        logout_button->setStyleSheet(QStringLiteral("image:url(:/Files/stock.png);"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/log/ilog.png"), QSize(), QIcon::Normal, QIcon::Off);
        logout_button->setIcon(icon1);
        logout_button->setIconSize(QSize(50, 30));

        verticalLayout_5->addWidget(logout_button);


        verticalLayout_6->addLayout(verticalLayout_5);

        stackedWidget = new QStackedWidget(centralwidget);
        stackedWidget->setObjectName(QStringLiteral("stackedWidget"));
        stackedWidget->setGeometry(QRect(200, 0, 681, 371));
        page_5 = new QWidget();
        page_5->setObjectName(QStringLiteral("page_5"));
        b_supprimer = new QTabWidget(page_5);
        b_supprimer->setObjectName(QStringLiteral("b_supprimer"));
        b_supprimer->setGeometry(QRect(0, 40, 641, 411));
        b_supprimer->setStyleSheet(QLatin1String("QTabWidget::pane { /* The tab widget frame */\n"
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
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        groupBox = new QGroupBox(tab);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(0, 0, 691, 371));
        label = new QLabel(groupBox);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(50, 40, 91, 20));
        label->setStyleSheet(QLatin1String("background-color: transparent;\n"
"font: 8pt \"Castellar\";\n"
"	color: #454544;\n"
"	font-weight: bold;\n"
"	font-size: 13px;\n"
"border:none;"));
        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(50, 90, 81, 20));
        label_2->setStyleSheet(QLatin1String("background-color: transparent;\n"
"font: 8pt \"Castellar\";\n"
"	color: #454544;\n"
"	font-weight: bold;\n"
"	font-size: 13px;\n"
"border:none;"));
        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(50, 190, 131, 16));
        label_3->setStyleSheet(QLatin1String("background-color: transparent;\n"
"font: 8pt \"Castellar\";\n"
"	color: #454544;\n"
"	font-weight: bold;\n"
"	font-size: 13px;\n"
"border:none;"));
        BA = new QPushButton(groupBox);
        BA->setObjectName(QStringLiteral("BA"));
        BA->setGeometry(QRect(200, 260, 101, 31));
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
        lineEdit_iddepense = new QLineEdit(groupBox);
        lineEdit_iddepense->setObjectName(QStringLiteral("lineEdit_iddepense"));
        lineEdit_iddepense->setGeometry(QRect(190, 20, 151, 51));
        lineEdit_iddepense->setStyleSheet(QLatin1String("background-color: rgb(250, 211, 0);\n"
"font: 10pt \"Arial\";\n"
"width: 100%;\n"
"  padding: 12px 20px;\n"
"  margin: 8px 0;\n"
"  display: inline-block;\n"
"  border: 1px solid #dcdcdc;\n"
"  border-radius: 4px;\n"
"  box-sizing: border-box;\n"
"  background: #ADD8E6;\n"
"  color: #FFFFFF;"));
        lineEdit_salaire = new QLineEdit(groupBox);
        lineEdit_salaire->setObjectName(QStringLiteral("lineEdit_salaire"));
        lineEdit_salaire->setGeometry(QRect(190, 69, 151, 51));
        lineEdit_salaire->setStyleSheet(QLatin1String("background-color: rgb(250, 211, 0);\n"
"font: 10pt \"Arial\";\n"
"width: 100%;\n"
"  padding: 12px 20px;\n"
"  margin: 8px 0;\n"
"  display: inline-block;\n"
"  border: 1px solid #dcdcdc;\n"
"  border-radius: 4px;\n"
"  box-sizing: border-box;\n"
"  background: #ADD8E6;\n"
"  color: #FFFFFF;"));
        lineEdit_idproduit = new QLineEdit(groupBox);
        lineEdit_idproduit->setObjectName(QStringLiteral("lineEdit_idproduit"));
        lineEdit_idproduit->setGeometry(QRect(190, 179, 151, 51));
        lineEdit_idproduit->setStyleSheet(QLatin1String("background-color: rgb(250, 211, 0);\n"
"width: 100%;\n"
"  padding: 12px 20px;\n"
"  margin: 8px 0;\n"
"  display: inline-block;\n"
"  border: 1px solid #dcdcdc;\n"
"  border-radius: 4px;\n"
"  box-sizing: border-box;\n"
"  background: #ADD8E6;\n"
"  color: #FFFFFF;"));
        label_10 = new QLabel(groupBox);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(50, 140, 121, 16));
        label_10->setStyleSheet(QLatin1String("background-color: transparent;\n"
"font: 8pt \"Castellar\";\n"
"	color: #454544;\n"
"	font-weight: bold;\n"
"	font-size: 13px;\n"
"border:none;"));
        DateEdit_depense = new QDateEdit(groupBox);
        DateEdit_depense->setObjectName(QStringLiteral("DateEdit_depense"));
        DateEdit_depense->setGeometry(QRect(190, 121, 151, 51));
        DateEdit_depense->setStyleSheet(QLatin1String("background-color: rgb(250, 211, 0);\n"
"font: 10pt \"Arial\";\n"
"width: 100%;\n"
"  padding: 12px 20px;\n"
"  margin: 8px 0;\n"
"  display: inline-block;\n"
"  border: 1px solid #dcdcdc;\n"
"  border-radius: 4px;\n"
"  box-sizing: border-box;\n"
"  background: #ADD8E6;\n"
"  color: #FFFFFF;"));
        b_supprimer->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        tab_depense = new QTableView(tab_2);
        tab_depense->setObjectName(QStringLiteral("tab_depense"));
        tab_depense->setEnabled(true);
        tab_depense->setGeometry(QRect(260, 20, 481, 331));
        tab_depense->setStyleSheet(QLatin1String("border: 2px solid #87CEEB;\n"
"border-radius: 8px;\n"
""));
        tri_emp_2 = new QRadioButton(tab_2);
        tri_emp_2->setObjectName(QStringLiteral("tri_emp_2"));
        tri_emp_2->setGeometry(QRect(20, 170, 131, 31));
        tri_emp_2->setStyleSheet(QLatin1String("QRadioButton {\n"
"color:#dcdcdc;\n"
"background:#778899;\n"
"border: none;\n"
"font-size:15px;\n"
"font-family:Arial, Helvetica, sans-serif;\n"
"text-align: left;\n"
"border: 1px solid #DCDCDC;\n"
"border-radius: 8px;\n"
"}\n"
"QRadioButton:hover {\n"
"color:#fff;\n"
"background:#ADD8E6;\n"
"border: none;\n"
"text-align: left;\n"
"}\n"
"\n"
""));
        tri_emp_3 = new QRadioButton(tab_2);
        tri_emp_3->setObjectName(QStringLiteral("tri_emp_3"));
        tri_emp_3->setGeometry(QRect(20, 210, 131, 31));
        tri_emp_3->setStyleSheet(QLatin1String("QRadioButton {\n"
"color:#dcdcdc;\n"
"background:#778899;\n"
"border: none;\n"
"font-size:15px;\n"
"font-family:Arial, Helvetica, sans-serif;\n"
"text-align: left;\n"
"border: 1px solid #DCDCDC;\n"
"border-radius: 8px;\n"
"}\n"
"QRadioButton:hover {\n"
"color:#fff;\n"
"background:#ADD8E6;\n"
"border: none;\n"
"text-align: left;\n"
"}\n"
"\n"
""));
        tri_emp_4 = new QRadioButton(tab_2);
        tri_emp_4->setObjectName(QStringLiteral("tri_emp_4"));
        tri_emp_4->setGeometry(QRect(20, 250, 131, 31));
        tri_emp_4->setStyleSheet(QLatin1String("QRadioButton {\n"
"color:#dcdcdc;\n"
"background:#778899;\n"
"border: none;\n"
"font-size:15px;\n"
"font-family:Arial, Helvetica, sans-serif;\n"
"text-align: left;\n"
"border: 1px solid #DCDCDC;\n"
"border-radius: 8px;\n"
"}\n"
"QRadioButton:hover {\n"
"color:#fff;\n"
"background:#ADD8E6;\n"
"border: none;\n"
"text-align: left;\n"
"}\n"
"\n"
""));
        linechercher1 = new QLineEdit(tab_2);
        linechercher1->setObjectName(QStringLiteral("linechercher1"));
        linechercher1->setGeometry(QRect(120, 50, 111, 51));
        linechercher1->setStyleSheet(QLatin1String("background-color: rgb(250, 211, 0);\n"
"font: 10pt \"Arial\";\n"
"width: 100%;\n"
"  padding: 12px 20px;\n"
"  margin: 8px 0;\n"
"  display: inline-block;\n"
"  border: 1px solid #dcdcdc;\n"
"  border-radius: 4px;\n"
"  box-sizing: border-box;\n"
"  background: #ADD8E6;\n"
"  color: #FFFFFF;"));
        label_11 = new QLabel(tab_2);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setGeometry(QRect(10, 70, 91, 16));
        label_11->setStyleSheet(QLatin1String("background-color: transparent;\n"
"font: 8pt \"Castellar\";\n"
"	color: #454544;\n"
"	font-weight: bold;\n"
"	font-size: 13px;\n"
"border:none;"));
        b_supprimer->addTab(tab_2, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QStringLiteral("tab_3"));
        supp = new QLineEdit(tab_3);
        supp->setObjectName(QStringLiteral("supp"));
        supp->setGeometry(QRect(160, 40, 121, 51));
        supp->setStyleSheet(QLatin1String("background-color: rgb(250, 211, 0);\n"
"font: 10pt \"Arial\";\n"
"width: 100%;\n"
"  padding: 12px 20px;\n"
"  margin: 8px 0;\n"
"  display: inline-block;\n"
"  border: 1px solid #dcdcdc;\n"
"  border-radius: 4px;\n"
"  box-sizing: border-box;\n"
"  background: #ADD8E6;\n"
"  color: #FFFFFF;"));
        label_4 = new QLabel(tab_3);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(30, 60, 111, 16));
        label_4->setStyleSheet(QLatin1String("background-color: transparent;\n"
"font: 8pt \"Castellar\";\n"
"	color: #454544;\n"
"	font-weight: bold;\n"
"	font-size: 13px;\n"
"border:none;"));
        P_supprimer = new QPushButton(tab_3);
        P_supprimer->setObjectName(QStringLiteral("P_supprimer"));
        P_supprimer->setGeometry(QRect(130, 180, 111, 31));
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
        pushButton_5->setGeometry(QRect(190, 270, 121, 31));
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
        modif1->setGeometry(QRect(290, 60, 141, 51));
        modif1->setStyleSheet(QLatin1String("background-color: rgb(250, 211, 0);\n"
"font: 10pt \"Arial\";\n"
"width: 100%;\n"
"  padding: 12px 20px;\n"
"  margin: 8px 0;\n"
"  display: inline-block;\n"
"  border: 1px solid #dcdcdc;\n"
"  border-radius: 4px;\n"
"  box-sizing: border-box;\n"
"  background: #ADD8E6;\n"
"  color: #FFFFFF;"));
        modif2 = new QLineEdit(tab_4);
        modif2->setObjectName(QStringLiteral("modif2"));
        modif2->setGeometry(QRect(290, 109, 141, 51));
        modif2->setStyleSheet(QLatin1String("background-color: rgb(250, 211, 0);\n"
"font: 10pt \"Arial\";\n"
"width: 100%;\n"
"  padding: 12px 20px;\n"
"  margin: 8px 0;\n"
"  display: inline-block;\n"
"  border: 1px solid #dcdcdc;\n"
"  border-radius: 4px;\n"
"  box-sizing: border-box;\n"
"  background: #ADD8E6;\n"
"  color: #FFFFFF;"));
        label_5 = new QLabel(tab_4);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(120, 80, 121, 16));
        label_5->setStyleSheet(QLatin1String("background-color: transparent;\n"
"font: 8pt \"Castellar\";\n"
"	color: #454544;\n"
"	font-weight: bold;\n"
"	font-size: 13px;\n"
"border:none;"));
        label_6 = new QLabel(tab_4);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(120, 130, 91, 16));
        label_6->setStyleSheet(QLatin1String("background-color: transparent;\n"
"font: 8pt \"Castellar\";\n"
"	color: #454544;\n"
"	font-weight: bold;\n"
"	font-size: 13px;\n"
"border:none;"));
        label_7 = new QLabel(tab_4);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(120, 180, 141, 16));
        label_7->setStyleSheet(QLatin1String("background-color: transparent;\n"
"font: 8pt \"Castellar\";\n"
"	color: #454544;\n"
"	font-weight: bold;\n"
"	font-size: 13px;\n"
"border:none;"));
        comboBox = new QComboBox(tab_4);
        comboBox->setObjectName(QStringLiteral("comboBox"));
        comboBox->setGeometry(QRect(290, 10, 191, 51));
        comboBox->setStyleSheet(QLatin1String("background-color: rgb(250, 211, 0);\n"
"font: 10pt \"Arial\";\n"
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
        label_8->setGeometry(QRect(120, 30, 111, 16));
        label_8->setStyleSheet(QLatin1String("background-color: transparent;\n"
"font: 8pt \"Castellar\";\n"
"	color: #454544;\n"
"	font-weight: bold;\n"
"	font-size: 13px;\n"
"border:none;"));
        modif4 = new QDateEdit(tab_4);
        modif4->setObjectName(QStringLiteral("modif4"));
        modif4->setGeometry(QRect(290, 160, 141, 51));
        modif4->setStyleSheet(QLatin1String("background-color: rgb(250, 211, 0);\n"
"font: 10pt \"Arial\";\n"
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
        modif5->setGeometry(QRect(290, 210, 141, 51));
        modif5->setStyleSheet(QLatin1String("background-color: rgb(250, 211, 0);\n"
"font: 10pt \"Arial\";\n"
"width: 100%;\n"
"  padding: 12px 20px;\n"
"  margin: 8px 0;\n"
"  display: inline-block;\n"
"  border: 1px solid #dcdcdc;\n"
"  border-radius: 4px;\n"
"  box-sizing: border-box;\n"
"  background: #ADD8E6;\n"
"  color: #FFFFFF;"));
        label_9 = new QLabel(tab_4);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(120, 230, 131, 16));
        label_9->setStyleSheet(QLatin1String("background-color: transparent;\n"
"font: 8pt \"Castellar\";\n"
"	color: #454544;\n"
"	font-weight: bold;\n"
"	font-size: 13px;\n"
"border:none;"));
        b_supprimer->addTab(tab_4, QString());
        pushButton = new QPushButton(page_5);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(10, 0, 91, 23));
        pushButton->setStyleSheet(QLatin1String("QPushButton {\n"
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
        pushButton_2 = new QPushButton(page_5);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(554, 0, 91, 23));
        pushButton_2->setStyleSheet(QLatin1String("QPushButton {\n"
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
        stackedWidget->addWidget(page_5);
        page_6 = new QWidget();
        page_6->setObjectName(QStringLiteral("page_6"));
        b_supprimer_2 = new QTabWidget(page_6);
        b_supprimer_2->setObjectName(QStringLiteral("b_supprimer_2"));
        b_supprimer_2->setGeometry(QRect(10, 30, 811, 411));
        b_supprimer_2->setStyleSheet(QLatin1String("QTabWidget::pane { /* The tab widget frame */\n"
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
        tab_8 = new QWidget();
        tab_8->setObjectName(QStringLiteral("tab_8"));
        groupBox_2 = new QGroupBox(tab_8);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setGeometry(QRect(-10, 0, 651, 371));
        label_12 = new QLabel(groupBox_2);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setGeometry(QRect(50, 40, 111, 20));
        label_12->setStyleSheet(QLatin1String("background-color: transparent;\n"
"font: 8pt \"Castellar\";\n"
"	color: #454544;\n"
"	font-weight: bold;\n"
"	font-size: 13px;\n"
"border:none;"));
        label_14 = new QLabel(groupBox_2);
        label_14->setObjectName(QStringLiteral("label_14"));
        label_14->setGeometry(QRect(50, 160, 91, 16));
        label_14->setStyleSheet(QLatin1String("background-color: transparent;\n"
"font: 8pt \"Castellar\";\n"
"	color: #454544;\n"
"	font-weight: bold;\n"
"	font-size: 13px;\n"
"border:none;"));
        BA_2 = new QPushButton(groupBox_2);
        BA_2->setObjectName(QStringLiteral("BA_2"));
        BA_2->setGeometry(QRect(200, 260, 111, 31));
        BA_2->setStyleSheet(QLatin1String("QPushButton {\n"
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
        lineEdit_idrevenue = new QLineEdit(groupBox_2);
        lineEdit_idrevenue->setObjectName(QStringLiteral("lineEdit_idrevenue"));
        lineEdit_idrevenue->setGeometry(QRect(210, 20, 151, 51));
        lineEdit_idrevenue->setStyleSheet(QLatin1String("background-color: rgb(250, 211, 0);\n"
"font: 10pt \"Arial\";\n"
"width: 100%;\n"
"  padding: 12px 20px;\n"
"  margin: 8px 0;\n"
"  display: inline-block;\n"
"  border: 1px solid #dcdcdc;\n"
"  border-radius: 4px;\n"
"  box-sizing: border-box;\n"
"  background: #ADD8E6;\n"
"  color: #FFFFFF;"));
        lineEdit_montant = new QLineEdit(groupBox_2);
        lineEdit_montant->setObjectName(QStringLiteral("lineEdit_montant"));
        lineEdit_montant->setGeometry(QRect(210, 150, 151, 51));
        lineEdit_montant->setStyleSheet(QLatin1String("background-color: rgb(250, 211, 0);\n"
"font: 10pt \"Arial\";\n"
"width: 100%;\n"
"  padding: 12px 20px;\n"
"  margin: 8px 0;\n"
"  display: inline-block;\n"
"  border: 1px solid #dcdcdc;\n"
"  border-radius: 4px;\n"
"  box-sizing: border-box;\n"
"  background: #ADD8E6;\n"
"  color: #FFFFFF;\n"
""));
        label_15 = new QLabel(groupBox_2);
        label_15->setObjectName(QStringLiteral("label_15"));
        label_15->setGeometry(QRect(50, 100, 141, 16));
        label_15->setStyleSheet(QLatin1String("background-color: transparent;\n"
"font: 8pt \"Castellar\";\n"
"	color: #454544;\n"
"	font-weight: bold;\n"
"	font-size: 13px;\n"
"border:none;"));
        DateEdit_revenue = new QDateEdit(groupBox_2);
        DateEdit_revenue->setObjectName(QStringLiteral("DateEdit_revenue"));
        DateEdit_revenue->setGeometry(QRect(210, 80, 151, 51));
        DateEdit_revenue->setStyleSheet(QLatin1String("background-color: rgb(250, 211, 0);\n"
"font: 10pt \"Arial\";\n"
"width: 100%;\n"
"  padding: 12px 20px;\n"
"  margin: 8px 0;\n"
"  display: inline-block;\n"
"  border: 1px solid #dcdcdc;\n"
"  border-radius: 4px;\n"
"  box-sizing: border-box;\n"
"  background: #ADD8E6;\n"
"  color: #FFFFFF;"));
        b_supprimer_2->addTab(tab_8, QString());
        tab_9 = new QWidget();
        tab_9->setObjectName(QStringLiteral("tab_9"));
        tab_revenue = new QTableView(tab_9);
        tab_revenue->setObjectName(QStringLiteral("tab_revenue"));
        tab_revenue->setEnabled(true);
        tab_revenue->setGeometry(QRect(260, 20, 481, 331));
        tab_revenue->setStyleSheet(QLatin1String("border: 2px solid #87CEEB;\n"
"border-radius: 8px;"));
        linechercher1_3 = new QLineEdit(tab_9);
        linechercher1_3->setObjectName(QStringLiteral("linechercher1_3"));
        linechercher1_3->setGeometry(QRect(60, 90, 113, 51));
        linechercher1_3->setStyleSheet(QLatin1String("background-color: rgb(250, 211, 0);\n"
"font: 10pt \"Arial\";\n"
"width: 100%;\n"
"  padding: 12px 20px;\n"
"  margin: 8px 0;\n"
"  display: inline-block;\n"
"  border: 1px solid #dcdcdc;\n"
"  border-radius: 4px;\n"
"  box-sizing: border-box;\n"
"  background: #ADD8E6;\n"
"  color: #FFFFFF;"));
        label_23 = new QLabel(tab_9);
        label_23->setObjectName(QStringLiteral("label_23"));
        label_23->setGeometry(QRect(60, 70, 111, 16));
        label_23->setStyleSheet(QLatin1String("background-color: transparent;\n"
"font: 8pt \"Castellar\";\n"
"	color: #454544;\n"
"	font-weight: bold;\n"
"	font-size: 13px;\n"
"border:none;"));
        b_supprimer_2->addTab(tab_9, QString());
        tab_10 = new QWidget();
        tab_10->setObjectName(QStringLiteral("tab_10"));
        supp_2 = new QLineEdit(tab_10);
        supp_2->setObjectName(QStringLiteral("supp_2"));
        supp_2->setGeometry(QRect(180, 50, 113, 51));
        supp_2->setStyleSheet(QLatin1String("background-color: rgb(250, 211, 0);\n"
"font: 10pt \"Arial\";\n"
"width: 100%;\n"
"  padding: 12px 20px;\n"
"  margin: 8px 0;\n"
"  display: inline-block;\n"
"  border: 1px solid #dcdcdc;\n"
"  border-radius: 4px;\n"
"  box-sizing: border-box;\n"
"  background: #ADD8E6;\n"
"  color: #FFFFFF;"));
        label_16 = new QLabel(tab_10);
        label_16->setObjectName(QStringLiteral("label_16"));
        label_16->setGeometry(QRect(30, 70, 101, 16));
        label_16->setStyleSheet(QLatin1String("background-color: transparent;\n"
"font: 8pt \"Castellar\";\n"
"	color: #454544;\n"
"	font-weight: bold;\n"
"	font-size: 13px;\n"
"border:none;"));
        P_supprimer_2 = new QPushButton(tab_10);
        P_supprimer_2->setObjectName(QStringLiteral("P_supprimer_2"));
        P_supprimer_2->setGeometry(QRect(150, 200, 111, 31));
        P_supprimer_2->setStyleSheet(QLatin1String("QPushButton {\n"
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
        b_supprimer_2->addTab(tab_10, QString());
        tab_11 = new QWidget();
        tab_11->setObjectName(QStringLiteral("tab_11"));
        pushButton_6 = new QPushButton(tab_11);
        pushButton_6->setObjectName(QStringLiteral("pushButton_6"));
        pushButton_6->setGeometry(QRect(230, 270, 111, 31));
        pushButton_6->setStyleSheet(QLatin1String("QPushButton {\n"
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
        modif1_r = new QLineEdit(tab_11);
        modif1_r->setObjectName(QStringLiteral("modif1_r"));
        modif1_r->setGeometry(QRect(290, 79, 151, 51));
        modif1_r->setStyleSheet(QLatin1String("background-color: rgb(250, 211, 0);\n"
"font: 10pt \"Arial\";\n"
"width: 100%;\n"
"  padding: 12px 20px;\n"
"  margin: 8px 0;\n"
"  display: inline-block;\n"
"  border: 1px solid #dcdcdc;\n"
"  border-radius: 4px;\n"
"  box-sizing: border-box;\n"
"  background: #ADD8E6;\n"
"  color: #FFFFFF;"));
        label_17 = new QLabel(tab_11);
        label_17->setObjectName(QStringLiteral("label_17"));
        label_17->setGeometry(QRect(130, 100, 111, 16));
        label_17->setStyleSheet(QLatin1String("background-color: transparent;\n"
"font: 8pt \"Castellar\";\n"
"	color: #454544;\n"
"	font-weight: bold;\n"
"	font-size: 13px;\n"
"border:none;"));
        label_19 = new QLabel(tab_11);
        label_19->setObjectName(QStringLiteral("label_19"));
        label_19->setGeometry(QRect(130, 150, 131, 16));
        label_19->setStyleSheet(QLatin1String("background-color: transparent;\n"
"font: 8pt \"Castellar\";\n"
"	color: #454544;\n"
"	font-weight: bold;\n"
"	font-size: 13px;\n"
"border:none;"));
        comboBox_2 = new QComboBox(tab_11);
        comboBox_2->setObjectName(QStringLiteral("comboBox_2"));
        comboBox_2->setGeometry(QRect(280, 20, 191, 51));
        comboBox_2->setStyleSheet(QLatin1String("background-color: rgb(250, 211, 0);\n"
"font: 10pt \"Arial\";\n"
"width: 100%;\n"
"  padding: 12px 20px;\n"
"  margin: 8px 0;\n"
"  display: inline-block;\n"
"  border: 1px solid #dcdcdc;\n"
"  border-radius: 4px;\n"
"  box-sizing: border-box;\n"
"  background: #ADD8E6;\n"
"  color: #FFFFFF;"));
        label_20 = new QLabel(tab_11);
        label_20->setObjectName(QStringLiteral("label_20"));
        label_20->setGeometry(QRect(130, 40, 111, 16));
        label_20->setStyleSheet(QLatin1String("background-color: transparent;\n"
"font: 8pt \"Castellar\";\n"
"	color: #454544;\n"
"	font-weight: bold;\n"
"	font-size: 13px;\n"
"border:none;"));
        modif4_r = new QDateEdit(tab_11);
        modif4_r->setObjectName(QStringLiteral("modif4_r"));
        modif4_r->setGeometry(QRect(290, 131, 151, 51));
        modif4_r->setStyleSheet(QLatin1String("background-color: rgb(250, 211, 0);\n"
"font: 10pt \"Arial\";\n"
"width: 100%;\n"
"  padding: 12px 20px;\n"
"  margin: 8px 0;\n"
"  display: inline-block;\n"
"  border: 1px solid #dcdcdc;\n"
"  border-radius: 4px;\n"
"  box-sizing: border-box;\n"
"  background: #ADD8E6;\n"
"  color: #FFFFFF;"));
        modif5_r = new QLineEdit(tab_11);
        modif5_r->setObjectName(QStringLiteral("modif5_r"));
        modif5_r->setGeometry(QRect(290, 179, 151, 51));
        modif5_r->setStyleSheet(QLatin1String("background-color: rgb(250, 211, 0);\n"
"font: 10pt \"Arial\";\n"
"width: 100%;\n"
"  padding: 12px 20px;\n"
"  margin: 8px 0;\n"
"  display: inline-block;\n"
"  border: 1px solid #dcdcdc;\n"
"  border-radius: 4px;\n"
"  box-sizing: border-box;\n"
"  background: #ADD8E6;\n"
"  color: #FFFFFF;"));
        label_21 = new QLabel(tab_11);
        label_21->setObjectName(QStringLiteral("label_21"));
        label_21->setGeometry(QRect(130, 200, 81, 16));
        label_21->setStyleSheet(QLatin1String("background-color: transparent;\n"
"font: 8pt \"Castellar\";\n"
"	color: #454544;\n"
"	font-weight: bold;\n"
"	font-size: 13px;\n"
"border:none;"));
        b_supprimer_2->addTab(tab_11, QString());
        pushButton_3 = new QPushButton(page_6);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(10, 0, 101, 23));
        pushButton_3->setStyleSheet(QLatin1String("QPushButton {\n"
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
        pushButton_4 = new QPushButton(page_6);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setGeometry(QRect(564, 0, 91, 23));
        pushButton_4->setStyleSheet(QLatin1String("QPushButton {\n"
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
        stackedWidget->addWidget(page_6);
        gestion_revenue->setCentralWidget(centralwidget);
        menubar = new QMenuBar(gestion_revenue);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 22));
        gestion_revenue->setMenuBar(menubar);
        statusbar = new QStatusBar(gestion_revenue);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        gestion_revenue->setStatusBar(statusbar);

        retranslateUi(gestion_revenue);

        stackedWidget->setCurrentIndex(0);
        b_supprimer->setCurrentIndex(1);
        b_supprimer_2->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(gestion_revenue);
    } // setupUi

    void retranslateUi(QMainWindow *gestion_revenue)
    {
        gestion_revenue->setWindowTitle(QApplication::translate("gestion_revenue", "MainWindow", Q_NULLPTR));
        groupBox_3->setTitle(QApplication::translate("gestion_revenue", "Menu", Q_NULLPTR));
        label_34->setText(QApplication::translate("gestion_revenue", "Gestion des Depenses", Q_NULLPTR));
        Elaa->setText(QString());
        label_35->setText(QApplication::translate("gestion_revenue", "Gestion des Revenues", Q_NULLPTR));
        Elaa_2->setText(QString());
        label_37->setText(QApplication::translate("gestion_revenue", " Configuration", Q_NULLPTR));
        logout_button->setText(QString());
        groupBox->setTitle(QString());
        label->setText(QApplication::translate("gestion_revenue", "id_depense", Q_NULLPTR));
        label_2->setText(QApplication::translate("gestion_revenue", "salaire", Q_NULLPTR));
        label_3->setText(QApplication::translate("gestion_revenue", "id_produit", Q_NULLPTR));
        BA->setText(QApplication::translate("gestion_revenue", "Ajouter", Q_NULLPTR));
        label_10->setText(QApplication::translate("gestion_revenue", "Date_depense", Q_NULLPTR));
        b_supprimer->setTabText(b_supprimer->indexOf(tab), QApplication::translate("gestion_revenue", "Ajouter depense", Q_NULLPTR));
        tri_emp_2->setText(QApplication::translate("gestion_revenue", "Trier par Id ", Q_NULLPTR));
        tri_emp_3->setText(QApplication::translate("gestion_revenue", "Trier par Date", Q_NULLPTR));
        tri_emp_4->setText(QApplication::translate("gestion_revenue", "Trier par salaire", Q_NULLPTR));
        linechercher1->setText(QString());
        label_11->setText(QApplication::translate("gestion_revenue", "id_depense", Q_NULLPTR));
        b_supprimer->setTabText(b_supprimer->indexOf(tab_2), QApplication::translate("gestion_revenue", "Afficher depense", Q_NULLPTR));
        label_4->setText(QApplication::translate("gestion_revenue", "Id_depense", Q_NULLPTR));
        P_supprimer->setText(QApplication::translate("gestion_revenue", "supprimer", Q_NULLPTR));
        b_supprimer->setTabText(b_supprimer->indexOf(tab_3), QApplication::translate("gestion_revenue", "Supprimer depense", Q_NULLPTR));
        pushButton_5->setText(QApplication::translate("gestion_revenue", "modifier", Q_NULLPTR));
        label_5->setText(QApplication::translate("gestion_revenue", "id_depense", Q_NULLPTR));
        label_6->setText(QApplication::translate("gestion_revenue", "salaire", Q_NULLPTR));
        label_7->setText(QApplication::translate("gestion_revenue", "date_depense", Q_NULLPTR));
        label_8->setText(QApplication::translate("gestion_revenue", "chercher id_depense", Q_NULLPTR));
        label_9->setText(QApplication::translate("gestion_revenue", "id_produit", Q_NULLPTR));
        b_supprimer->setTabText(b_supprimer->indexOf(tab_4), QApplication::translate("gestion_revenue", "modifier depense", Q_NULLPTR));
        pushButton->setText(QApplication::translate("gestion_revenue", "BACK", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("gestion_revenue", "FRONT", Q_NULLPTR));
        groupBox_2->setTitle(QString());
        label_12->setText(QApplication::translate("gestion_revenue", "id_revenue", Q_NULLPTR));
        label_14->setText(QApplication::translate("gestion_revenue", "montant", Q_NULLPTR));
        BA_2->setText(QApplication::translate("gestion_revenue", "Ajouter", Q_NULLPTR));
        label_15->setText(QApplication::translate("gestion_revenue", "Date_revenue", Q_NULLPTR));
        b_supprimer_2->setTabText(b_supprimer_2->indexOf(tab_8), QApplication::translate("gestion_revenue", "Ajouter revenue", Q_NULLPTR));
        linechercher1_3->setText(QString());
        label_23->setText(QApplication::translate("gestion_revenue", "id_revenue", Q_NULLPTR));
        b_supprimer_2->setTabText(b_supprimer_2->indexOf(tab_9), QApplication::translate("gestion_revenue", "Afficher revenue", Q_NULLPTR));
        label_16->setText(QApplication::translate("gestion_revenue", "Id_revenue", Q_NULLPTR));
        P_supprimer_2->setText(QApplication::translate("gestion_revenue", "supprimer", Q_NULLPTR));
        b_supprimer_2->setTabText(b_supprimer_2->indexOf(tab_10), QApplication::translate("gestion_revenue", "Supprimer revenue", Q_NULLPTR));
        pushButton_6->setText(QApplication::translate("gestion_revenue", "modifier", Q_NULLPTR));
        label_17->setText(QApplication::translate("gestion_revenue", "id_revenue", Q_NULLPTR));
        label_19->setText(QApplication::translate("gestion_revenue", "date_revenue", Q_NULLPTR));
        label_20->setText(QApplication::translate("gestion_revenue", "chercher id_revenue", Q_NULLPTR));
        label_21->setText(QApplication::translate("gestion_revenue", "montant", Q_NULLPTR));
        b_supprimer_2->setTabText(b_supprimer_2->indexOf(tab_11), QApplication::translate("gestion_revenue", "modifier revenue", Q_NULLPTR));
        pushButton_3->setText(QApplication::translate("gestion_revenue", "BACK", Q_NULLPTR));
        pushButton_4->setText(QApplication::translate("gestion_revenue", "FRONT", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class gestion_revenue: public Ui_gestion_revenue {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GESTION_REVENUE_H
