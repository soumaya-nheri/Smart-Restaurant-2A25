#include "mainwindow.h"
#include "ui_mainwindow.h"
#include"ingredient.h"
#include"menu.h"
#include<QString>
#include <QMessageBox>
#include <QSqlQuery>
#include <QPrintDialog>
#include <QTextStream>
#include <QPrinter>
#include<QtDebug>
#include <QTextDocument>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->lineEdit->setValidator(new QIntValidator(0, 9999999, this));
    ui->tab_ingredient->setModel(I.afficher());
      ui->tab_menu->setModel(M.affichermenu());
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_BA_clicked()
{

    int id=ui->lineEdit->text().toInt();
    QString nom=ui->lineEdit_2->text();
     int quantite=ui->lineEdit_3->text().toInt();
     Ingredient I(id,nom,quantite);
     bool test=I.ajouter();
     if(test)
     {
         QMessageBox::information(nullptr, QObject::tr("ok"),
                     QObject::tr("ajout effectuer.\n"
                                 "Click Cancel to exit."), QMessageBox::Cancel);
         ui->tab_ingredient->setModel(I.afficher());


 }
     else
         QMessageBox::critical(nullptr, QObject::tr("not ok"),
                     QObject::tr("ajout non effectuer.\n"
                                 "Click Cancel to exit."), QMessageBox::Cancel);

}



void MainWindow::on_P_supprimer_clicked()
{
    Ingredient I1;
    I1.setid(ui->supp->text().toInt());
    bool test=I1.supprimer(I1.getid());
    if(test)
    {
        QMessageBox::information(nullptr, QObject::tr("ok"),
                    QObject::tr("suppression effectuer.\n"
                                "Click Cancel to exit."), QMessageBox::Cancel);
        ui->tab_ingredient->setModel(I.afficher());

}
    else
        QMessageBox::critical(nullptr, QObject::tr("not ok"),
                    QObject::tr("suppression non effectuer.\n"
                                "Click Cancel to exit."), QMessageBox::Cancel);
}




void MainWindow::on_BAmenu_clicked()
{
    int id_plat=ui->linemenu1->text().toInt();
    QString nom_plat=ui->linemenu2->text();
     int prix=ui->linemenu3->text().toInt();
       QString cuisine=ui->linemenu4->text();
        QString description=ui->linemenu5->text();
 QString type=ui->linemenu6->text();

     Menu M(id_plat, nom_plat,prix, cuisine,  description, type);
     bool test= M.ajoutermenu();
     if(test)
     {
         QMessageBox::information(nullptr, QObject::tr("ok"),
                     QObject::tr("ajout effectuer.\n"
                                 "Click Cancel to exit."), QMessageBox::Cancel);
         ui->tab_menu->setModel(M.affichermenu());
         ui->linemenu1->setText("");
          ui->linemenu2->setText("");
                ui->linemenu3->setText("");
                     ui->linemenu4->setText("");
                 ui->linemenu5->setText("");
                  ui->linemenu6->setText("");
        // ui->comboBox->clear();
      // ui->comboBox->addItems(I.liste());

}
}

void MainWindow::on_P_supprimer_3_clicked()
{

    Menu M1;
    M1.setid_plat(ui->supp_3->text().toInt());
    bool test=M1.supprimermenu(M1.getid_plat());
    if(test)
    {
        QMessageBox::information(nullptr, QObject::tr("ok"),
                    QObject::tr("suppression effectuer.\n"
                                "Click Cancel to exit."), QMessageBox::Cancel);
        ui->tab_menu->setModel(M.affichermenu());

}
    else
        QMessageBox::critical(nullptr, QObject::tr("not ok"),
                    QObject::tr("suppression non effectuer.\n"
                                "Click Cancel to exit."), QMessageBox::Cancel);
}

void MainWindow::on_modifmenub_clicked()
{
    int id_plat=ui->modifmenu->text().toInt();
    QString nom_plat=ui->modifmenu2->text();
     int prix=ui->modifmenu3->text().toInt();
 QString cuisine=ui->modifmenu4->text();
          QString description=ui->modifmenu5->text();
          QString type=ui->modifmenu6->text();
                  Menu M(id_plat, nom_plat,prix, cuisine,  description, type);

         bool test = M.modifiermenu( id_plat,nom_plat,prix, cuisine, description, type);


         if(test)

         {
              ui->tab_menu->setModel(M.affichermenu());
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
 ui->modifmenu6->setText( ui->tab_menu->model()->data(ui->tab_menu->model()->index(ui->tab_menu->selectionModel()->currentIndex().row(),5)).toString() );

}

void MainWindow::on_trimenu_clicked()
{
    ui->tab_menu->setModel(M.triermenu());
}

void MainWindow::on_trimenu_2_clicked()
{
    ui->tab_menu->setModel(M.triermenu2());
}

void MainWindow::on_cherchermenu_clicked()
{
    QString nom_plat =ui->linecherchermenu->text();
   QString type =ui->linecherchermenu2->text();
QString cuisine =ui->linecherchermenu3->text();
         if (  nom_plat != ""){
        ui->tabcherchermenu->setModel(M.cherchermenu( nom_plat, type)) ;}


            if (type!= ""){
           ui->tabcherchermenu->setModel(M.chercher_menu_par_type(type)) ;}
           if (nom_plat!= ""){
          ui->tabcherchermenu->setModel(M.chercher_menu_par_cuisine(cuisine)) ;



}
}







void MainWindow::on_pdf_3_clicked()
{
    QTableView tab_ingredient;
    QSqlQueryModel * Modal=new  QSqlQueryModel();

    QSqlQuery qry;
     qry.prepare("SELECT * FROM ingredient");
     qry.exec();
     Modal->setQuery(qry);
     tab_ingredient.setModel(Modal);






     QString strStream;
     QTextStream out(&strStream);

     const int rowCount = tab_ingredient.model()->rowCount();
     const int columnCount =  tab_ingredient.model()->columnCount();

     const QString strTitle ="Document";


     out <<  "<html>\n"
         "<head>\n"
             "<meta Content=\"Text/html; charset=Windows-1251\">\n"
         <<  QString("<title>%1</title>\n").arg(strTitle)
         <<  "</head>\n"
         "<body bgcolor=#ffffff link=#5000A0>\n"
        << QString("<h3 style=\" font-size: 32px; font-family: Arial, Helvetica, sans-serif; color: red ; font-weight: lighter; text-align: center;\">%1</h3>\n").arg("Tous les ingrédients")
        <<"<br>"
         <<"<table border=1 cellspacing=0 cellpadding=2>\n";

     out << "<thead><tr bgcolor=#f0f0f0>";
     for (int column = 0; column < columnCount; column++)
         if (!tab_ingredient.isColumnHidden(column))
             out << QString("<th>%1</th>").arg(tab_ingredient.model()->headerData(column, Qt::Horizontal).toString());
     out << "</tr></thead>\n";
     for (int row = 0; row < rowCount; row++) {
             out << "<tr>";
             for (int column = 0; column < columnCount; column++) {
                 if (!tab_ingredient.isColumnHidden(column)) {
                     QString data = tab_ingredient.model()->data(tab_ingredient.model()->index(row, column)).toString().simplified();
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

void MainWindow::on_pushButton_3_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);
}

void MainWindow::on_pushButton_2_clicked()
{
    ui->stackedWidget->setCurrentIndex(2);
}
