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
#include <QtWidgets/QFrame>
#include <QtWidgets/QGroupBox>
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
    QFrame *frame;
    QTextEdit *textEdit;
    QWidget *layoutWidget_2;
    QHBoxLayout *horizontalLayout;
    QToolButton *imprimer;
    QToolButton *clear;
    QToolButton *openfile;
    QToolButton *coller;
    QToolButton *copier;
    QToolButton *undo;
    QToolButton *redo;
    QToolButton *couper;
    QToolButton *savefile;
    QToolButton *newfile;
    QGroupBox *groupBox;
    QPushButton *pushButton_plusMinus;
    QPushButton *pushButton_6;
    QPushButton *pushButton_7;
    QPushButton *pushButton_equals;
    QPushButton *pushButton_0;
    QPushButton *pushButton_1;
    QPushButton *pushButton_2;
    QPushButton *pushButton_4;
    QPushButton *mute_media;
    QPushButton *pushButton_9;
    QPushButton *pushButton_multiply;
    QPushButton *pushButton_8;
    QPushButton *pushButton_dot;
    QPushButton *pushButton_5;
    QPushButton *pushButton_minus;
    QPushButton *pushButton_add;
    QPushButton *pushButton_clear;
    QPushButton *pushButton_percent;
    QPushButton *pushButton_divide;
    QPushButton *pushButton_3;
    QLabel *label_19;
    QFrame *frame_2;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout_159;
    QPushButton *ouvrir_media;
    QPushButton *stop_media;
    QPushButton *play_media;
    QPushButton *pause_media;
    QSlider *volume_media;
    QProgressBar *avancement_media;
    QPushButton *mute_media_2;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *config)
    {
        if (config->objectName().isEmpty())
            config->setObjectName(QStringLiteral("config"));
        config->resize(917, 647);
        centralwidget = new QWidget(config);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        centralwidget->setStyleSheet(QLatin1String("	background-color: qlineargradient(spread:repeat, x1:1, y1:0, x2:1, y2:1, stop:0 rgba(217, 217, 217, 255),stop:1 rgba(228, 228, 228, 255));\n"
"	color: #000000;\n"
"background-color: white"));
        frame = new QFrame(centralwidget);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setGeometry(QRect(390, 210, 551, 361));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        textEdit = new QTextEdit(frame);
        textEdit->setObjectName(QStringLiteral("textEdit"));
        textEdit->setGeometry(QRect(0, 50, 511, 311));
        textEdit->setStyleSheet(QStringLiteral("border:none;"));
        layoutWidget_2 = new QWidget(frame);
        layoutWidget_2->setObjectName(QStringLiteral("layoutWidget_2"));
        layoutWidget_2->setGeometry(QRect(0, 10, 1300, 41));
        horizontalLayout = new QHBoxLayout(layoutWidget_2);
        horizontalLayout->setSpacing(2);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
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

        horizontalLayout->addWidget(imprimer);

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

        horizontalLayout->addWidget(clear);

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

        horizontalLayout->addWidget(openfile);

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

        horizontalLayout->addWidget(coller);

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

        horizontalLayout->addWidget(copier);

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

        horizontalLayout->addWidget(undo);

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

        horizontalLayout->addWidget(redo);

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

        horizontalLayout->addWidget(couper);

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

        horizontalLayout->addWidget(savefile);

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

        horizontalLayout->addWidget(newfile);

        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(50, 220, 281, 351));
        pushButton_plusMinus = new QPushButton(groupBox);
        pushButton_plusMinus->setObjectName(QStringLiteral("pushButton_plusMinus"));
        pushButton_plusMinus->setGeometry(QRect(80, 90, 41, 41));
        QFont font;
        font.setFamily(QStringLiteral("Segoe Print"));
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
        pushButton_6 = new QPushButton(groupBox);
        pushButton_6->setObjectName(QStringLiteral("pushButton_6"));
        pushButton_6->setGeometry(QRect(130, 190, 41, 41));
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
        pushButton_7 = new QPushButton(groupBox);
        pushButton_7->setObjectName(QStringLiteral("pushButton_7"));
        pushButton_7->setGeometry(QRect(30, 240, 41, 41));
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
        pushButton_equals = new QPushButton(groupBox);
        pushButton_equals->setObjectName(QStringLiteral("pushButton_equals"));
        pushButton_equals->setGeometry(QRect(190, 290, 41, 41));
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
        pushButton_0 = new QPushButton(groupBox);
        pushButton_0->setObjectName(QStringLiteral("pushButton_0"));
        pushButton_0->setGeometry(QRect(30, 290, 91, 41));
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
        pushButton_1 = new QPushButton(groupBox);
        pushButton_1->setObjectName(QStringLiteral("pushButton_1"));
        pushButton_1->setGeometry(QRect(30, 140, 41, 41));
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
        pushButton_2 = new QPushButton(groupBox);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(80, 140, 41, 41));
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
        pushButton_4 = new QPushButton(groupBox);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setGeometry(QRect(30, 190, 41, 41));
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
        mute_media = new QPushButton(groupBox);
        mute_media->setObjectName(QStringLiteral("mute_media"));
        mute_media->setGeometry(QRect(230, -90, 81, 31));
        QFont font1;
        font1.setFamily(QStringLiteral("Segoe Print"));
        font1.setPointSize(12);
        font1.setBold(false);
        font1.setWeight(50);
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
        pushButton_9 = new QPushButton(groupBox);
        pushButton_9->setObjectName(QStringLiteral("pushButton_9"));
        pushButton_9->setGeometry(QRect(130, 240, 41, 41));
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
        pushButton_multiply = new QPushButton(groupBox);
        pushButton_multiply->setObjectName(QStringLiteral("pushButton_multiply"));
        pushButton_multiply->setGeometry(QRect(190, 140, 41, 41));
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
        pushButton_8 = new QPushButton(groupBox);
        pushButton_8->setObjectName(QStringLiteral("pushButton_8"));
        pushButton_8->setGeometry(QRect(80, 240, 41, 41));
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
        pushButton_dot = new QPushButton(groupBox);
        pushButton_dot->setObjectName(QStringLiteral("pushButton_dot"));
        pushButton_dot->setGeometry(QRect(130, 290, 41, 41));
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
        pushButton_5 = new QPushButton(groupBox);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));
        pushButton_5->setGeometry(QRect(80, 190, 41, 41));
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
        pushButton_minus = new QPushButton(groupBox);
        pushButton_minus->setObjectName(QStringLiteral("pushButton_minus"));
        pushButton_minus->setGeometry(QRect(190, 190, 41, 41));
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
        pushButton_add = new QPushButton(groupBox);
        pushButton_add->setObjectName(QStringLiteral("pushButton_add"));
        pushButton_add->setGeometry(QRect(190, 240, 41, 41));
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
        pushButton_clear = new QPushButton(groupBox);
        pushButton_clear->setObjectName(QStringLiteral("pushButton_clear"));
        pushButton_clear->setGeometry(QRect(30, 90, 41, 41));
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
        pushButton_percent = new QPushButton(groupBox);
        pushButton_percent->setObjectName(QStringLiteral("pushButton_percent"));
        pushButton_percent->setGeometry(QRect(130, 90, 41, 41));
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
        pushButton_divide = new QPushButton(groupBox);
        pushButton_divide->setObjectName(QStringLiteral("pushButton_divide"));
        pushButton_divide->setGeometry(QRect(190, 90, 41, 41));
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
        pushButton_3 = new QPushButton(groupBox);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(130, 140, 41, 41));
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
        label_19 = new QLabel(groupBox);
        label_19->setObjectName(QStringLiteral("label_19"));
        label_19->setGeometry(QRect(30, 30, 191, 51));
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
        frame_2 = new QFrame(centralwidget);
        frame_2->setObjectName(QStringLiteral("frame_2"));
        frame_2->setGeometry(QRect(390, 219, 511, 41));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        verticalLayoutWidget = new QWidget(centralwidget);
        verticalLayoutWidget->setObjectName(QStringLiteral("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(140, 70, 391, 32));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        layoutWidget = new QWidget(centralwidget);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(150, 40, 391, 31));
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

        volume_media = new QSlider(centralwidget);
        volume_media->setObjectName(QStringLiteral("volume_media"));
        volume_media->setGeometry(QRect(250, 120, 291, 31));
        volume_media->setStyleSheet(QStringLiteral(""));
        volume_media->setOrientation(Qt::Horizontal);
        avancement_media = new QProgressBar(centralwidget);
        avancement_media->setObjectName(QStringLiteral("avancement_media"));
        avancement_media->setGeometry(QRect(150, 80, 389, 27));
        avancement_media->setFont(font);
        avancement_media->setValue(0);
        mute_media_2 = new QPushButton(centralwidget);
        mute_media_2->setObjectName(QStringLiteral("mute_media_2"));
        mute_media_2->setGeometry(QRect(100, 130, 75, 23));
        config->setCentralWidget(centralwidget);
        frame_2->raise();
        groupBox->raise();
        frame->raise();
        verticalLayoutWidget->raise();
        layoutWidget->raise();
        volume_media->raise();
        avancement_media->raise();
        mute_media_2->raise();
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
        imprimer->setText(QString());
        clear->setText(QString());
        openfile->setText(QString());
        coller->setText(QString());
        copier->setText(QString());
        undo->setText(QString());
        redo->setText(QString());
        couper->setText(QString());
        savefile->setText(QString());
        newfile->setText(QString());
        groupBox->setTitle(QApplication::translate("config", "Calcultarice", Q_NULLPTR));
        pushButton_plusMinus->setText(QApplication::translate("config", "+/-", Q_NULLPTR));
        pushButton_6->setText(QApplication::translate("config", "6", Q_NULLPTR));
        pushButton_7->setText(QApplication::translate("config", "7", Q_NULLPTR));
        pushButton_equals->setText(QApplication::translate("config", "=", Q_NULLPTR));
        pushButton_0->setText(QApplication::translate("config", "0", Q_NULLPTR));
        pushButton_1->setText(QApplication::translate("config", "1", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("config", "2", Q_NULLPTR));
        pushButton_4->setText(QApplication::translate("config", "4", Q_NULLPTR));
        mute_media->setText(QApplication::translate("config", "mute", Q_NULLPTR));
        pushButton_9->setText(QApplication::translate("config", "9", Q_NULLPTR));
        pushButton_multiply->setText(QApplication::translate("config", "x", Q_NULLPTR));
        pushButton_8->setText(QApplication::translate("config", "8", Q_NULLPTR));
        pushButton_dot->setText(QApplication::translate("config", ".", Q_NULLPTR));
        pushButton_5->setText(QApplication::translate("config", "5", Q_NULLPTR));
        pushButton_minus->setText(QApplication::translate("config", "-", Q_NULLPTR));
        pushButton_add->setText(QApplication::translate("config", "+", Q_NULLPTR));
        pushButton_clear->setText(QApplication::translate("config", "C", Q_NULLPTR));
        pushButton_percent->setText(QApplication::translate("config", "%", Q_NULLPTR));
        pushButton_divide->setText(QApplication::translate("config", "\303\267", Q_NULLPTR));
        pushButton_3->setText(QApplication::translate("config", "3", Q_NULLPTR));
        label_19->setText(QApplication::translate("config", "0", Q_NULLPTR));
        ouvrir_media->setText(QApplication::translate("config", "ouvrir", Q_NULLPTR));
        stop_media->setText(QApplication::translate("config", "stop", Q_NULLPTR));
        play_media->setText(QApplication::translate("config", "play", Q_NULLPTR));
        pause_media->setText(QApplication::translate("config", "pause", Q_NULLPTR));
        mute_media_2->setText(QApplication::translate("config", "mut", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class config: public Ui_config {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONFIG_H
