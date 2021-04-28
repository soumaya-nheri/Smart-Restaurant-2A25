#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include <QMainWindow>
#include"Employe.h"
#include "profils.h"
#include <QtMultimedia/QSound>
#include<QMediaPlayer>
#include <QDebug>
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

    void on_comboBox_currentIndexChanged(const QString &arg1);

    void on_comboBox_currentTextChanged(const QString &arg1);

    void on_comboBox_activated(const QString &arg1);

    void on_b_supprimer_currentChanged(int index);

    void on_comboBox_activated(int index);

    void on_tri_emp_2_clicked();

    void on_pushButton_5_clicked();

    void on_tri_emp_3_clicked();

    void on_tri_emp_4_clicked();

    void on_chercher_clicked();

    void on_pb_login_clicked();

    void on_le_search_textChanged(const QString &arg1);

    void on_pb_ajout_clicked();

    void on_pb_supp_clicked();

    void on_pb_modif_clicked();

    void on_Iheb_clicked();

    void on_Barkia_clicked();

    void on_pb_logout_clicked();

    void on_stats_clicked_clicked();
    void on_radioButton_actualiser_clicked();
    void on_pdf_clicked();

    void on_muteSound_clicked();

    void on_actionSound_clicked();
    void on_pushButtonHisto_clicked();
  void ouvriremploye();
private:
    Ui::MainWindow *ui;
    Employe E;
    Profils P;
    QSound *sound;
     QMediaPlayer* player;

};

#endif // MAINWINDOW_H
