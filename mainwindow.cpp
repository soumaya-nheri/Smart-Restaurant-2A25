#include "mainwindow.h"
#include "ui_mainwindow.h"
#include"ingredient.h"
#include<QString>
#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->lineEdit->setValidator(new QIntValidator(0, 9999999, this));
    ui->tab_ingredient->setModel(I.afficher());
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_BA_clicked()
{

    int id=ui->lineEdit->text().toInt();
    QString nom=ui->lineEdit_2->text();
     int quantite=ui->lineEdit_3->text().toInt();
     Ingredient I(id,nom,quantite);
     bool test=I.ajouter();
     if(test)
     {
         QMessageBox::information(nullptr, QObject::tr("ok"),
                     QObject::tr("ajout effectuer.\n"
                                 "Click Cancel to exit."), QMessageBox::Cancel);
         ui->tab_ingredient->setModel(I.afficher());


 }
     else
         QMessageBox::critical(nullptr, QObject::tr("not ok"),
                     QObject::tr("ajout non effectuer.\n"
                                 "Click Cancel to exit."), QMessageBox::Cancel);

}



void MainWindow::on_P_supprimer_clicked()
{
    Ingredient I1;
    I1.setid(ui->supp->text().toInt());
    bool test=I1.supprimer(I1.getid());
    if(test)
    {
        QMessageBox::information(nullptr, QObject::tr("ok"),
                    QObject::tr("suppression effectuer.\n"
                                "Click Cancel to exit."), QMessageBox::Cancel);
        ui->tab_ingredient->setModel(I.afficher());

}
    else
        QMessageBox::critical(nullptr, QObject::tr("not ok"),
                    QObject::tr("suppression non effectuer.\n"
                                "Click Cancel to exit."), QMessageBox::Cancel);
}





