#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <gestion_produit.h>
#include <gestion_client.h>
#include <gestion_employe.h>
#include<gestion_livraison.h>
#include<gestion_revenue.h>
#include<config.h>
#include<video.h>
#include<QMediaPlayer>
#include<QVideoWidget>
#include<QFileDialog>
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
   ;


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

void MainWindow::on_pushButton_4_clicked()
{
gestion_livraison *k=new gestion_livraison();
k->show();
}

void MainWindow::on_pushButton_5_clicked()
{
    gestion_revenue *i=new gestion_revenue();
        i->show();
}

void MainWindow::on_toolButton_clicked()
{
    config *o=new config();
           o->show();
}

void MainWindow::on_toolButton_2_clicked()
{
    QMediaPlayer*  player = new QMediaPlayer;
    QVideoWidget*  vw=new QVideoWidget;
    player->setVideoOutput(vw) ;
      player->setMedia(QUrl::fromLocalFile("C:/Users/Anass/Documents/testvideol5er/Project Name.mp4"));
    vw->setGeometry(100,200,300,400);
    vw->show();
    player->play();
}

void MainWindow::on_pushButton_7_clicked()
{
    gestion_produit *f=new gestion_produit();
          f->show();
}
