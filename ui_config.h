/********************************************************************************
** Form generated from reading UI file 'config.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONFIG_H
#define UI_CONFIG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_config
{
public:
    QWidget *centralwidget;
    QLabel *label_19;
    QPushButton *pushButton_8;
    QPushButton *pushButton_4;
    QPushButton *pushButton_6;
    QPushButton *pushButton_equals;
    QPushButton *pushButton_percent;
    QPushButton *pushButton_2;
    QLabel *label_29;
    QPushButton *pushButton_0;
    QSlider *volume_media;
    QPushButton *pushButton_5;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QPushButton *pushButton_divide;
    QWidget *layoutWidget_2;
    QVBoxLayout *verticalLayout_8;
    QToolButton *newfile;
    QToolButton *savefile;
    QToolButton *couper;
    QToolButton *redo;
    QToolButton *undo;
    QToolButton *copier;
    QToolButton *coller;
    QToolButton *openfile;
    QToolButton *clear;
    QToolButton *imprimer;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout_159;
    QPushButton *ouvrir_media;
    QPushButton *play_media;
    QPushButton *pause_media;
    QPushButton *stop_media;
    QPushButton *pushButton_minus;
    QPushButton *pushButton_1;
    QPushButton *pushButton_add;
    QPushButton *pushButton_plusMinus;
    QPushButton *pushButton_9;
    QTextEdit *textEdit;
    QPushButton *pushButton_multiply;
    QPushButton *pushButton_3;
    QPushButton *mute_media;
    QPushButton *pushButton_7;
    QPushButton *pushButton_clear;
    QPushButton *pushButton_dot;
    QLabel *label_54;
    QProgressBar *avancement_media;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *config)
    {
        if (config->objectName().isEmpty())
            config->setObjectName(QStringLiteral("config"));
        config->resize(917, 647);
        centralwidget = new QWidget(config);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        label_19 = new QLabel(centralwidget);
        label_19->setObjectName(QStringLiteral("label_19"));
        label_19->setGeometry(QRect(120, 220, 211, 51));
        QFont font;
        font.setFamily(QStringLiteral("Segoe Print"));
        label_19->setFont(font);
        label_19->setStyleSheet(QLatin1String("/* (Label at top) Label Stylesheet */\n"
"\n"
"QLabel {\n"
"  qproperty-alignment: 'AlignVCenter | AlignRight';\n"
"  border: 1px solid gray;\n"
"}\n"
"\n"
"background-color : white;\n"
"\n"
"/* End Label Stylesheet */"));
        pushButton_8 = new QPushButton(centralwidget);
        pushButton_8->setObjectName(QStringLiteral("pushButton_8"));
        pushButton_8->setGeometry(QRect(170, 430, 41, 41));
        pushButton_8->setFont(font);
        pushButton_8->setStyleSheet(QLatin1String("QPushButton {\n"
"color: #333;\n"
"border: 2px solid #555;\n"
"border-radius: 20px;\n"
"border-style: outset;\n"
"background: qradialgradient(\n"
"cx: 0.3, cy: -0.4, fx: 0.3, fy: -0.4,\n"
"radius: 1.35, stop: 0 #fff, stop: 1 #888\n"
");\n"
"padding: 5px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"background: qradialgradient(\n"
"cx: 0.3, cy: -0.4, fx: 0.3, fy: -0.4,\n"
"radius: 1.35, stop: 0 #fff, stop: 1 #bbb\n"
");\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"border-style: inset;\n"
"background: qradialgradient(\n"
"cx: 0.4, cy: -0.1, fx: 0.4, fy: -0.1,\n"
"radius: 1.35, stop: 0 #fff, stop: 1 #ddd\n"
");\n"
"}"));
        pushButton_4 = new QPushButton(centralwidget);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setGeometry(QRect(120, 380, 41, 41));
        pushButton_4->setFont(font);
        pushButton_4->setStyleSheet(QLatin1String("QPushButton {\n"
"color: #333;\n"
"border: 2px solid #555;\n"
"border-radius: 20px;\n"
"border-style: outset;\n"
"background: qradialgradient(\n"
"cx: 0.3, cy: -0.4, fx: 0.3, fy: -0.4,\n"
"radius: 1.35, stop: 0 #fff, stop: 1 #888\n"
");\n"
"padding: 5px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"background: qradialgradient(\n"
"cx: 0.3, cy: -0.4, fx: 0.3, fy: -0.4,\n"
"radius: 1.35, stop: 0 #fff, stop: 1 #bbb\n"
");\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"border-style: inset;\n"
"background: qradialgradient(\n"
"cx: 0.4, cy: -0.1, fx: 0.4, fy: -0.1,\n"
"radius: 1.35, stop: 0 #fff, stop: 1 #ddd\n"
");\n"
"}"));
        pushButton_6 = new QPushButton(centralwidget);
        pushButton_6->setObjectName(QStringLiteral("pushButton_6"));
        pushButton_6->setGeometry(QRect(220, 380, 41, 41));
        pushButton_6->setFont(font);
        pushButton_6->setStyleSheet(QLatin1String("QPushButton {\n"
"color: #333;\n"
"border: 2px solid #555;\n"
"border-radius: 20px;\n"
"border-style: outset;\n"
"background: qradialgradient(\n"
"cx: 0.3, cy: -0.4, fx: 0.3, fy: -0.4,\n"
"radius: 1.35, stop: 0 #fff, stop: 1 #888\n"
");\n"
"padding: 5px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"background: qradialgradient(\n"
"cx: 0.3, cy: -0.4, fx: 0.3, fy: -0.4,\n"
"radius: 1.35, stop: 0 #fff, stop: 1 #bbb\n"
");\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"border-style: inset;\n"
"background: qradialgradient(\n"
"cx: 0.4, cy: -0.1, fx: 0.4, fy: -0.1,\n"
"radius: 1.35, stop: 0 #fff, stop: 1 #ddd\n"
");\n"
"}\n"
""));
        pushButton_equals = new QPushButton(centralwidget);
        pushButton_equals->setObjectName(QStringLiteral("pushButton_equals"));
        pushButton_equals->setGeometry(QRect(280, 480, 41, 41));
        pushButton_equals->setFont(font);
        pushButton_equals->setStyleSheet(QLatin1String("/* (Clear,+/-,%,. buttons) Unary Operations Buttons Stylesheet */\n"
"\n"
"QPushButton {\n"
"  background-color: rgb(215, 215, 215);\n"
"  border: 2px solid #555;\n"
"border-radius: 20px;\n"
"border-style: outset;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #BEBEBE, stop: 1 #D7D7D7);\n"
"}\n"
"/* End Unary Operations Buttons Stylesheet */\n"
"\n"
"/* (Orange buttons) Operations Buttons Stylesheet */\n"
"QPushButton {\n"
"  background-color:#87CEEB;\n"
"  color: white; \n"
"  border: 1px solid gray;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #FF7832, stop: 1 #FF9739);\n"
"}\n"
""));
        pushButton_percent = new QPushButton(centralwidget);
        pushButton_percent->setObjectName(QStringLiteral("pushButton_percent"));
        pushButton_percent->setGeometry(QRect(220, 280, 41, 41));
        pushButton_percent->setFont(font);
        pushButton_percent->setStyleSheet(QLatin1String("/* (Clear,+/-,%,. buttons) Unary Operations Buttons Stylesheet */\n"
"\n"
"QPushButton {\n"
"  background-color: rgb(215, 215, 215);\n"
"  border: 2px solid #555;\n"
"border-radius: 20px;\n"
"border-style: outset;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #BEBEBE, stop: 1 #D7D7D7);\n"
"}\n"
"/* End Unary Operations Buttons Stylesheet */\n"
"\n"
"/* (Orange buttons) Operations Buttons Stylesheet */\n"
"QPushButton {\n"
"  background-color: #87CEEB;\n"
"  color: white; \n"
"  border: 1px solid gray;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #FF7832, stop: 1 #FF9739);\n"
"}\n"
""));
        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(170, 330, 41, 41));
        pushButton_2->setFont(font);
        pushButton_2->setStyleSheet(QLatin1String("QPushButton {\n"
"color: #333;\n"
"border: 2px solid #555;\n"
"border-radius: 20px;\n"
"border-style: outset;\n"
"background: qradialgradient(\n"
"cx: 0.3, cy: -0.4, fx: 0.3, fy: -0.4,\n"
"radius: 1.35, stop: 0 #fff, stop: 1 #888\n"
");\n"
"padding: 5px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"background: qradialgradient(\n"
"cx: 0.3, cy: -0.4, fx: 0.3, fy: -0.4,\n"
"radius: 1.35, stop: 0 #fff, stop: 1 #bbb\n"
");\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"border-style: inset;\n"
"background: qradialgradient(\n"
"cx: 0.4, cy: -0.1, fx: 0.4, fy: -0.1,\n"
"radius: 1.35, stop: 0 #fff, stop: 1 #ddd\n"
");\n"
"}"));
        label_29 = new QLabel(centralwidget);
        label_29->setObjectName(QStringLiteral("label_29"));
        label_29->setGeometry(QRect(20, 10, 47, 14));
        QFont font1;
        font1.setFamily(QStringLiteral("Segoe Print"));
        font1.setPointSize(12);
        font1.setBold(false);
        font1.setWeight(50);
        label_29->setFont(font1);
        pushButton_0 = new QPushButton(centralwidget);
        pushButton_0->setObjectName(QStringLiteral("pushButton_0"));
        pushButton_0->setGeometry(QRect(120, 480, 91, 41));
        pushButton_0->setFont(font);
        pushButton_0->setStyleSheet(QLatin1String("QPushButton {\n"
"color: #333;\n"
"border: 2px solid #555;\n"
"border-radius: 20px;\n"
"border-style: outset;\n"
"background: qradialgradient(\n"
"cx: 0.3, cy: -0.4, fx: 0.3, fy: -0.4,\n"
"radius: 1.35, stop: 0 #fff, stop: 1 #888\n"
");\n"
"padding: 5px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"background: qradialgradient(\n"
"cx: 0.3, cy: -0.4, fx: 0.3, fy: -0.4,\n"
"radius: 1.35, stop: 0 #fff, stop: 1 #bbb\n"
");\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"border-style: inset;\n"
"background: qradialgradient(\n"
"cx: 0.4, cy: -0.1, fx: 0.4, fy: -0.1,\n"
"radius: 1.35, stop: 0 #fff, stop: 1 #ddd\n"
");\n"
"}"));
        volume_media = new QSlider(centralwidget);
        volume_media->setObjectName(QStringLiteral("volume_media"));
        volume_media->setGeometry(QRect(100, 150, 261, 31));
        volume_media->setStyleSheet(QStringLiteral(""));
        volume_media->setOrientation(Qt::Horizontal);
        pushButton_5 = new QPushButton(centralwidget);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));
        pushButton_5->setGeometry(QRect(170, 380, 41, 41));
        pushButton_5->setFont(font);
        pushButton_5->setStyleSheet(QLatin1String("QPushButton {\n"
"color: #333;\n"
"border: 2px solid #555;\n"
"border-radius: 20px;\n"
"border-style: outset;\n"
"background: qradialgradient(\n"
"cx: 0.3, cy: -0.4, fx: 0.3, fy: -0.4,\n"
"radius: 1.35, stop: 0 #fff, stop: 1 #888\n"
");\n"
"padding: 5px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"background: qradialgradient(\n"
"cx: 0.3, cy: -0.4, fx: 0.3, fy: -0.4,\n"
"radius: 1.35, stop: 0 #fff, stop: 1 #bbb\n"
");\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"border-style: inset;\n"
"background: qradialgradient(\n"
"cx: 0.4, cy: -0.1, fx: 0.4, fy: -0.1,\n"
"radius: 1.35, stop: 0 #fff, stop: 1 #ddd\n"
");\n"
"}"));
        verticalLayoutWidget = new QWidget(centralwidget);
        verticalLayoutWidget->setObjectName(QStringLiteral("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(10, 110, 391, 32));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        pushButton_divide = new QPushButton(centralwidget);
        pushButton_divide->setObjectName(QStringLiteral("pushButton_divide"));
        pushButton_divide->setGeometry(QRect(280, 280, 41, 41));
        pushButton_divide->setFont(font);
        pushButton_divide->setStyleSheet(QLatin1String("/* (Clear,+/-,%,. buttons) Unary Operations Buttons Stylesheet */\n"
"\n"
"QPushButton {\n"
"  background-color: rgb(215, 215, 215);\n"
"  border: 2px solid #555;\n"
"border-radius: 20px;\n"
"border-style: outset;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #BEBEBE, stop: 1 #D7D7D7);\n"
"}\n"
"/* End Unary Operations Buttons Stylesheet */\n"
"\n"
"/* (Orange buttons) Operations Buttons Stylesheet */\n"
"QPushButton {\n"
"  background-color: #87CEEB;\n"
"  color: white; \n"
"  border: 1px solid gray;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #FF7832, stop: 1 #FF9739);\n"
"}\n"
""));
        layoutWidget_2 = new QWidget(centralwidget);
        layoutWidget_2->setObjectName(QStringLiteral("layoutWidget_2"));
        layoutWidget_2->setGeometry(QRect(750, 30, 61, 441));
        verticalLayout_8 = new QVBoxLayout(layoutWidget_2);
        verticalLayout_8->setSpacing(2);
        verticalLayout_8->setObjectName(QStringLiteral("verticalLayout_8"));
        verticalLayout_8->setContentsMargins(0, 0, 0, 0);
        newfile = new QToolButton(layoutWidget_2);
        newfile->setObjectName(QStringLiteral("newfile"));
        newfile->setStyleSheet(QLatin1String("\n"
"\n"
"\n"
"QToolButton {background-image: url(:/Files/icons8-add-file-50.png);\n"
" background-repeat: no-repeat;\n"
"background-position: center;\n"
"width: 125px; \n"
"	height:30px;\n"
"border-radius: 50%;}"));

        verticalLayout_8->addWidget(newfile);

        savefile = new QToolButton(layoutWidget_2);
        savefile->setObjectName(QStringLiteral("savefile"));
        savefile->setStyleSheet(QLatin1String("\n"
"QToolButton{border-radius: 50%;\n"
"\n"
"background-image: url(:/Files/icons8-save-50.png);\n"
" background-repeat: no-repeat;\n"
"background-position: center;\n"
"width: 125px; \n"
"	height:30px;}"));

        verticalLayout_8->addWidget(savefile);

        couper = new QToolButton(layoutWidget_2);
        couper->setObjectName(QStringLiteral("couper"));
        couper->setStyleSheet(QLatin1String("QToolButton{border-radius: 50%;\n"
"\n"
"background-image: url(:/Files/icons8-cut-50.png);\n"
"border-radius: 50%;\n"
" background-repeat: no-repeat;\n"
"background-position: center;\n"
"width: 125px; \n"
"	height:30px;}"));

        verticalLayout_8->addWidget(couper);

        redo = new QToolButton(layoutWidget_2);
        redo->setObjectName(QStringLiteral("redo"));
        redo->setStyleSheet(QLatin1String("QToolButton{border-radius: 50%;\n"
"background-image: url(:/Files/icons8-u-turn-to-left-50.png);\n"
"border-radius: 50%;\n"
"\n"
"border-radius: 50%;\n"
" background-repeat: no-repeat;\n"
"background-position: center;\n"
"width: 125px; \n"
"	height:30px;}\n"
""));

        verticalLayout_8->addWidget(redo);

        undo = new QToolButton(layoutWidget_2);
        undo->setObjectName(QStringLiteral("undo"));
        undo->setStyleSheet(QLatin1String("\n"
"QToolButton{border-radius: 50%;\n"
"background-image: url(:/Files/icons8-u-turn-to-right-50.png);\n"
"border-radius: 50%;\n"
"border-radius: 50%;\n"
" background-repeat: no-repeat;\n"
"background-position: center;\n"
"width: 125px; \n"
"	height:30px;}"));

        verticalLayout_8->addWidget(undo);

        copier = new QToolButton(layoutWidget_2);
        copier->setObjectName(QStringLiteral("copier"));
        copier->setStyleSheet(QLatin1String("\n"
"\n"
"QToolButton{border-radius: 50%;\n"
"background-image: url(:/Files/icons8-copy-36.png);\n"
"\n"
"\n"
"\n"
" background-repeat: no-repeat;\n"
"background-position: center;\n"
"width: 125px; \n"
"	height:30px;}"));

        verticalLayout_8->addWidget(copier);

        coller = new QToolButton(layoutWidget_2);
        coller->setObjectName(QStringLiteral("coller"));
        coller->setStyleSheet(QLatin1String("\n"
"\n"
"\n"
"QToolButton{border-radius: 50%;\n"
"background-image: url(:/Files/icons8-paste-37.png);\n"
"\n"
" background-repeat: no-repeat;\n"
"background-position: center;\n"
"width: 125px; \n"
"	height:30px;}"));

        verticalLayout_8->addWidget(coller);

        openfile = new QToolButton(layoutWidget_2);
        openfile->setObjectName(QStringLiteral("openfile"));
        openfile->setStyleSheet(QLatin1String("\n"
"QToolButton{background-image: url(:/Files/icons8-upload-50.png);\n"
"border-radius: 50%;\n"
"\n"
"\n"
"\n"
" background-repeat: no-repeat;\n"
"background-position: center;\n"
"width: 125px; \n"
"	height:30px;}"));

        verticalLayout_8->addWidget(openfile);

        clear = new QToolButton(layoutWidget_2);
        clear->setObjectName(QStringLiteral("clear"));
        clear->setStyleSheet(QLatin1String("\n"
"QToolButton{border-radius: 50%;\n"
"\n"
"background-image: url(:/Files/icons8-delete-bin-50.png);\n"
"\n"
"\n"
"\n"
" background-repeat: no-repeat;\n"
"background-position: center;\n"
"width: 125px; \n"
"	height:30px;}\n"
""));

        verticalLayout_8->addWidget(clear);

        imprimer = new QToolButton(layoutWidget_2);
        imprimer->setObjectName(QStringLiteral("imprimer"));
        imprimer->setStyleSheet(QLatin1String("\n"
"\n"
"QToolButton{border-radius: 50%;\n"
"background-image: url(:/Files/icons8-print-50 (1).png);\n"
"\n"
"\n"
"\n"
" background-repeat: no-repeat;\n"
"background-position: center;\n"
"width: 125px; \n"
"	height:30px;}"));

        verticalLayout_8->addWidget(imprimer);

        layoutWidget = new QWidget(centralwidget);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 30, 391, 71));
        horizontalLayout_159 = new QHBoxLayout(layoutWidget);
        horizontalLayout_159->setObjectName(QStringLiteral("horizontalLayout_159"));
        horizontalLayout_159->setContentsMargins(0, 0, 0, 0);
        ouvrir_media = new QPushButton(layoutWidget);
        ouvrir_media->setObjectName(QStringLiteral("ouvrir_media"));
        QFont font2;
        font2.setFamily(QStringLiteral("Segoe Print"));
        font2.setPointSize(11);
        font2.setBold(false);
        font2.setWeight(50);
        ouvrir_media->setFont(font2);
        ouvrir_media->setStyleSheet(QLatin1String("QPushButton {\n"
"color: #dcdcdc;\n"
"background:#535353;\n"
"border: none;\n"
"\n"
"border: 1px solid #DCDCDC;\n"
"border-radius: 8px;\n"
"width:60px;\n"
"}\n"
"QPushButton:hover {\n"
"color:#fff;\n"
"background: #87CEEB;\n"
"border: none;\n"
"}\n"
""));

        horizontalLayout_159->addWidget(ouvrir_media);

        play_media = new QPushButton(layoutWidget);
        play_media->setObjectName(QStringLiteral("play_media"));
        play_media->setFont(font2);
        play_media->setStyleSheet(QLatin1String("QPushButton {\n"
"color: #dcdcdc;\n"
"background:#535353;\n"
"border: none;\n"
"\n"
"border: 1px solid #DCDCDC;\n"
"border-radius: 8px;\n"
"}\n"
"QPushButton:hover {\n"
"color:#fff;\n"
"background: #87CEEB;\n"
"border: none;\n"
"}"));

        horizontalLayout_159->addWidget(play_media);

        pause_media = new QPushButton(layoutWidget);
        pause_media->setObjectName(QStringLiteral("pause_media"));
        pause_media->setFont(font2);
        pause_media->setStyleSheet(QLatin1String("QPushButton {\n"
"color: #dcdcdc;\n"
"background:#535353;\n"
"border: none;\n"
"\n"
"border: 1px solid #DCDCDC;\n"
"border-radius: 8px;\n"
"}\n"
"QPushButton:hover {\n"
"color:#fff;\n"
"background: #87CEEB;\n"
"border: none;\n"
"}"));

        horizontalLayout_159->addWidget(pause_media);

        stop_media = new QPushButton(layoutWidget);
        stop_media->setObjectName(QStringLiteral("stop_media"));
        stop_media->setFont(font2);
        stop_media->setStyleSheet(QLatin1String("QPushButton {\n"
"color: #dcdcdc;\n"
"background:#535353;\n"
"border: none;\n"
"\n"
"border: 1px solid #DCDCDC;\n"
"border-radius: 8px;\n"
"}\n"
"QPushButton:hover {\n"
"color:#fff;\n"
"background: #87CEEB;\n"
"border: none;\n"
"}"));

        horizontalLayout_159->addWidget(stop_media);

        pushButton_minus = new QPushButton(centralwidget);
        pushButton_minus->setObjectName(QStringLiteral("pushButton_minus"));
        pushButton_minus->setGeometry(QRect(280, 380, 41, 41));
        pushButton_minus->setFont(font);
        pushButton_minus->setStyleSheet(QLatin1String("/* (Clear,+/-,%,. buttons) Unary Operations Buttons Stylesheet */\n"
"\n"
"QPushButton {\n"
"  background-color: rgb(215, 215, 215);\n"
"  border: 2px solid #555;\n"
"border-radius: 20px;\n"
"border-style: outset;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #BEBEBE, stop: 1 #D7D7D7);\n"
"}\n"
"/* End Unary Operations Buttons Stylesheet */\n"
"\n"
"/* (Orange buttons) Operations Buttons Stylesheet */\n"
"QPushButton {\n"
"  background-color:#87CEEB;\n"
"  color: white; \n"
"  border: 1px solid gray;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #FF7832, stop: 1 #FF9739);\n"
"}\n"
""));
        pushButton_1 = new QPushButton(centralwidget);
        pushButton_1->setObjectName(QStringLiteral("pushButton_1"));
        pushButton_1->setGeometry(QRect(120, 330, 41, 41));
        pushButton_1->setFont(font);
        pushButton_1->setStyleSheet(QLatin1String("QPushButton {\n"
"color: #333;\n"
"border: 2px solid #555;\n"
"border-radius: 20px;\n"
"border-style: outset;\n"
"background: qradialgradient(\n"
"cx: 0.3, cy: -0.4, fx: 0.3, fy: -0.4,\n"
"radius: 1.35, stop: 0 #fff, stop: 1 #888\n"
");\n"
"padding: 5px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"background: qradialgradient(\n"
"cx: 0.3, cy: -0.4, fx: 0.3, fy: -0.4,\n"
"radius: 1.35, stop: 0 #fff, stop: 1 #bbb\n"
");\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"border-style: inset;\n"
"background: qradialgradient(\n"
"cx: 0.4, cy: -0.1, fx: 0.4, fy: -0.1,\n"
"radius: 1.35, stop: 0 #fff, stop: 1 #ddd\n"
");\n"
"}"));
        pushButton_add = new QPushButton(centralwidget);
        pushButton_add->setObjectName(QStringLiteral("pushButton_add"));
        pushButton_add->setGeometry(QRect(280, 430, 41, 41));
        pushButton_add->setFont(font);
        pushButton_add->setStyleSheet(QLatin1String("/* (Clear,+/-,%,. buttons) Unary Operations Buttons Stylesheet */\n"
"\n"
"QPushButton {\n"
"  background-color: rgb(215, 215, 215);\n"
"  border: 2px solid #555;\n"
"border-radius: 20px;\n"
"border-style: outset;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #BEBEBE, stop: 1 #D7D7D7);\n"
"}\n"
"/* End Unary Operations Buttons Stylesheet */\n"
"\n"
"/* (Orange buttons) Operations Buttons Stylesheet */\n"
"QPushButton {\n"
"  background-color: #87CEEB;\n"
"  color: white; \n"
"  border: 1px solid gray;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #FF7832, stop: 1 #FF9739);\n"
"}\n"
""));
        pushButton_plusMinus = new QPushButton(centralwidget);
        pushButton_plusMinus->setObjectName(QStringLiteral("pushButton_plusMinus"));
        pushButton_plusMinus->setGeometry(QRect(170, 280, 41, 41));
        pushButton_plusMinus->setFont(font);
        pushButton_plusMinus->setStyleSheet(QLatin1String("/* (Clear,+/-,%,. buttons) Unary Operations Buttons Stylesheet */\n"
"\n"
"QPushButton {\n"
"  background-color: #87CEEB;\n"
"  border: 2px solid #555;\n"
"border-radius: 20px;\n"
"border-style: outset;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #BEBEBE, stop: 1 #D7D7D7);\n"
"}\n"
"/* End Unary Operations Buttons Stylesheet */\n"
"\n"
"/* (Orange buttons) Operations Buttons Stylesheet */\n"
"QPushButton {\n"
"  background-color: #87CEEB;\n"
"  color: white; \n"
"  border: 1px solid gray;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #FF7832, stop: 1 #FF9739);\n"
"}\n"
""));
        pushButton_9 = new QPushButton(centralwidget);
        pushButton_9->setObjectName(QStringLiteral("pushButton_9"));
        pushButton_9->setGeometry(QRect(220, 430, 41, 41));
        pushButton_9->setFont(font);
        pushButton_9->setStyleSheet(QLatin1String("QPushButton {\n"
"color: #333;\n"
"border: 2px solid #555;\n"
"border-radius: 20px;\n"
"border-style: outset;\n"
"background: qradialgradient(\n"
"cx: 0.3, cy: -0.4, fx: 0.3, fy: -0.4,\n"
"radius: 1.35, stop: 0 #fff, stop: 1 #888\n"
");\n"
"padding: 5px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"background: qradialgradient(\n"
"cx: 0.3, cy: -0.4, fx: 0.3, fy: -0.4,\n"
"radius: 1.35, stop: 0 #fff, stop: 1 #bbb\n"
");\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"border-style: inset;\n"
"background: qradialgradient(\n"
"cx: 0.4, cy: -0.1, fx: 0.4, fy: -0.1,\n"
"radius: 1.35, stop: 0 #fff, stop: 1 #ddd\n"
");\n"
"}\n"
""));
        textEdit = new QTextEdit(centralwidget);
        textEdit->setObjectName(QStringLiteral("textEdit"));
        textEdit->setGeometry(QRect(420, 30, 321, 441));
        pushButton_multiply = new QPushButton(centralwidget);
        pushButton_multiply->setObjectName(QStringLiteral("pushButton_multiply"));
        pushButton_multiply->setGeometry(QRect(280, 330, 41, 41));
        pushButton_multiply->setFont(font);
        pushButton_multiply->setStyleSheet(QLatin1String("/* (Clear,+/-,%,. buttons) Unary Operations Buttons Stylesheet */\n"
"\n"
"QPushButton {\n"
"  background-color: rgb(215, 215, 215);\n"
"  border: 2px solid #555;\n"
"border-radius: 20px;\n"
"border-style: outset;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #BEBEBE, stop: 1 #D7D7D7);\n"
"}\n"
"/* End Unary Operations Buttons Stylesheet */\n"
"\n"
"/* (Orange buttons) Operations Buttons Stylesheet */\n"
"QPushButton {\n"
"  background-color:#87CEEB;\n"
"  color: white; \n"
"  border: 1px solid gray;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #FF7832, stop: 1 #FF9739);\n"
"}\n"
""));
        pushButton_3 = new QPushButton(centralwidget);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(220, 330, 41, 41));
        pushButton_3->setFont(font);
        pushButton_3->setStyleSheet(QLatin1String("QPushButton {\n"
"color: #333;\n"
"border: 2px solid #555;\n"
"border-radius: 20px;\n"
"border-style: outset;\n"
"background: qradialgradient(\n"
"cx: 0.3, cy: -0.4, fx: 0.3, fy: -0.4,\n"
"radius: 1.35, stop: 0 #fff, stop: 1 #888\n"
");\n"
"padding: 5px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"background: qradialgradient(\n"
"cx: 0.3, cy: -0.4, fx: 0.3, fy: -0.4,\n"
"radius: 1.35, stop: 0 #fff, stop: 1 #bbb\n"
");\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"border-style: inset;\n"
"background: qradialgradient(\n"
"cx: 0.4, cy: -0.1, fx: 0.4, fy: -0.1,\n"
"radius: 1.35, stop: 0 #fff, stop: 1 #ddd\n"
");\n"
"}"));
        mute_media = new QPushButton(centralwidget);
        mute_media->setObjectName(QStringLiteral("mute_media"));
        mute_media->setGeometry(QRect(10, 150, 81, 31));
        mute_media->setFont(font1);
        mute_media->setStyleSheet(QLatin1String("QPushButton {\n"
"color: #dcdcdc;\n"
"background:#535353;\n"
"border: none;\n"
"\n"
"border: 1px solid #DCDCDC;\n"
"border-radius: 8px;\n"
"}\n"
"QPushButton:hover {\n"
"color:#fff;\n"
"background: #87CEEB;\n"
"border: none;\n"
"}"));
        pushButton_7 = new QPushButton(centralwidget);
        pushButton_7->setObjectName(QStringLiteral("pushButton_7"));
        pushButton_7->setGeometry(QRect(120, 430, 41, 41));
        pushButton_7->setFont(font);
        pushButton_7->setStyleSheet(QLatin1String("QPushButton {\n"
"color: #333;\n"
"border: 2px solid #555;\n"
"border-radius: 20px;\n"
"border-style: outset;\n"
"background: qradialgradient(\n"
"cx: 0.3, cy: -0.4, fx: 0.3, fy: -0.4,\n"
"radius: 1.35, stop: 0 #fff, stop: 1 #888\n"
");\n"
"padding: 5px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"background: qradialgradient(\n"
"cx: 0.3, cy: -0.4, fx: 0.3, fy: -0.4,\n"
"radius: 1.35, stop: 0 #fff, stop: 1 #bbb\n"
");\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"border-style: inset;\n"
"background: qradialgradient(\n"
"cx: 0.4, cy: -0.1, fx: 0.4, fy: -0.1,\n"
"radius: 1.35, stop: 0 #fff, stop: 1 #ddd\n"
");\n"
"}"));
        pushButton_clear = new QPushButton(centralwidget);
        pushButton_clear->setObjectName(QStringLiteral("pushButton_clear"));
        pushButton_clear->setGeometry(QRect(120, 280, 41, 41));
        pushButton_clear->setFont(font);
        pushButton_clear->setStyleSheet(QLatin1String("/* (Clear,+/-,%,. buttons) Unary Operations Buttons Stylesheet */\n"
"\n"
"QPushButton {\n"
"  background-color: #87CEEB;\n"
"  border: 2px solid #555;\n"
"border-radius: 20px;\n"
"border-style: outset;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: #87CEEB;\n"
"}\n"
"/* End Unary Operations Buttons Stylesheet */\n"
"\n"
"/* (Orange buttons) Operations Buttons Stylesheet */\n"
"QPushButton {\n"
"  background-color: #87CEEB;\n"
"  color: white; \n"
"  border: 1px solid gray;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #FF7832, stop: 1 #FF9739);\n"
"}\n"
""));
        pushButton_dot = new QPushButton(centralwidget);
        pushButton_dot->setObjectName(QStringLiteral("pushButton_dot"));
        pushButton_dot->setGeometry(QRect(220, 480, 41, 41));
        pushButton_dot->setFont(font);
        pushButton_dot->setStyleSheet(QLatin1String("/* (Clear,+/-,%,. buttons) Unary Operations Buttons Stylesheet */\n"
"\n"
"QPushButton {\n"
"  background-color: rgb(215, 215, 215);\n"
"  border: 2px solid #555;\n"
"border-radius: 20px;\n"
"border-style: outset;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #BEBEBE, stop: 1 #D7D7D7);\n"
"}\n"
"/* End Unary Operations Buttons Stylesheet */\n"
"\n"
"/* (Orange buttons) Operations Buttons Stylesheet */\n"
"QPushButton {\n"
"  background-color:#87CEEB;\n"
"  color: white; \n"
"  border: 1px solid gray;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #FF7832, stop: 1 #FF9739);\n"
"}\n"
""));
        label_54 = new QLabel(centralwidget);
        label_54->setObjectName(QStringLiteral("label_54"));
        label_54->setGeometry(QRect(20, 200, 101, 16));
        QFont font3;
        font3.setFamily(QStringLiteral("Segoe Print"));
        font3.setPointSize(12);
        label_54->setFont(font3);
        avancement_media = new QProgressBar(centralwidget);
        avancement_media->setObjectName(QStringLiteral("avancement_media"));
        avancement_media->setGeometry(QRect(10, 110, 389, 27));
        avancement_media->setFont(font);
        avancement_media->setValue(0);
        config->setCentralWidget(centralwidget);
        menubar = new QMenuBar(config);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 917, 22));
        config->setMenuBar(menubar);
        statusbar = new QStatusBar(config);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        config->setStatusBar(statusbar);

        retranslateUi(config);

        QMetaObject::connectSlotsByName(config);
    } // setupUi

    void retranslateUi(QMainWindow *config)
    {
        config->setWindowTitle(QApplication::translate("config", "MainWindow", Q_NULLPTR));
        label_19->setText(QApplication::translate("config", "0", Q_NULLPTR));
        pushButton_8->setText(QApplication::translate("config", "8", Q_NULLPTR));
        pushButton_4->setText(QApplication::translate("config", "4", Q_NULLPTR));
        pushButton_6->setText(QApplication::translate("config", "6", Q_NULLPTR));
        pushButton_equals->setText(QApplication::translate("config", "=", Q_NULLPTR));
        pushButton_percent->setText(QApplication::translate("config", "%", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("config", "2", Q_NULLPTR));
        label_29->setText(QApplication::translate("config", "Son", Q_NULLPTR));
        pushButton_0->setText(QApplication::translate("config", "0", Q_NULLPTR));
        pushButton_5->setText(QApplication::translate("config", "5", Q_NULLPTR));
        pushButton_divide->setText(QApplication::translate("config", "\303\267", Q_NULLPTR));
        newfile->setText(QString());
        savefile->setText(QString());
        couper->setText(QString());
        redo->setText(QString());
        undo->setText(QString());
        copier->setText(QString());
        coller->setText(QString());
        openfile->setText(QString());
        clear->setText(QString());
        imprimer->setText(QString());
        ouvrir_media->setText(QApplication::translate("config", "ouvrir", Q_NULLPTR));
        play_media->setText(QApplication::translate("config", "play", Q_NULLPTR));
        pause_media->setText(QApplication::translate("config", "pause", Q_NULLPTR));
        stop_media->setText(QApplication::translate("config", "stop", Q_NULLPTR));
        pushButton_minus->setText(QApplication::translate("config", "-", Q_NULLPTR));
        pushButton_1->setText(QApplication::translate("config", "1", Q_NULLPTR));
        pushButton_add->setText(QApplication::translate("config", "+", Q_NULLPTR));
        pushButton_plusMinus->setText(QApplication::translate("config", "+/-", Q_NULLPTR));
        pushButton_9->setText(QApplication::translate("config", "9", Q_NULLPTR));
        pushButton_multiply->setText(QApplication::translate("config", "x", Q_NULLPTR));
        pushButton_3->setText(QApplication::translate("config", "3", Q_NULLPTR));
        mute_media->setText(QApplication::translate("config", "mute", Q_NULLPTR));
        pushButton_7->setText(QApplication::translate("config", "7", Q_NULLPTR));
        pushButton_clear->setText(QApplication::translate("config", "C", Q_NULLPTR));
        pushButton_dot->setText(QApplication::translate("config", ".", Q_NULLPTR));
        label_54->setText(QApplication::translate("config", "Calcultarice", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class config: public Ui_config {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONFIG_H
