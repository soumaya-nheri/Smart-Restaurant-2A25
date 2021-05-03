#include "interface.h"
#include "ui_interface.h"

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
interface::interface(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::interface)
{
    ui->setupUi(this);
}

interface::~interface()
{
    delete ui;
}

void  interface::on_pushButton_clicked()
{// QApplication::quit();
   ;


}

void  interface::on_pushButton_2_clicked()
{
    gestion_client *c=new gestion_client();
          c->show();
}

void  interface::on_pushButton_3_clicked()
{
   gestion_employe *e= new gestion_employe(this);
              e->show();
}

void  interface::on_pushButton_4_clicked()
{
gestion_livraison *k=new gestion_livraison();
k->show();
}

void  interface::on_pushButton_5_clicked()
{
    gestion_revenue *i=new gestion_revenue();
        i->show();
}

void  interface::on_toolButton_clicked()
{
    config *o=new config();
           o->show();
}

void  interface::on_toolButton_2_clicked()
{
    QMediaPlayer*  player = new QMediaPlayer;
    QVideoWidget*  vw=new QVideoWidget;
    player->setVideoOutput(vw) ;
      player->setMedia(QUrl::fromLocalFile("C:/Users/Anass/Documents/testvideol5er/Project Name.mp4"));
    vw->setGeometry(100,200,300,400);
    vw->show();
    player->play();
}

void interface::on_pushButton_7_clicked()
{
    gestion_produit *f=new gestion_produit();
          f->show();
}
