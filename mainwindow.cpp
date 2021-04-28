#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <gestion_produit.h>
#include <gestion_client.h>
#include <gestion_employe.h>
#include <evenementinter.h>
#include <livraison.h>
#include <gestion_revenue.h>
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);


 }


MainWindow::~MainWindow()
{
    delete ui;
}








void MainWindow::on_pushButton_clicked()
{// QApplication::quit();
    gestion_produit *f=new gestion_produit();
          f->show();


}

void MainWindow::on_pushButton_2_clicked()
{
    gestion_client *c=new gestion_client();
          c->show();
}

void MainWindow::on_pushButton_3_clicked()
{
    gestionemploye = new gestion_employe(this);
              gestionemploye->show();
}

void MainWindow::on_Gestion_event_clicked()
{
    EvenementInter *e = new EvenementInter();
              e->show();
}


void MainWindow::on_pushButton_4_clicked()
{
 livraison *l=new livraison();
 l->show();
}


