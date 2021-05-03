#ifndef LOGIN_H
#define LOGIN_H
#include<QPropertyAnimation>
#include <QMainWindow>
#include"profils.h"
namespace Ui {
class login;
}

class login : public QMainWindow
{
    Q_OBJECT

public:
    explicit login(QWidget *parent = nullptr);
    ~login();

private slots:
    void on_pb_login_clicked();

private:
    Ui::login *ui;
     Profils P;
         QPropertyAnimation *animation;
};

#endif // LOGIN_H
