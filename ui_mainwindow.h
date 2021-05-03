/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QPushButton *pushButton_6;
    QPushButton *pushButton_7;
    QPushButton *pushButton_8;
    QPushButton *pushButton_9;
    QPushButton *pushButton_10;
    QPushButton *pushButton_11;
    QToolButton *toolButton;
    QToolButton *toolButton_2;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(831, 625);
        MainWindow->setStyleSheet(QStringLiteral("background-color:white;"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        centralWidget->setStyleSheet(QStringLiteral(""));
        pushButton_6 = new QPushButton(centralWidget);
        pushButton_6->setObjectName(QStringLiteral("pushButton_6"));
        pushButton_6->setGeometry(QRect(290, 50, 251, 61));
        QFont font;
        font.setFamily(QStringLiteral("Segoe Print"));
        pushButton_6->setFont(font);
        pushButton_6->setStyleSheet(QLatin1String("QPushButton {\n"
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
        pushButton_7 = new QPushButton(centralWidget);
        pushButton_7->setObjectName(QStringLiteral("pushButton_7"));
        pushButton_7->setGeometry(QRect(290, 130, 251, 61));
        pushButton_7->setFont(font);
        pushButton_7->setStyleSheet(QLatin1String("QPushButton {\n"
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
        pushButton_8 = new QPushButton(centralWidget);
        pushButton_8->setObjectName(QStringLiteral("pushButton_8"));
        pushButton_8->setGeometry(QRect(290, 210, 251, 61));
        pushButton_8->setFont(font);
        pushButton_8->setStyleSheet(QLatin1String("QPushButton {\n"
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
        pushButton_9 = new QPushButton(centralWidget);
        pushButton_9->setObjectName(QStringLiteral("pushButton_9"));
        pushButton_9->setGeometry(QRect(290, 290, 251, 61));
        pushButton_9->setFont(font);
        pushButton_9->setStyleSheet(QLatin1String("QPushButton {\n"
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
        pushButton_10 = new QPushButton(centralWidget);
        pushButton_10->setObjectName(QStringLiteral("pushButton_10"));
        pushButton_10->setGeometry(QRect(290, 370, 251, 61));
        pushButton_10->setFont(font);
        pushButton_10->setStyleSheet(QLatin1String("QPushButton {\n"
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
        pushButton_11 = new QPushButton(centralWidget);
        pushButton_11->setObjectName(QStringLiteral("pushButton_11"));
        pushButton_11->setGeometry(QRect(290, 450, 251, 61));
        pushButton_11->setFont(font);
        pushButton_11->setStyleSheet(QLatin1String("QPushButton {\n"
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
        toolButton = new QToolButton(centralWidget);
        toolButton->setObjectName(QStringLiteral("toolButton"));
        toolButton->setGeometry(QRect(10, 10, 41, 41));
        toolButton->setStyleSheet(QStringLiteral("background-image: url(:/Files/video1.png);"));
        toolButton_2 = new QToolButton(centralWidget);
        toolButton_2->setObjectName(QStringLiteral("toolButton_2"));
        toolButton_2->setGeometry(QRect(80, 10, 41, 41));
        toolButton_2->setStyleSheet(QLatin1String("QToolButton{\n"
"	background-image: url(:/Files/video1.png);\n"
"\n"
"width: 25px; \n"
"	height:30px;\n"
"\n"
"border:none;\n"
"	}"));
        MainWindow->setCentralWidget(centralWidget);
        pushButton_6->raise();
        pushButton_7->raise();
        pushButton_8->raise();
        pushButton_9->raise();
        pushButton_10->raise();
        pushButton_11->raise();
        toolButton_2->raise();
        toolButton->raise();
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 831, 22));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "Gestion des Clients", Q_NULLPTR));
        pushButton_6->setText(QApplication::translate("MainWindow", "Gestion d'Employ\303\251s", Q_NULLPTR));
        pushButton_7->setText(QApplication::translate("MainWindow", "Gestion de Produits", Q_NULLPTR));
        pushButton_8->setText(QApplication::translate("MainWindow", "Gestion de Clients", Q_NULLPTR));
        pushButton_9->setText(QApplication::translate("MainWindow", "Gestion de Livraison", Q_NULLPTR));
        pushButton_10->setText(QApplication::translate("MainWindow", "Gestion de Revenue", Q_NULLPTR));
        pushButton_11->setText(QApplication::translate("MainWindow", "Gestion de Promotion", Q_NULLPTR));
        toolButton->setText(QApplication::translate("MainWindow", "...", Q_NULLPTR));
        toolButton_2->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
