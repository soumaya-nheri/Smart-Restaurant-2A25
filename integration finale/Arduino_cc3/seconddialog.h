#ifndef SECONDDIALOG_H
#define SECONDDIALOG_H

#include <QDialog>

class QSqlTableModel;

namespace Ui {
class secondDialog;
}

class secondDialog : public QDialog
{
    Q_OBJECT

public:
    explicit secondDialog(QWidget *parent = nullptr);
    ~secondDialog();

private slots:

QVector<double> Statistique();
void makePlot ();

void on_pushButton_clicked();

void on_afficher_clicked();

private:
    Ui::secondDialog *ui;
};

#endif // SECONDDIALOG_H
