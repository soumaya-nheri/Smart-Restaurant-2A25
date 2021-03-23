#include "mainwindow.h"
#include "ui_mainwindow.h"
#include"Employe.h"
#include<QString>
#include <QMessageBox>
#include <QComboBox>
#include<QStringList>
#include<QDate>
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    ui->lineEdit->setValidator(new QIntValidator(0, 9999999, this));
    ui->tab_employe->setModel(E.afficher());
}

MainWindow::~MainWindow()
{
    delete ui;
}



void MainWindow::on_BA_clicked()
{

    int id=ui->lineEdit->text().toInt();
    QString nom=ui->lineEdit_3->text();
     double salaire=ui->lineEdit_4->text().toInt();
     QDate date=ui->date1->date();
       QString prenom=ui->linemarque->text();

     Employe E(id,nom,prenom,date,salaire);
     bool test=E.ajouter();
     if(test)
     {
         QMessageBox::information(nullptr, QObject::tr("ok"),
                     QObject::tr("ajout effectuer.\n"
                                 "Click Cancel to exit."), QMessageBox::Cancel);
         ui->tab_employe->setModel(E.afficher());
         ui->lineEdit->setText("");
          ui->lineEdit_3->setText("");
                ui->lineEdit_4->setText("");
                     ui->linemarque->setText("");
                ui->date1->setDate(QDate(2000,01,01));
         ui->comboBox->clear();
         ui->comboBox->addItems(E.liste());


 }
     else
         QMessageBox::critical(nullptr, QObject::tr("not ok"),
                     QObject::tr("ajout non effectuer.\n"
                                 "Click Cancel to exit."), QMessageBox::Cancel);

}

void MainWindow::on_b_supprimer_currentChanged(int index)
{

        ui->tab_employe->setModel(E.afficher());

        ui->comboBox->clear();
        ui->comboBox->addItems(E.liste());
}


void MainWindow::on_P_supprimer_clicked()
{
  Employe E1;
   E1.setid(ui->supp->text().toInt());
    bool test=E1.supprimer(E1.getid());
    if(test)
    {
        QMessageBox::information(nullptr, QObject::tr("ok"),
                    QObject::tr("suppression effectuer.\n"
                                "Click Cancel to exit."), QMessageBox::Cancel);
        ui->tab_employe->setModel(E.afficher());

}
    else
        QMessageBox::critical(nullptr, QObject::tr("not ok"),
                    QObject::tr("suppression non effectuer.\n"
                                "Click Cancel to exit."), QMessageBox::Cancel);
}




void MainWindow::on_comboBox_currentTextChanged(const QString &arg1)
{

//ui->label->setText(arg1);
        Employe e=E.recherche_Id(ui->comboBox->currentText().toInt());
        QString id= QString::number(e.getid());
        QString salaire= QString::number(e.getsalaire());

        ui->modif1->setText(id);
        ui->modif2->setText(e.getnom());
         ui->modif3->setText(e.getprenom());
          ui->modif4->setDate(e.getdate());




}








void MainWindow::on_pushButton_5_clicked()
{
   Employe E(ui->modif1->text().toInt(),ui->modif2->text(),ui->modif3->text(),ui->modif4->date(),ui->modif5->text().toDouble());
        bool test=E.modifier(ui->comboBox->currentText().toInt());
        if(test){
            QMessageBox::information(nullptr, QObject::tr("Employe"),
                        QObject::tr("employé modifié avec succés.\n"), QMessageBox::Cancel);
            ui->tab_employe->setModel(E.afficher());
            ui->modif1->setText("");
            ui->modif2->setText("");
            ui->modif3->setText("");
            ui->modif4->setDate(QDate(2000,01,01));
            ui->modif5->setText("");

          //  ui->id_employe_mod->setText("");
            ui->comboBox->clear();
            ui->comboBox->addItems(E.liste());

        }
        else{
            QMessageBox::critical(nullptr, QObject::tr("Employe"),
                        QObject::tr("Echec!\n"), QMessageBox::Cancel);
        }
}






void MainWindow::on_tri_emp_2_clicked()
{
        ui->tab_employe->setModel(E.trier1());
}



void MainWindow::on_tri_emp_3_clicked()
{
    ui->tab_employe->setModel(E.trier());
}

void MainWindow::on_tri_emp_4_clicked()
{
    ui->tab_employe->setModel(E.trier());
}

void MainWindow::on_chercher_clicked()
{

    QString nom =ui->linechercher1->text();

QString prenom =ui->linechercher3->text();







}

