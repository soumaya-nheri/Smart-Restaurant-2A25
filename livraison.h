#ifndef LIVRAISON_H
#define LIVRAISON_H

#include <QMainWindow>
#include"liv.h"
#include"livreur.h"
namespace Ui {
class livraison;
}

class livraison : public QMainWindow
{
    Q_OBJECT

public:
    explicit livraison(QWidget *parent = nullptr);
    ~livraison();
private slots:
    void on_pb_livreur_clicked();

    void on_pushButton_2_clicked();

    void on_pb_ajouter_livreur_clicked();

    void on_pb_modifer_livreur_clicked();

    void on_pb_supp_livreur_clicked();

    void refrech();

    void on_le_search_livreur_textChanged(const QString &arg1);

    void on_cb_sort_livreur_currentTextChanged(const QString &arg1);

    void on_pb_liv_ajout_clicked();

    void on_pb_liv_modif_clicked();

    void on_pb_supp_liv_clicked();

    void on_le_search_liv_textChanged(const QString &arg1);

    void on_cb_sort_liv_currentTextChanged(const QString &arg1);

    void on_buttonHis_clicked();
    void ouvrirlivraison();

private:
    Ui::livraison *ui;
    Livreur l;
       Liv L;
};

#endif // LIVRAISON_H
