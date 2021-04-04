#include "mainwindow.h"
#include "ui_mainwindow.h"
#include"ingredient.h"
#include"client.h"
#include"reservation.h"
#include<QString>
#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
     ui->tab_menu_2->setModel(R.afficherreservation());
      ui->tab_menu->setModel(M.afficherclient());
}

MainWindow::~MainWindow()
{
    delete ui;
}






void MainWindow::on_BAmenu_clicked()
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

        // ui->comboBox->clear();
      // ui->comboBox->addItems(I.liste());

}
}

void MainWindow::on_P_supprimer_3_clicked()
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

void MainWindow::on_modifmenub_clicked()
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

void MainWindow::on_tab_menu_clicked(const QModelIndex &index)
{
 ui->modifmenu->setText( ui->tab_menu->model()->data(ui->tab_menu->model()->index(ui->tab_menu->selectionModel()->currentIndex().row(),0)).toString() );
   ui->modifmenu2->setText( ui->tab_menu->model()->data(ui->tab_menu->model()->index(ui->tab_menu->selectionModel()->currentIndex().row(),1)).toString() );
 ui->modifmenu3->setText( ui->tab_menu->model()->data(ui->tab_menu->model()->index(ui->tab_menu->selectionModel()->currentIndex().row(),2)).toString() );
 ui->modifmenu4->setText( ui->tab_menu->model()->data(ui->tab_menu->model()->index(ui->tab_menu->selectionModel()->currentIndex().row(),3)).toString() );
 ui->modifmenu5->setText( ui->tab_menu->model()->data(ui->tab_menu->model()->index(ui->tab_menu->selectionModel()->currentIndex().row(),4)).toString() );

}

void MainWindow::on_trimenu_clicked()
{
    ui->tab_menu->setModel(M.trierclient());
}

void MainWindow::on_trimenu_2_clicked()
{
    ui->tab_menu->setModel(M.trierclient2());
}

void MainWindow::on_cherchermenu_clicked()
{
    QString nom =ui->linecherchermenu->text();
   QString prenom =ui->linecherchermenu2->text();


        ui->tabcherchermenu->setModel(M.chercherclient( nom, prenom)) ;





}







void MainWindow::on_BAmenu_2_clicked()
{
    int id_client=ui->linemenu1_2->text().toInt();
    int id_reservation=ui->linemenu2_2->text().toInt();
     QString date_res=ui->linemenu3_2->text();

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
                ui->linemenu3_2->setText("");

}
}

void MainWindow::on_P_supprimer_4_clicked()
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

void MainWindow::on_modifmenub_2_clicked()
{
    int id_client=ui->modifmenu_2->text().toInt();
    int id_reservation=ui->modifmenu2_2->text().toInt();
    QString date_res=ui->modifmenu3_2->text();

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

void MainWindow::on_tab_menu_2_clicked(const QModelIndex &index)
{
 ui->modifmenu_2->setText( ui->tab_menu_2->model()->data(ui->tab_menu_2->model()->index(ui->tab_menu_2->selectionModel()->currentIndex().row(),0)).toString() );
   ui->modifmenu2_2->setText( ui->tab_menu_2->model()->data(ui->tab_menu_2->model()->index(ui->tab_menu_2->selectionModel()->currentIndex().row(),1)).toString() );
 ui->modifmenu3_2->setText( ui->tab_menu_2->model()->data(ui->tab_menu_2->model()->index(ui->tab_menu_2->selectionModel()->currentIndex().row(),2)).toString() );

}

void MainWindow::on_trimenu_4_clicked()
{
    ui->tab_menu_2->setModel(R.trierreservation());
}

void MainWindow::on_trimenu_5_clicked()
{
      ui->tab_menu_2->setModel(R.trierreservation2());
}

void MainWindow::on_cherchermenu_2_clicked()
{
    int id_client =ui->linecherchermenu_2->text().toUInt();
    int id_reservation =ui->linecherchermenu2_2->text().toInt();


        ui->tabcherchermenu_2->setModel(R.chercherreservation( id_client,id_reservation)) ;
}

void MainWindow::on_BAmenu_3_clicked()
{
     ui->stackedWidget->setCurrentWidget(ui->page);
}

void MainWindow::on_BAmenu_4_clicked()
{
    ui->stackedWidget->setCurrentWidget(ui->page);
}

void MainWindow::on_BAmenu_6_clicked()
{
    ui->stackedWidget->setCurrentWidget(ui->page_2);
}

void MainWindow::on_BAmenu_5_clicked()
{
    ui->stackedWidget->setCurrentWidget(ui->page_2);
}
