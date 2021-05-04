#include "gestion_client.h"
#include "ui_gestion_client.h"
#include"client.h"
#include"reservation.h"

#include"notif.h"
#include<QString>
#include <QMessageBox>
#include <QDate>
#include <QSqlQuery>
#include <QPrintDialog>
#include <QTextStream>
#include <QPrinter>
#include<QtDebug>
#include <QTextDocument>
#include "arduino.h"
bool user_is_typing_secondNumber=false;
double firstNum;


gestion_client::gestion_client(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::gestion_client)
{
    ui->setupUi(this);
     ui->tab_menu_2->setModel(R.afficherreservation());
      ui->tab_menu->setModel(M.afficherclient());
       ui->tab_menu_5->setModel(C.affichercommande());
       int ret=A.connect_arduino();
                   switch (ret)
                   {
                   case(0): qDebug() << "arduino is available and connected to :" <<A.getarduino_port_name();


                   break ;
                   case(1): qDebug() << "arduino is available and not connected to :" <<A.getarduino_port_name();


                   break ;
                   case(-1): qDebug() << "arduino is not available";

                       }
                   QObject::connect(A.getserial(),SIGNAL(readyRead()),this,SLOT(update_label()));

                   connect(ui->pushButton_1,SIGNAL(released()),this,SLOT(digit_pressed()));
                   connect(ui->pushButton_2,SIGNAL(released()),this,SLOT(digit_pressed()));
                   connect(ui->pushButton_3,SIGNAL(released()),this,SLOT(digit_pressed()));
                   connect(ui->pushButton_4,SIGNAL(released()),this,SLOT(digit_pressed()));
                   connect(ui->pushButton_5,SIGNAL(released()),this,SLOT(digit_pressed()));
                   connect(ui->pushButton_6,SIGNAL(released()),this,SLOT(digit_pressed()));
                   connect(ui->pushButton_7,SIGNAL(released()),this,SLOT(digit_pressed()));
                   connect(ui->pushButton_8,SIGNAL(released()),this,SLOT(digit_pressed()));
                   connect(ui->pushButton_9,SIGNAL(released()),this,SLOT(digit_pressed()));



                   connect(ui->pushButton_multiply,SIGNAL(released()),this,SLOT(binary_operation_pressed()));
                   connect(ui->pushButton_add,SIGNAL(released()),this,SLOT(binary_operation_pressed()));



                   ui->pushButton_add->setCheckable(true);
                   ui->pushButton_multiply->setCheckable(true);


}

gestion_client::~gestion_client()
{
    delete ui;
}






void gestion_client::on_BAmenu_clicked()
{
    int id=ui->linemenu1->text().toInt();
    QString nom=ui->linemenu2->text();
     QString prenom=ui->linemenu3->text();
       QString adresse=ui->linemenu4->text();
        int num=ui->linemenu5->text().toInt();

     Client M( id, nom, prenom, adresse,  num);
     bool test= M.ajouterclient();
     if(test)
     {
         QMessageBox::information(nullptr, QObject::tr("ok"),
                     QObject::tr("ajout effectuer.\n"
                                 "Click Cancel to exit."), QMessageBox::Cancel);

         ui->tab_menu->setModel(M.afficherclient());
         ui->linemenu1->setText("");
          ui->linemenu2->setText("");
                ui->linemenu3->setText("");
                     ui->linemenu4->setText("");
                 ui->linemenu5->setText("");

      }
     else {
     notif n("Erreur","Ce client existe déja ");
     n.afficher();}
}

void gestion_client::on_P_supprimer_3_clicked()
{

    Client M1;
    M1.setid(ui->supp_3->text().toInt());
    bool test=M1.supprimerclient(M1.getid());
    if(test)
    {
        QMessageBox::information(nullptr, QObject::tr("ok"),
                    QObject::tr("suppression effectuer.\n"
                                "Click Cancel to exit."), QMessageBox::Cancel);
        ui->tab_menu->setModel(M.afficherclient());

}
    else
        QMessageBox::critical(nullptr, QObject::tr("not ok"),
                    QObject::tr("suppression non effectuer.\n"
                                "Click Cancel to exit."), QMessageBox::Cancel);
}

void gestion_client::on_modifmenub_clicked()
{
    int id=ui->modifmenu->text().toInt();
    QString nom=ui->modifmenu2->text();
    QString prenom=ui->modifmenu3->text();
    QString adresse=ui->modifmenu4->text();
    int num=ui->modifmenu5->text().toInt();

                  Client M(id, nom,prenom, adresse,  num);

         bool test = M.modifierclient( id, nom,prenom, adresse,  num);


         if(test)

         {
              ui->tab_menu->setModel(M.afficherclient());
             QMessageBox::information(nullptr, QObject::tr("update "),
                         QObject::tr("menu modifie\n"
         "Click Cancel to exit."), QMessageBox::Cancel);}
         else
             QMessageBox::critical(nullptr, QObject::tr("update "),
                         QObject::tr("menu non modifie\n"
         "Click Cancel to exit."), QMessageBox::Cancel);
}

void gestion_client::on_tab_menu_clicked(const QModelIndex &index)
{
 ui->modifmenu->setText( ui->tab_menu->model()->data(ui->tab_menu->model()->index(ui->tab_menu->selectionModel()->currentIndex().row(),0)).toString() );
   ui->modifmenu2->setText( ui->tab_menu->model()->data(ui->tab_menu->model()->index(ui->tab_menu->selectionModel()->currentIndex().row(),1)).toString() );
 ui->modifmenu3->setText( ui->tab_menu->model()->data(ui->tab_menu->model()->index(ui->tab_menu->selectionModel()->currentIndex().row(),2)).toString() );
 ui->modifmenu4->setText( ui->tab_menu->model()->data(ui->tab_menu->model()->index(ui->tab_menu->selectionModel()->currentIndex().row(),3)).toString() );
 ui->modifmenu5->setText( ui->tab_menu->model()->data(ui->tab_menu->model()->index(ui->tab_menu->selectionModel()->currentIndex().row(),4)).toString() );

}

void gestion_client::on_trimenu_clicked()
{
    ui->tab_menu->setModel(M.trierclient());
}

void gestion_client::on_trimenu_2_clicked()
{
    ui->tab_menu->setModel(M.trierclient2());
}

void gestion_client::on_cherchermenu_clicked()
{
    QString nom =ui->linecherchermenu->text();
   QString prenom =ui->linecherchermenu2->text();


        ui->tabcherchermenu->setModel(M.chercherclient( nom, prenom)) ;





}







void gestion_client::on_BAmenu_2_clicked()
{
    int id_client=ui->linemenu1_2->text().toInt();
    int id_reservation=ui->linemenu2_2->text().toInt();
     QDate date_res=ui->linemenu2_3->date();

     Reservation R( id_client,id_reservation, date_res);
     bool test= R.ajouterreservation();
     if(test)
     {
         QMessageBox::information(nullptr, QObject::tr("ok"),
                     QObject::tr("ajout effectuer.\n"
                                 "Click Cancel to exit."), QMessageBox::Cancel);
         ui->tab_menu_2->setModel(  R.afficherreservation());
         ui->linemenu1_2->setText("");
          ui->linemenu2_2->setText("");
          ui->linemenu2_3->setDate(QDate(2000,01,01));

}
     else {
     notif n("Erreur","Ce client existe déja ");
     n.afficher();}
}

void gestion_client::on_P_supprimer_4_clicked()
{

    Reservation R1;
    R1.setid_reservation(ui->supp_4->text().toInt());
    bool test=R1.supprimerreservation(R1.getid_reservation());
    if(test)
    {
        QMessageBox::information(nullptr, QObject::tr("ok"),
                    QObject::tr("suppression effectuer.\n"
                                "Click Cancel to exit."), QMessageBox::Cancel);
        ui->tab_menu_2->setModel(R.afficherreservation());

}
    else
        QMessageBox::critical(nullptr, QObject::tr("not ok"),
                    QObject::tr("suppression non effectuer.\n"
                                "Click Cancel to exit."), QMessageBox::Cancel);
}

void gestion_client::on_modifmenub_2_clicked()
{
    int id_client=ui->modifmenu_2->text().toInt();
    int id_reservation=ui->modifmenu2_2->text().toInt();
    QDate date_res=ui->modifmenu3_3->date();

                  Reservation R(id_client, id_reservation,date_res);

         bool test = R.modifierreservation(id_client, id_reservation,date_res);


         if(test)

         {
              ui->tab_menu_2->setModel(R.afficherreservation());
             QMessageBox::information(nullptr, QObject::tr("update "),
                         QObject::tr("reservation modifiée \n"
         "Click Cancel to exit."), QMessageBox::Cancel);}
         else
             QMessageBox::critical(nullptr, QObject::tr("update "),
                         QObject::tr("menu non modifie\n"
         "Click Cancel to exit."), QMessageBox::Cancel);
}

void gestion_client::on_tab_menu_2_clicked(const QModelIndex &index)
{
 ui->modifmenu_2->setText( ui->tab_menu_2->model()->data(ui->tab_menu_2->model()->index(ui->tab_menu_2->selectionModel()->currentIndex().row(),0)).toString() );
   ui->modifmenu2_2->setText( ui->tab_menu_2->model()->data(ui->tab_menu_2->model()->index(ui->tab_menu_2->selectionModel()->currentIndex().row(),1)).toString() );
 ui->modifmenu3_3->setDate(ui->tab_menu_2->model()->data(ui->tab_menu_2->model()->index(ui->tab_menu_2->selectionModel()->currentIndex().row(),2)).toDate() );

}

void gestion_client::on_trimenu_4_clicked()
{
    ui->tab_menu_2->setModel(R.trierreservation());
}

void gestion_client::on_trimenu_5_clicked()
{
      ui->tab_menu_2->setModel(R.trierreservation2());
}

void gestion_client::on_cherchermenu_2_clicked()
{
    int id_client =ui->linecherchermenu_2->text().toUInt();
    int id_reservation =ui->linecherchermenu2_2->text().toInt();


        ui->tabcherchermenu_2->setModel(R.chercherreservation( id_client,id_reservation)) ;
}

void gestion_client::on_BAmenu_3_clicked()
{
     ui->stackedWidget->setCurrentWidget(ui->page);
}

void gestion_client::on_BAmenu_4_clicked()
{
    ui->stackedWidget->setCurrentWidget(ui->page_3);
}

void gestion_client::on_BAmenu_6_clicked()
{
    ui->stackedWidget->setCurrentWidget(ui->page_2);
}

void gestion_client::on_BAmenu_5_clicked()
{
    ui->stackedWidget->setCurrentWidget(ui->page_3);
}

void gestion_client::on_trimenu_3_clicked()
{
 ui->tab_menu->setModel(M.trierclient3());
}

void gestion_client::on_pdf_2_clicked()
{
    QTableView tab_menu;
    QSqlQueryModel * Modal=new  QSqlQueryModel();

    QSqlQuery qry;
     qry.prepare("SELECT * FROM client");
     qry.exec();
     Modal->setQuery(qry);
     tab_menu.setModel(Modal);






     QString strStream;
     QTextStream out(&strStream);

     const int rowCount = tab_menu.model()->rowCount();
     const int columnCount =  tab_menu.model()->columnCount();

     const QString strTitle ="Document";


     out <<  "<html>\n"
         "<head>\n"
             "<meta Content=\"Text/html; charset=Windows-1251\">\n"
         <<  QString("<title>%1</title>\n").arg(strTitle)
         <<  "</head>\n"
         "<body bgcolor=#ffffff link=#5000A0>\n"
        << QString("<h3 style=\" font-size: 32px; font-family: Arial, Helvetica, sans-serif; color: red ; font-weight: lighter; text-align: center;\">%1</h3>\n").arg("Liste Des Clients")
        <<"<br>"
         <<"<table border=1 cellspacing=0 cellpadding=2>\n";

     out << "<thead><tr bgcolor=#f0f0f0>";
     for (int column = 0; column < columnCount; column++)
         if (!tab_menu.isColumnHidden(column))
             out << QString("<th>%1</th>").arg(tab_menu.model()->headerData(column, Qt::Horizontal).toString());
     out << "</tr></thead>\n";
     for (int row = 0; row < rowCount; row++) {
             out << "<tr>";
             for (int column = 0; column < columnCount; column++) {
                 if (!tab_menu.isColumnHidden(column)) {
                     QString data = tab_menu.model()->data(tab_menu.model()->index(row, column)).toString().simplified();
                     out << QString("<td bkcolor=0>%1</td>").arg((!data.isEmpty()) ? data : QString("&nbsp;"));
                 }
             }
             out << "</tr>\n";
         }
         out <<  "</table>\n"
                 "<br><br>"


         "</body>\n"
         "</html>\n";

     QTextDocument *document = new QTextDocument();
     document->setHtml(strStream);

     QPrinter printer;

     QPrintDialog *dialog = new QPrintDialog(&printer, NULL);
     if (dialog->exec() == QDialog::Accepted) {
         document->print(&printer);
     }

     delete document;

}

void gestion_client::on_pdf_3_clicked()
{
    QTableView tab_menu_2;
    QSqlQueryModel * Modal=new  QSqlQueryModel();

    QSqlQuery qry;
     qry.prepare("SELECT * FROM Reservation");
     qry.exec();
     Modal->setQuery(qry);
     tab_menu_2.setModel(Modal);






     QString strStream;
     QTextStream out(&strStream);

     const int rowCount = tab_menu_2.model()->rowCount();
     const int columnCount =  tab_menu_2.model()->columnCount();

     const QString strTitle ="Document";


     out <<  "<html>\n"
         "<head>\n"
             "<meta Content=\"Text/html; charset=Windows-1251\">\n"
         <<  QString("<title>%1</title>\n").arg(strTitle)
         <<  "</head>\n"
         "<body bgcolor=#ffffff link=#5000A0>\n"
        << QString("<h3 style=\" font-size: 32px; font-family: Arial, Helvetica, sans-serif; color: red ; font-weight: lighter; text-align: center;\">%1</h3>\n").arg("Liste Des Reservation")
        <<"<br>"
         <<"<table border=1 cellspacing=0 cellpadding=2>\n";

     out << "<thead><tr bgcolor=#f0f0f0>";
     for (int column = 0; column < columnCount; column++)
         if (!tab_menu_2.isColumnHidden(column))
             out << QString("<th>%1</th>").arg(tab_menu_2.model()->headerData(column, Qt::Horizontal).toString());
     out << "</tr></thead>\n";
     for (int row = 0; row < rowCount; row++) {
             out << "<tr>";
             for (int column = 0; column < columnCount; column++) {
                 if (!tab_menu_2.isColumnHidden(column)) {
                     QString data = tab_menu_2.model()->data(tab_menu_2.model()->index(row, column)).toString().simplified();
                     out << QString("<td bkcolor=0>%1</td>").arg((!data.isEmpty()) ? data : QString("&nbsp;"));
                 }
             }
             out << "</tr>\n";
         }
         out <<  "</table>\n"
                 "<br><br>"


         "</body>\n"
         "</html>\n";

     QTextDocument *document = new QTextDocument();
     document->setHtml(strStream);

     QPrinter printer;

     QPrintDialog *dialog = new QPrintDialog(&printer, NULL);
     if (dialog->exec() == QDialog::Accepted) {
         document->print(&printer);
     }

     delete document;
}

void gestion_client::on_BAmenu_13_clicked()
{
    int id_client=ui->lineEdit->text().toInt();
    int id_commande=ui->lineEdit_2->text().toInt();
     QString description=ui->lineEdit_3->text();
      int prix=ui->lineEdit_11->text().toInt();

     Commande C( id_client,id_commande, description,prix);
     bool test= C.ajoutercommande();
     if(test)
     {
         QMessageBox::information(nullptr, QObject::tr("ok"),
                     QObject::tr("ajout effectuer.\n"
                                 "Click Cancel to exit."), QMessageBox::Cancel);
         ui->tab_menu_5->setModel(  C.affichercommande());
         ui->lineEdit->setText("");
          ui->lineEdit_2->setText("");
          ui->lineEdit_3->setText("");
           ui->lineEdit_11->setText("");

}
     else {
     notif n("Erreur","Ce client existe déja ");
     n.afficher();}
}

void gestion_client::on_P_supprimer_7_clicked()
{
    Commande C1;
    C1.setid_commande(ui->supp_7->text().toInt());
    bool test=C1.supprimercommande(C1.getid_commande());
    if(test)
    {
        QMessageBox::information(nullptr, QObject::tr("ok"),
                    QObject::tr("suppression effectuer.\n"
                                "Click Cancel to exit."), QMessageBox::Cancel);
        ui->tab_menu_5->setModel(C.affichercommande());

}
    else
        QMessageBox::critical(nullptr, QObject::tr("not ok"),
                    QObject::tr("suppression non effectuer.\n"
                                "Click Cancel to exit."), QMessageBox::Cancel);
}
void gestion_client::on_tab_menu_5_activated(const QModelIndex &index)
{
    ui->lineEdit_6->setText( ui->tab_menu_5->model()->data(ui->tab_menu_5->model()->index(ui->tab_menu_5->selectionModel()->currentIndex().row(),0)).toString() );
      ui->lineEdit_4->setText( ui->tab_menu_5->model()->data(ui->tab_menu_5->model()->index(ui->tab_menu_5->selectionModel()->currentIndex().row(),1)).toString() );
    ui->lineEdit_5->setText(ui->tab_menu_5->model()->data(ui->tab_menu_5->model()->index(ui->tab_menu_5->selectionModel()->currentIndex().row(),2)).toString() );
       ui->lineEdit_12->setText( ui->tab_menu_5->model()->data(ui->tab_menu_5->model()->index(ui->tab_menu_5->selectionModel()->currentIndex().row(),3)).toString() );
}
void gestion_client::on_modifmenub_5_clicked()
{
    int id_client=ui->lineEdit_6->text().toInt();
    int id_commande=ui->lineEdit_4->text().toInt();
    QString description=ui->lineEdit_5->text();
     int prix=ui->lineEdit_12->text().toInt();


                  Commande C(id_client, id_commande,description,prix);

         bool test = C.modifiercommande(id_client, id_commande,description,prix);


         if(test)

         {
              ui->tab_menu_5->setModel(C.affichercommande());
             QMessageBox::information(nullptr, QObject::tr("update "),
                         QObject::tr("reservation modifiée \n"
         "Click Cancel to exit."), QMessageBox::Cancel);}
         else
             QMessageBox::critical(nullptr, QObject::tr("update "),
                         QObject::tr("menu non modifie\n"
         "Click Cancel to exit."), QMessageBox::Cancel);
}



void gestion_client::on_BAmenu_14_clicked()
{
    ui->stackedWidget->setCurrentWidget(ui->page_2);

}

void gestion_client::on_BAmenu_15_clicked()
{
    ui->stackedWidget->setCurrentWidget(ui->page);
}

void gestion_client::on_cherchermenu_5_clicked()
{
    int id_client =ui->linecherchermenu_5->text().toUInt();
    int id_commande =ui->linecherchermenu2_5->text().toInt();


        ui->tabcherchermenu_5->setModel(C.cherchercommande( id_client,id_commande)) ;

}

void gestion_client::on_trimenu_11_clicked()
{
     ui->tab_menu_5->setModel(C.triercommande());
}

void gestion_client::on_trimenu_12_clicked()
{
    ui->tab_menu_5->setModel(C.triercommande2());
}

void gestion_client::on_pdf_6_clicked()
{
    QTableView tab_menu_5;
    QSqlQueryModel * Modal=new  QSqlQueryModel();

    QSqlQuery qry;
     qry.prepare("SELECT * FROM commande");
     qry.exec();
     Modal->setQuery(qry);
     tab_menu_5.setModel(Modal);






     QString strStream;
     QTextStream out(&strStream);

     const int rowCount = tab_menu_5.model()->rowCount();
     const int columnCount =  tab_menu_5.model()->columnCount();

     const QString strTitle ="Document";


     out <<  "<html>\n"
         "<head>\n"
             "<meta Content=\"Text/html; charset=Windows-1251\">\n"
         <<  QString("<title>%1</title>\n").arg(strTitle)
         <<  "</head>\n"
         "<body bgcolor=#ffffff link=#5000A0>\n"
        << QString("<h3 style=\" font-size: 32px; font-family: Arial, Helvetica, sans-serif; color: red ; font-weight: lighter; text-align: center;\">%1</h3>\n").arg("Liste Des Commandes")
        <<"<br>"
         <<"<table border=1 cellspacing=0 cellpadding=2>\n";

     out << "<thead><tr bgcolor=#f0f0f0>";
     for (int column = 0; column < columnCount; column++)
         if (!tab_menu_5.isColumnHidden(column))
             out << QString("<th>%1</th>").arg(tab_menu_5.model()->headerData(column, Qt::Horizontal).toString());
     out << "</tr></thead>\n";
     for (int row = 0; row < rowCount; row++) {
             out << "<tr>";
             for (int column = 0; column < columnCount; column++) {
                 if (!tab_menu_5.isColumnHidden(column)) {
                     QString data = tab_menu_5.model()->data(tab_menu_5.model()->index(row, column)).toString().simplified();
                     out << QString("<td bkcolor=0>%1</td>").arg((!data.isEmpty()) ? data : QString("&nbsp;"));
                 }
             }
             out << "</tr>\n";
         }
         out <<  "</table>\n"
                 "<br><br>"


         "</body>\n"
         "</html>\n";

     QTextDocument *document = new QTextDocument();
     document->setHtml(strStream);

     QPrinter printer;

     QPrintDialog *dialog = new QPrintDialog(&printer, NULL);
     if (dialog->exec() == QDialog::Accepted) {
         document->print(&printer);
     }

     delete document;

}

void gestion_client::update_label()
{
    int empty=0;

    data=A.read_from_arduino();
       qDebug()<<data;
    if (data=="0" ||data=="1" ||data=="2" ||data=="3"||data=="4" ||data=="5" ||data=="6" ||data=="7" ||data=="8" || data=="9")
        {
             code_pad=code_pad+data;
        }
   else  if (data=="B")
    {
        code_pad="";
    }
    else if (data=="A")
    {       qDebug()<<code_pad;

        QString Message="";
        QSqlQuery qry;
        qry.prepare( "select * from commande where id_commande =:code");
        qry.bindValue(":code",code_pad);
        if(qry.exec( ))
        {

            while(qry.next())
            {
                if(qry.value(2)=="pret")
                A.write_to_arduino("1");
                else A.write_to_arduino("2");
                empty=1;

            }
            if (empty==0)
            {
              A.write_to_arduino("0");
            }
        }
}}


void gestion_client::digit_pressed()
{
bool user_is_typing_secondNumber=false;
    qDebug() << "test";
    QPushButton * button = (QPushButton *)sender();
    QString input;
    double labelnumber;

    if((ui->pushButton_add->isChecked() || ui->pushButton_multiply->isChecked()) && (!user_is_typing_secondNumber))
    {
        user_is_typing_secondNumber=true;
        labelnumber = button->text().toDouble();
        input = QString::number(labelnumber,'g',15);
    }

    else
    {
        if(ui->lineEdit_11->text().contains(".") && button->text() == "0")
        {
            input=ui->lineEdit_11->text() + button->text();
        }
        else
        {
            labelnumber = (ui->lineEdit_11->text() + button->text()).toDouble();
            input = QString::number(labelnumber,'g',15);
        }
        labelnumber = (ui->lineEdit_11->text() + button->text()).toDouble();
    }
    ui->lineEdit_11->setText(input);
 user_is_typing_secondNumber=false;
}



void gestion_client::unary_operation_pressed()
{
    QPushButton* button = (QPushButton *)sender();
    double labelnumber;
    QString input;

    if(button->text() == "+/-")
    {
        labelnumber = (ui->lineEdit_11->text()).toDouble();
        labelnumber *= -1;
        input = QString::number(labelnumber,'g',15);
        ui->lineEdit_11->setText(input);
    }

    else if(button->text() == "%")
    {
        labelnumber = (ui->lineEdit_11->text()).toDouble();
        labelnumber *= 0.01;
        input = QString::number(labelnumber,'g',15);
        ui->lineEdit_11->setText(input);
    }

    //error correction codse is still missing
   user_is_typing_secondNumber=false;
}

void gestion_client::on_pushButton_clear_released()
{
    ui->pushButton_add->setChecked(false);
    ui->pushButton_multiply->setChecked(false);

    user_is_typing_secondNumber=false;

    ui->lineEdit_11->setText("0");
}

void gestion_client::on_pushButton_equals_released()
{
    double labelnumber,secondNum;
    QString input;
    labelnumber=0;

    secondNum = ui->lineEdit_11->text().toDouble();

    if(ui->pushButton_add->isChecked())
    {
        labelnumber = firstNum + secondNum;
        ui->pushButton_add->setChecked(false);
    }


    else if(ui->pushButton_multiply->isChecked())
    {
        labelnumber = firstNum * secondNum;
        ui->pushButton_multiply->setChecked(false);
    }



    input = QString::number(labelnumber,'g',15);
    ui->lineEdit_11->setText(input);

    user_is_typing_secondNumber=false;
}

void gestion_client::binary_operation_pressed()
{
    QPushButton* button = (QPushButton *)sender();
    //double labelnumber;
    //QString input;

    firstNum = ui->lineEdit_11->text().toDouble();
    button->setChecked(true);
 user_is_typing_secondNumber=false;
}




void gestion_client::on_gestion4_3_clicked()
{
    ui->stackedWidget->setCurrentWidget(ui->page_2);
}

void gestion_client::on_gestion1_3_clicked()
{
    ui->stackedWidget->setCurrentWidget(ui->page);
}

void gestion_client::on_gestion5_3_clicked()
{
    ui->stackedWidget->setCurrentWidget(ui->page_3);
}

void gestion_client::on_pdf_7_clicked()
{
    secondDialog *i=new secondDialog();
            i->show();
}
