#ifndef GESTION_REVENUE_H
#define GESTION_REVENUE_H
#include"Depense.h"
#include "revenue.h"

#include <QDialog>
#include <QSystemTrayIcon>

#include <QMainWindow>

namespace Ui {
class gestion_revenue;
}

class gestion_revenue : public QMainWindow
{
    Q_OBJECT

public:
    explicit gestion_revenue(QWidget *parent = nullptr);
    ~gestion_revenue();
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
    Ui::gestion_revenue *ui;
    depense D;
    revenue R;
};

#endif // GESTION_REVENUE_H
