#ifndef GESTION_CLIENT_H
#define GESTION_CLIENT_H
#include <QMainWindow>
#include"ingredient.h"
#include"client.h"
#include"reservation.h"
#include"Commande.h"
namespace Ui {
class gestion_client;
}

class gestion_client: public QMainWindow
{
    Q_OBJECT

public:
    explicit gestion_client(QWidget *parent = nullptr);
    ~gestion_client();

private slots:


    void on_BAmenu_clicked();

    void on_P_supprimer_3_clicked();

    void on_modifmenub_clicked();

    void on_tab_menu_clicked(const QModelIndex &index);

    void on_trimenu_clicked();

    void on_trimenu_2_clicked();

    void on_cherchermenu_clicked();

    void on_BAmenu_2_clicked();

    void on_P_supprimer_4_clicked();

    void on_modifmenub_2_clicked();

    void on_tab_menu_2_clicked(const QModelIndex &index);

    void on_trimenu_4_clicked();

    void on_trimenu_5_clicked();

    void on_cherchermenu_2_clicked();

    void on_BAmenu_3_clicked();

    void on_BAmenu_4_clicked();

    void on_BAmenu_6_clicked();

    void on_BAmenu_5_clicked();

    void on_trimenu_3_clicked();

    void on_pdf_2_clicked();

    void on_pdf_3_clicked();

    void on_BAmenu_13_clicked();

    void on_P_supprimer_7_clicked();

    void on_modifmenub_5_clicked();

    void on_tab_menu_5_activated(const QModelIndex &index);

    void on_BAmenu_14_clicked();

    void on_BAmenu_15_clicked();

    void on_cherchermenu_5_clicked();

    void on_trimenu_11_clicked();

    void on_trimenu_12_clicked();

    void on_pdf_6_clicked();

private:
    Ui::gestion_client *ui;
    Ingredient I;
    Client M;
    Reservation R;
    Commande C;
};
#endif // GESTION_CLIENT_H
