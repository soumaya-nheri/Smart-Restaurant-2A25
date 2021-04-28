#ifndef EVENEMENTINTER_H
#define EVENEMENTINTER_H
#include "evenement.h"

#include <QDialog>
#include <QSystemTrayIcon>

#include <QtPrintSupport/QPrintDialog>
#include <QPrinter>
#include <QPrintPreviewDialog>
#include "promointer.h"
namespace Ui {
class EvenementInter;
}

class EvenementInter : public QDialog
{
    Q_OBJECT

public:
    explicit EvenementInter(QWidget *parent = nullptr);
    ~EvenementInter();

private slots:
    void on_AjouterBouton_clicked();

    void on_SupprimerBouton_clicked();

    void on_comboBox_currentIndexChanged(const QString &arg1);

    void on_comboBox_modif_currentIndexChanged(const QString &arg1);

    void on_modifiebtn_clicked();

    void refresh();

    void on_PDF_clicked();

    void on_btnevent_clicked();

    void on_btnpromo_clicked();

private:
    Ui::EvenementInter *ui;
    Evenement tmpevent;

    QSqlTableModel * model;
    QSystemTrayIcon * trayIcon;

};

#endif // EVENEMENTINTER_H
