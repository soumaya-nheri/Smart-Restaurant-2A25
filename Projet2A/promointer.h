#ifndef PROMOINTER_H
#define PROMOINTER_H

#include <QDialog>
#include "promotion.h"

#include <QtPrintSupport/QPrintDialog>
#include <QPrinter>
#include <QPrintPreviewDialog>

namespace Ui {
class promointer;
}

class promointer : public QDialog
{
    Q_OBJECT

public:
    explicit promointer(QWidget *parent = nullptr);
    ~promointer();

    void refresh();

private slots:
    void on_AjouterBouton_clicked();

    void on_comboBox_modif_currentIndexChanged(const QString &arg1);

    void on_comboBox_supp_currentIndexChanged(const QString &arg1);

    void on_rechercheav_cursorPositionChanged(int arg1, int arg2);

    void on_Pourcentage_cursorPositionChanged();

    void on_pourcentagemodif_cursorPositionChanged(int arg1, int arg2);

    void on_comboBox_tri_currentIndexChanged(const QString &arg1);

    void on_tricombo_currentIndexChanged(const QString &arg1);

    void on_btn_modif_clicked();

    void on_SupprimerBouton_clicked();

    void on_PDF_clicked();

private:
    promotion tmppromo;
    Ui::promointer *ui;
};

#endif // PROMOINTER_H
