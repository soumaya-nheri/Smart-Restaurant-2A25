#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include <QMainWindow>
#include"ingredient.h"
#include"client.h"
#include"reservation.h"
namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

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

private:
    Ui::MainWindow *ui;
    Ingredient I;
    Client M;
    Reservation R;

};

#endif // MAINWINDOW_H
