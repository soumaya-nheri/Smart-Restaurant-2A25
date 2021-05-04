/********************************************************************************
** Form generated from reading UI file 'seconddialog.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SECONDDIALOG_H
#define UI_SECONDDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <qcustomplot.h>

QT_BEGIN_NAMESPACE

class Ui_secondDialog
{
public:
    QPushButton *afficher;
    QCustomPlot *customPlot;
    QPushButton *pushButton;

    void setupUi(QDialog *secondDialog)
    {
        if (secondDialog->objectName().isEmpty())
            secondDialog->setObjectName(QStringLiteral("secondDialog"));
        secondDialog->resize(724, 418);
        afficher = new QPushButton(secondDialog);
        afficher->setObjectName(QStringLiteral("afficher"));
        afficher->setGeometry(QRect(600, 170, 101, 31));
        afficher->setStyleSheet(QLatin1String("border-width: 2px;\n"
"background-image:url(:/Desktop/multimedia/white.png);"));
        customPlot = new QCustomPlot(secondDialog);
        customPlot->setObjectName(QStringLiteral("customPlot"));
        customPlot->setGeometry(QRect(20, 60, 551, 271));
        customPlot->setStyleSheet(QStringLiteral(""));
        pushButton = new QPushButton(secondDialog);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(620, 230, 75, 23));

        retranslateUi(secondDialog);

        QMetaObject::connectSlotsByName(secondDialog);
    } // setupUi

    void retranslateUi(QDialog *secondDialog)
    {
        secondDialog->setWindowTitle(QApplication::translate("secondDialog", "Dialog", Q_NULLPTR));
        afficher->setText(QApplication::translate("secondDialog", "afficher", Q_NULLPTR));
        pushButton->setText(QApplication::translate("secondDialog", "PushButton", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class secondDialog: public Ui_secondDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SECONDDIALOG_H
