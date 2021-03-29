#include "promotionitinter.h"
#include "ui_produitinter.h"

promotioninter::promotioninter(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::produitinter)
{
    ui->setupUi(this);
    setWindowTitle("Gestion Promotion");
}

promotioninter::~promotioninter()
{
    delete ui;
}
