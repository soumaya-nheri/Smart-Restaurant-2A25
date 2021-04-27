#include "gestion_client.h"
#include "ui_gestion_client.h"
#include"ingredient.h"
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

gestion_client::gestion_client(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::gestion_client)
{
    ui->setupUi(this);
     ui->tab_menu_2->setModel(R.afficherreservation());
      ui->tab_menu->setModel(M.afficherclient());
       ui->tab_menu_5->setModel(C.affichercommande());

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

     Commande C( id_client,id_commande, description);
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

}
void gestion_client::on_modifmenub_5_clicked()
{
    int id_client=ui->lineEdit_6->text().toInt();
    int id_commande=ui->lineEdit_4->text().toInt();
    QString description=ui->lineEdit_5->text();

                  Commande C(id_client, id_commande,description);

         bool test = C.modifiercommande(id_client, id_commande,description);


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
