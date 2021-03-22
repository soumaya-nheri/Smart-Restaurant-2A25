#ifndef PRODUITINTER_H
#define PRODUITINTER_H

#include <QDialog>

namespace Ui {
class produitinter;
}

class produitinter : public QDialog
{
    Q_OBJECT

public:
    explicit produitinter(QWidget *parent = nullptr);
    ~produitinter();

private:
    Ui::produitinter *ui;
};

#endif // PRODUITINTER_H
