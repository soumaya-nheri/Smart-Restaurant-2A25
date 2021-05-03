#ifndef GESTION_LIVRAISON_H
#define GESTION_LIVRAISON_H
#include <QMainWindow>
#include"liv.h"
#include"livreur.h"
namespace Ui {
class gestion_livraison;
}

class gestion_livraison : public QMainWindow
{
    Q_OBJECT

public:
    explicit gestion_livraison(QWidget *parent = nullptr);
    ~gestion_livraison();
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


    void on_pdf_clicked();

    void on_Translate_clicked();

private:
    Ui::gestion_livraison *ui;
    Livreur l;
       Liv L;

};

#endif // GESTION_LIVRAISON_H
