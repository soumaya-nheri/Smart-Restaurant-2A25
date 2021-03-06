#ifndef GESTION_PRODUIT_H
#define GESTION_PRODUIT_H

#include <QDialog>
#include"ingredient.h"
#include"fournisseur.h"
#include"menu.h"

#include <QMediaPlayer>
#include <QSound>
namespace Ui {
class gestion_produit;
}

class gestion_produit : public QDialog
{
    Q_OBJECT

public:
    explicit gestion_produit(QWidget *parent = nullptr);
    ~gestion_produit();

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

    void on_pdf_clicked();

    void on_qr_clicked();

    void on_ajoutfournisseur_clicked();

    void on_tabfournisseur_currentChanged(int index);

    void on_comboBox2_activated(int index);

    void on_P_supprimer_2_clicked();

    void on_tri_emp_5_clicked();

    void on_chercher_2_clicked();

    void on_modiffour_clicked();

    void on_comboc1_currentTextChanged(const QString &arg1);

    void on_chercherfour_clicked();

    void on_trifour_clicked();

    void on_trifour_2_clicked();

    void on_trifour_3_clicked();

    void on_pdffour_clicked();

    void on_qr_2_clicked();

    void on_pushButton_2_clicked();

    void on_BAmenu_clicked();

    void on_P_supprimer_3_clicked();

    void on_modifmenub_clicked();

    void on_tab_menu_clicked(const QModelIndex &index);

    void on_trimenu_clicked();

    void on_trimenu_2_clicked();

    void on_cherchermenu_clicked();

    void on_mofidbo_clicked();

    void on_tab_ingredient_clicked(const QModelIndex &index);

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

    void on_gestion4_clicked();

    void on_gestion1_clicked();

    void on_gestion5_clicked();

    void on_lineEdit_2_cursorPositionChanged(int arg1, int arg2);

    void on_lineEdit_2_textChanged(const QString &arg1);

    void on_pdf_2_clicked();

    void on_lineEdit_5_textChanged(const QString &arg1);

    void on_btnmodif_clicked();




    void on_toolButton_clicked();

    void on_gestion2_clicked();

    void on_logout_button_clicked();

    void on_toolButton_7_clicked();






    void on_excel_clicked();

private:
    Ui::gestion_produit *ui;
    Ingredient I;
    Fournisseur F;
Menu M;

};

#endif // GESTION_PRODUIT_H
