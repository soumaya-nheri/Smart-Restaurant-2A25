/********************************************************************************
** Form generated from reading UI file 'login.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGIN_H
#define UI_LOGIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_login
{
public:
    QWidget *centralwidget;
    QLineEdit *le_password;
    QPushButton *pb_login;
    QLineEdit *le_login;
    QLabel *label;
    QLabel *label_2;
    QToolButton *logo;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *login)
    {
        if (login->objectName().isEmpty())
            login->setObjectName(QStringLiteral("login"));
        login->resize(800, 600);
        centralwidget = new QWidget(login);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        centralwidget->setStyleSheet(QStringLiteral("background-color:white;"));
        le_password = new QLineEdit(centralwidget);
        le_password->setObjectName(QStringLiteral("le_password"));
        le_password->setGeometry(QRect(230, 140, 241, 31));
        le_password->setEchoMode(QLineEdit::Password);
        pb_login = new QPushButton(centralwidget);
        pb_login->setObjectName(QStringLiteral("pb_login"));
        pb_login->setGeometry(QRect(300, 200, 141, 51));
        QFont font;
        font.setFamily(QStringLiteral("Segoe Print"));
        pb_login->setFont(font);
        pb_login->setStyleSheet(QLatin1String("QPushButton {\n"
"\n"
"color: #778899c;\n"
"background:#778899;\n"
"border: none;\n"
"border: 1px solid #DCDCDC;\n"
"border-radius: 8px;\n"
"\n"
"}\n"
"QPushButton:hover {\n"
"color:#fff;\n"
"\n"
"background:#778899;\n"
"border: none;\n"
"}"));
        le_login = new QLineEdit(centralwidget);
        le_login->setObjectName(QStringLiteral("le_login"));
        le_login->setGeometry(QRect(230, 80, 241, 31));
        label = new QLabel(centralwidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(140, 90, 47, 14));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(140, 140, 71, 16));
        label_2->setFont(font);
        logo = new QToolButton(centralwidget);
        logo->setObjectName(QStringLiteral("logo"));
        logo->setGeometry(QRect(500, 250, 271, 301));
        logo->setStyleSheet(QLatin1String("\n"
"QToolButton{border:none;\n"
"	\n"
"	\n"
"	\n"
"	background-image: url(:/Files/logo3.jpg);\n"
"	\n"
" background-repeat: no-repeat;\n"
"background-position: center;\n"
"width:50px;\n"
"}"));
        login->setCentralWidget(centralwidget);
        menubar = new QMenuBar(login);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 22));
        login->setMenuBar(menubar);
        statusbar = new QStatusBar(login);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        login->setStatusBar(statusbar);

        retranslateUi(login);

        QMetaObject::connectSlotsByName(login);
    } // setupUi

    void retranslateUi(QMainWindow *login)
    {
        login->setWindowTitle(QApplication::translate("login", "MainWindow", Q_NULLPTR));
        pb_login->setText(QApplication::translate("login", "LOGIN", Q_NULLPTR));
        label->setText(QApplication::translate("login", "Login", Q_NULLPTR));
        label_2->setText(QApplication::translate("login", "Mot de passe", Q_NULLPTR));
        logo->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class login: public Ui_login {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGIN_H
