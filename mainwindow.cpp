#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QFileDialog>
#include <QProgressBar>
#include <QSlider>
#include <gestion_produit.h>
#include <mainwindowvideo.h>
#include<QVideoWidget>
#include<QStatusBar>
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

/*void MainWindow::on_actionopen_triggered()
{

}

void MainWindow::on_actionPlay_triggered()
{

}

void MainWindow::on_actionPause_triggered()
{

}

void MainWindow::on_actionStop_triggered()
{
}
*/

void MainWindow::on_toolButton_clicked()
{
   MainWindowvideo *v=new MainWindowvideo();
          v->show();
}
