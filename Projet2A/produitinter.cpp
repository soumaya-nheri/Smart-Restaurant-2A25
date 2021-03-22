#include "produitinter.h"
#include "ui_produitinter.h"

produitinter::produitinter(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::produitinter)
{
    ui->setupUi(this);
    setWindowTitle("Gestion Produits");
}

produitinter::~produitinter()
{
    delete ui;
}
