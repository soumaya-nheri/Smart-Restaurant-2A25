#include "mainwindow.h"
#include "ui_mainwindow.h"
#include"depense.h"
#include"revenue.h"
#include<QString>
#include <QMessageBox>
#include <QComboBox>
#include<QStringList>
#include<QDate>
#include <notif.h>
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    ui->lineEdit_iddepense->setValidator(new QIntValidator(0, 9999999, this));
    ui->tab_employe->setModel(D.afficher());
    ui->tab_employe_2->setModel(R.afficher());
}

MainWindow::~MainWindow()
{
    delete ui;
}



void MainWindow::on_BA_clicked()
{

    int id_depense=ui->lineEdit_iddepense->text().toInt();
     int salaire=ui->lineEdit_salaire->text().toInt();
     QDate date_depense=ui->DateEdit_depense->date();
     int id_produit=ui->lineEdit_idproduit->text().toInt();


     depense D(id_depense,salaire,date_depense,id_produit);
     bool test=D.ajouter();
     if(test)
     {
         QMessageBox::information(nullptr, QObject::tr("ok"),
                     QObject::tr("ajout effectuer.\n"
                                 "Click Cancel to exit."), QMessageBox::Cancel);
         ui->tab_employe->setModel(D.afficher());
         ui->lineEdit_iddepense->setText("");
         ui->lineEdit_salaire->setText("");
         ui->DateEdit_depense->setDate(QDate(2000,01,01));
          ui->lineEdit_idproduit->setText("");
         ui->comboBox->clear();
         ui->comboBox->addItems(D.liste());


         //notification
       notif n ("Ajout avec succés","This account exist now");
       n.afficher();



 }

     else
         QMessageBox::critical(nullptr, QObject::tr("not ok"),
                     QObject::tr("ajout non effectuer.\n"
                                 "Click Cancel to exit."), QMessageBox::Cancel);



}

void MainWindow::on_b_supprimer_currentChanged(int index)
{

        ui->tab_employe->setModel(D.afficher());

        ui->comboBox->clear();
        ui->comboBox->addItems(D.liste());
}


void MainWindow::on_P_supprimer_clicked()
{
  depense D1;
   D1.setid_depense(ui->supp->text().toInt());
    bool test=D1.supprimer(D1.getid_depense());
    if(test)
    {
        QMessageBox::information(nullptr, QObject::tr("ok"),
                    QObject::tr("suppression effectuer.\n"
                                "Click Cancel to exit."), QMessageBox::Cancel);
        ui->tab_employe->setModel(D.afficher());

}
    else
        QMessageBox::critical(nullptr, QObject::tr("not ok"),
                    QObject::tr("suppression non effectuer.\n"
                                "Click Cancel to exit."), QMessageBox::Cancel);
}




void MainWindow::on_comboBox_currentTextChanged(const QString &arg1)
{

//ui->label->setText(arg1);
        depense d=D.recherche_Id(ui->comboBox->currentText().toInt());
        QString id_depense= QString::number(d.getid_depense());
        QString salaire= QString::number(d.getsalaire());
        QString id_produit= QString::number(d.getid_produit());

        ui->modif1->setText(id_depense);

        ui->modif2->setText(salaire);
         ui->modif4->setDate(d.getdate_depense());
         ui->modif5->setText(id_produit);


}






void MainWindow::on_pushButton_5_clicked()
{
   depense D(ui->modif1->text().toInt(),ui->modif2->text().toInt(),ui->modif4->date(),ui->modif5->text().toInt());
        bool test=D.modifier(ui->comboBox->currentText().toInt());
        if(test){
            QMessageBox::information(nullptr, QObject::tr("depense"),
                        QObject::tr("depense modifié avec succés.\n"), QMessageBox::Cancel);
            ui->tab_employe->setModel(D.afficher());
            ui->modif1->setText("");
            ui->modif2->setText("");
            ui->modif4->setDate(QDate(2000,01,01));
            ui->modif5->setText("");

          //  ui->id_employe_mod->setText("");
            ui->comboBox->clear();
            ui->comboBox->addItems(D.liste());

        }
        else{
            QMessageBox::critical(nullptr, QObject::tr("depense"),
                        QObject::tr("Echec!\n"), QMessageBox::Cancel);
        }
}






void MainWindow::on_tri_emp_2_clicked()
{
        ui->tab_employe->setModel(D.trier1());
}



void MainWindow::on_tri_emp_3_clicked()
{
    ui->tab_employe->setModel(D.trier());
}

void MainWindow::on_tri_emp_4_clicked()
{
    ui->tab_employe->setModel(D.trier());
}


/*
void MainWindow::on_chercher_clicked()
{
    QString id_depense =ui->linechercher1->text().toInt();


ui->tabchercher->setModel(D.chercher_depense_par_id( id_depense));


}
*/


void MainWindow::on_pushButton_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);
}

void MainWindow::on_pushButton_4_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
}








void MainWindow::on_BA_2_clicked()
{

    int id_revenue=ui->lineEdit_idrevenue->text().toInt();
     QDate date_revenue=ui->DateEdit_revenue->date();
     int montant=ui->lineEdit_montant->text().toInt();


     revenue R(id_revenue,date_revenue,montant);
     bool test=R.ajouter();
     if(test)
     {
         QMessageBox::information(nullptr, QObject::tr("ok"),
                     QObject::tr("ajout effectuer.\n"
                                 "Click Cancel to exit."), QMessageBox::Cancel);
         ui->tab_employe_2->setModel(R.afficher());
         ui->lineEdit_idrevenue->setText("");
         ui->DateEdit_revenue->setDate(QDate(2000,01,01));
          ui->lineEdit_montant->setText("");
         ui->comboBox_2->clear();
         ui->comboBox_2->addItems(R.liste());


 }
     else
         QMessageBox::critical(nullptr, QObject::tr("not ok"),
                     QObject::tr("ajout non effectuer.\n"
                                 "Click Cancel to exit."), QMessageBox::Cancel);

}

void MainWindow::on_b_supprimer_2_currentChanged(int index2)
{

        ui->tab_employe_2->setModel(R.afficher());

        ui->comboBox_2->clear();
        ui->comboBox_2->addItems(R.liste());
}


void MainWindow::on_P_supprimer_2_clicked()
{
  revenue R1;
   R1.setid_revenue(ui->supp_2->text().toInt());
    bool test=R1.supprimer(R1.getid_revenue());
    if(test)
    {
        QMessageBox::information(nullptr, QObject::tr("ok"),
                    QObject::tr("suppression effectuer.\n"
                                "Click Cancel to exit."), QMessageBox::Cancel);
        ui->tab_employe_2->setModel(R.afficher());

}
    else
        QMessageBox::critical(nullptr, QObject::tr("not ok"),
                    QObject::tr("suppression non effectuer.\n"
                                "Click Cancel to exit."), QMessageBox::Cancel);
}




void MainWindow::on_comboBox_currentTextChanged_2(const QString &arg2)
{

//ui->label->setText(arg1);
        revenue r=R.recherche_Id(ui->comboBox_2->currentText().toInt());
        QString id_revenue= QString::number(r.getid_revenue());
        QString montant= QString::number(r.getmontant());


        ui->modif1_r->setText(id_revenue);
         ui->modif4_r->setDate(r.getdate_revenue());
         ui->modif5_r->setText(montant);


}






void MainWindow::on_pushButton_6_clicked()
{
   revenue R(ui->modif1_r->text().toInt(),ui->modif4_r->date(),ui->modif5_r->text().toInt());
        bool test=R.modifier(ui->comboBox_2->currentText().toInt());
        if(test){
            QMessageBox::information(nullptr, QObject::tr("revenue"),
                        QObject::tr("revenue modifié avec succés.\n"), QMessageBox::Cancel);
            ui->tab_employe_2->setModel(R.afficher());
            ui->modif1_r->setText("");
            ui->modif4_r->setDate(QDate(2000,01,01));
            ui->modif5_r->setText("");


            ui->comboBox_2->clear();
            ui->comboBox_2->addItems(R.liste());

        }
        else{
            QMessageBox::critical(nullptr, QObject::tr("revenue"),
                        QObject::tr("Echec!\n"), QMessageBox::Cancel);
        }
}



void MainWindow::on_linechercher1_3_cursorPositionChanged(int arg1, int arg2)
{
    revenue R;
        ui->tab_employe_2->setModel(R.afficherecherche(ui->linechercher1_3->text()));

            QString test =ui->linechercher1_3->text();

            if(test=="")
            {
                ui->tab_employe_2->setModel(R.afficher());//refresh
            }
}

void MainWindow::on_linechercher1_cursorPositionChanged(int arg1, int arg2)
{
    depense D;
        ui->tab_employe->setModel(D.afficherechercheD(ui->linechercher1->text()));

            QString test =ui->linechercher1->text();

            if(test=="")
            {
                ui->tab_employe->setModel(D.afficher());//refresh
            }

}


