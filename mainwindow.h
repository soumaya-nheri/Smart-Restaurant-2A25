#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include <QMainWindow>
#include"ingredient.h"
#include"menu.h"
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
    void on_BA_clicked();

    void on_pushButton_clicked();

    void on_P_supprimer_clicked();

    void on_BAmenu_clicked();

    void on_P_supprimer_3_clicked();

    void on_modifmenub_clicked();

    void on_tab_menu_clicked(const QModelIndex &index);

    void on_trimenu_clicked();

    void on_trimenu_2_clicked();

    void on_cherchermenu_clicked();

    void on_pdf_3_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_2_clicked();

    void on_gestion1_clicked();

private:
    Ui::MainWindow *ui;
    Ingredient I;
    Menu M;
};

#endif // MAINWINDOW_H
