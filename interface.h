#ifndef INTERFACE_H
#define INTERFACE_H

#include <QMainWindow>

namespace Ui {
class interface;
}

class interface : public QMainWindow
{
    Q_OBJECT

public:
    explicit interface(QWidget *parent = nullptr);
    ~interface();
    private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_5_clicked();

    void on_toolButton_clicked();

    void on_toolButton_2_clicked();

    void on_pushButton_7_clicked();
private:
    Ui::interface *ui;

};

#endif // INTERFACE_H
