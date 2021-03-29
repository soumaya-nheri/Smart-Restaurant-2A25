#ifndef PRODUITINTER_H
#define PRODUITINTER_H

#include <QDialog>

namespace Ui {
class promotioninter;
}

class promotioninter : public QDialog
{
    Q_OBJECT

public:
    explicit promotioninter(QWidget *parent = nullptr);
    ~promotioninter();

private:
    Ui::promotioninter *ui;
};

#endif // PRODUITINTER_H
