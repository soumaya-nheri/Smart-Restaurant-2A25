#include "mainwindow.h"
#include "ui_mainwindow.h"
#include"Employe.h"
#include<QString>
#include <QMessageBox>
#include <QComboBox>
#include<QStringList>
#include<QDate>
#include "src/SmtpMime"
#include "notif.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    ui->lineEdit->setValidator(new QIntValidator(0, 9999999, this));
    ui->tab_employe->setModel(E.afficher());
    ui->sw_main->setCurrentIndex(0);
    ui->tv_profile->setModel(P.afficher());
    P.fillComboE(ui->cb_emp);
    P.fillComboE(ui->cb_emp_2);
    P.fillComboP(ui->cb_login_modif);
    P.fillComboP(ui->cb_login_supp);

}

MainWindow::~MainWindow()
{
    delete ui;
}



void MainWindow::on_BA_clicked()
{

    int id=ui->lineEdit->text().toInt();
    QString nom=ui->lineEdit_3->text();
     double salaire=ui->lineEdit_4->text().toInt();
     QDate date=ui->date1->date();
       QString prenom=ui->linemarque->text();

     Employe E(id,nom,prenom,date,salaire);
     bool test=E.ajouter();
     if(test)
     {
         P.fillComboE(ui->cb_emp);
         P.fillComboE(ui->cb_emp_2);
        /*QMessageBox::information(nullptr, QObject::tr("ok"),
                     QObject::tr("ajout effectuer.\n"
                                 "Click Cancel to exit."), QMessageBox::Cancel)*/;
         notif n("Error","This Account is Already Exist ");
                                  n.afficher();
         ui->tab_employe->setModel(E.afficher());
         ui->lineEdit->setText("");
          ui->lineEdit_3->setText("");
                ui->lineEdit_4->setText("");
                     ui->linemarque->setText("");
                ui->date1->setDate(QDate(2000,01,01));
         ui->comboBox->clear();
         ui->comboBox->addItems(E.liste());

//*********************************** mail ************************************************************************

         SmtpClient smtp("smtp.gmail.com", 465, SmtpClient::SslConnection);

         smtp.setUser("sahnoun.yosr@esprit.tn");
         smtp.setPassword("souheila");

         MimeMessage message;

         EmailAddress sender("sahnoun.yosr@esprit.tn", "yosr");
         message.setSender(&sender);

         EmailAddress to("sahnoun.yosr@esprit.tn", "yosr");
         message.addRecipient(&to);

         message.setSubject(" employe ajoute ");

         MimeText text;
         text.setText("employe "+E.getnom()+" "+E.getprenom()+" "+E.getdate().toString());

         message.addPart(&text);

             if (!smtp.connectToHost()) {
                 qDebug() << "Failed to connect to host!" << endl;
             }

             if (!smtp.login()) {
                 qDebug() << "Failed to login!" << endl;
             }

             if (!smtp.sendMail(message)) {
                 qDebug() << "Failed to send mail!" << endl;
             }

         smtp.quit();

//**********************************************************************************************************

 }
     else
         QMessageBox::critical(nullptr, QObject::tr("not ok"),
                     QObject::tr("ajout non effectuer.\n"
                                 "Click Cancel to exit."), QMessageBox::Cancel);

}

void MainWindow::on_b_supprimer_currentChanged(int index)
{

        ui->tab_employe->setModel(E.afficher());

        ui->comboBox->clear();
        ui->comboBox->addItems(E.liste());
        P.fillComboE(ui->cb_emp);
        P.fillComboE(ui->cb_emp_2);
}


void MainWindow::on_P_supprimer_clicked()
{
  Employe E1;
   E1.setid(ui->supp->text().toInt());
    bool test=E1.supprimer(E1.getid());
    if(test)
    {
        QMessageBox::information(nullptr, QObject::tr("ok"),
                    QObject::tr("suppression effectuer.\n"
                                "Click Cancel to exit."), QMessageBox::Cancel);
        ui->tab_employe->setModel(E.afficher());
        P.fillComboE(ui->cb_emp);
        P.fillComboE(ui->cb_emp_2);

}
    else
        QMessageBox::critical(nullptr, QObject::tr("not ok"),
                    QObject::tr("suppression non effectuer.\n"
                                "Click Cancel to exit."), QMessageBox::Cancel);
}




void MainWindow::on_comboBox_currentTextChanged(const QString &arg1)
{

//ui->label->setText(arg1);
        Employe e=E.recherche_Id(ui->comboBox->currentText().toInt());
        QString id= QString::number(e.getid());
        QString salaire= QString::number(e.getsalaire());

        ui->modif1->setText(id);
        ui->modif2->setText(e.getnom());
         ui->modif3->setText(e.getprenom());
          ui->modif4->setDate(e.getdate());





}








void MainWindow::on_pushButton_5_clicked()
{
   Employe E(ui->modif1->text().toInt(),ui->modif2->text(),ui->modif3->text(),ui->modif4->date(),ui->modif5->text().toDouble());
        bool test=E.modifier(ui->comboBox->currentText().toInt());
        if(test){
            QMessageBox::information(nullptr, QObject::tr("Employe"),
                        QObject::tr("employé modifié avec succés.\n"), QMessageBox::Cancel);
            ui->tab_employe->setModel(E.afficher());
            ui->modif1->setText("");
            ui->modif2->setText("");
            ui->modif3->setText("");
            ui->modif4->setDate(QDate(2000,01,01));
            ui->modif5->setText("");

          //  ui->id_employe_mod->setText("");
            ui->comboBox->clear();
            ui->comboBox->addItems(E.liste());

        }
        else{
            QMessageBox::critical(nullptr, QObject::tr("Employe"),
                        QObject::tr("Echec!\n"), QMessageBox::Cancel);
        }
}






void MainWindow::on_tri_emp_2_clicked()
{
        ui->tab_employe->setModel(E.trier1());
}



void MainWindow::on_tri_emp_3_clicked()
{
    ui->tab_employe->setModel(E.trier());
}

void MainWindow::on_tri_emp_4_clicked()
{
    ui->tab_employe->setModel(E.trier());
}

void MainWindow::on_chercher_clicked()
{

    QString nom =ui->linechercher1->text();

QString prenom =ui->linechercher2->text();

ui->tabchercher->setModel(E.chercher_emp_avancee(nom,prenom));

}


void MainWindow::on_pb_login_clicked()
{
    QString login = ui->le_login->text();
    QString password = ui->le_password->text();
    if(P.login(login, password)) {
        ui->sw_main->setCurrentIndex(1);
    }
    else {
        QMessageBox::critical(nullptr, QObject::tr("LOGIN FAILED"),
                    QObject::tr("Check your login and password!\n"), QMessageBox::Cancel);
    }
}

void MainWindow::on_le_search_textChanged(const QString &arg1)
{
    ui->tab_employe->setModel(E.search(arg1));
}

void MainWindow::on_pb_ajout_clicked()
{
    Profils p(ui->le_login_->text(), ui->le_password_->text(), ui->cb_emp->currentText().toInt());
    if(p.ajouter()) {
        ui->tv_profile->setModel(P.afficher());
        P.fillComboP(ui->cb_login_modif);
        P.fillComboP(ui->cb_login_supp);
        QMessageBox::information(nullptr, QObject::tr("profile ajouter"),
                    QObject::tr("profile ajouter!\n"), QMessageBox::Cancel);
    }
}

void MainWindow::on_pb_supp_clicked()
{
    Profils p(ui->cb_login_supp->currentText(), "", 0);
    if(p.supprimer(0)) {
        ui->tv_profile->setModel(P.afficher());
        P.fillComboP(ui->cb_login_modif);
        P.fillComboP(ui->cb_login_supp);
        QMessageBox::information(nullptr, QObject::tr("profile supprimer"),
                    QObject::tr("profile supprimer!\n"), QMessageBox::Cancel);
    }
}

void MainWindow::on_pb_modif_clicked()
{
    Profils p(ui->cb_login_modif->currentText(), ui->le_password_1->text(), ui->cb_emp_2->currentText().toInt());
    if(p.modifier(0)) {
        ui->tv_profile->setModel(P.afficher());
        QMessageBox::information(nullptr, QObject::tr("profile supprimer"),
                    QObject::tr("profile supprimer!\n"), QMessageBox::Cancel);
    }
}

void MainWindow::on_Iheb_clicked()
{
    ui->st_menu->setCurrentIndex(0);
}

void MainWindow::on_Barkia_clicked()
{
    ui->st_menu->setCurrentIndex(1);
}

void MainWindow::on_pb_logout_clicked()
{
    ui->sw_main->setCurrentIndex(0);
}
