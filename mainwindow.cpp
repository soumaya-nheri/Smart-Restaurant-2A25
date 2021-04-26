#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <gestion_produit.h>

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
