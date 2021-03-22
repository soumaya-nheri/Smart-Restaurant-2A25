#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "evenementinter.h"
#include "produitinter.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    setWindowTitle("Home");
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_clicked()
{
    EvenementInter ev;
    ev.setModal(true);
    ev.exec();

}

void MainWindow::on_pushButton_2_clicked()
{
    produitinter pr;
    pr.setModal(true);
    pr.exec();

}
