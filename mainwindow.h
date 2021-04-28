#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include <QMainWindow>
#include"Depense.h"
#include "revenue.h"

#include <QDialog>
#include <QSystemTrayIcon>



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

    void on_P_supprimer_clicked();

    void on_comboBox_currentTextChanged(const QString &arg1);

    void on_b_supprimer_currentChanged(int index);

    void on_tri_emp_2_clicked();

    void on_pushButton_5_clicked();

    void on_tri_emp_3_clicked();

    void on_tri_emp_4_clicked();

  //  void on_chercher_clicked();

    void on_pushButton_clicked();

    void on_pushButton_4_clicked();





    void on_BA_2_clicked();

    void on_P_supprimer_2_clicked();

    void on_comboBox_currentTextChanged_2(const QString &arg2);

    void on_b_supprimer_2_currentChanged(int index2);

    void on_pushButton_6_clicked();

  //  void on_chercher_clicked();



    void on_linechercher1_3_cursorPositionChanged(int arg1, int arg2);

    void on_linechercher1_cursorPositionChanged(int arg1, int arg2);



private:
    Ui::MainWindow *ui;
    depense D;
    revenue R;
};

#endif // MAINWINDOW_H
