#include "login.h"
#include "ui_login.h"
#include "mainwindow.h"
#include<QMessageBox>
login::login(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::login)
{
    ui->setupUi(this);
}

login::~login()
{
    delete ui;
}


void login::on_pb_login_clicked()
{
    //player->setMedia(QUrl::fromLocalFile("C:/Users/user/Desktop/int/Smart-Restaurant-2A25/Click.mp3"));
      //player->play();
    QString login = ui->le_login->text();
    QString password = ui->le_password->text();
    if(P.login(login, password)) {
     //   musicAdd.setMedia(QUrl("C:/Users/user/Desktop/int/Smart-Restaurant-2A25/merci.mp3"));
                       // musicAdd.play();
       // ui->sw_main->setCurrentIndex(1);
        MainWindow *o=new MainWindow();
              o->show();
    }
    else {
        QMessageBox::critical(nullptr, QObject::tr("LOGIN FAILED"),
                    QObject::tr("Check your login and password!\n"), QMessageBox::Cancel);
    }
}
