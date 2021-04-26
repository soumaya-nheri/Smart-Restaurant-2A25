#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "evenementinter.h"
#include "promointer.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

