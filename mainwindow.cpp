#include "mainwindow.h"
#include "ui_mainwindow.h"
#include"ingredient.h"
#include<QString>
#include <QMessageBox>
#include <QComboBox>
#include<QStringList>
#include<QDate>
#include <QSqlQuery>
#include <QPrintDialog>
#include <QTextStream>
#include <QPrinter>
#include<QtDebug>
#include <QTextDocument>
#include <QProcess>
#include "notif.h"
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    ui->lineEdit->setValidator(new QIntValidator(0, 9999999, this));
    ui->tab_ingredient->setModel(I.afficher());
     ui->tab_fournisseur->setModel(F.afficherfourniseeur());
     ui->tab_menu->setModel(M.affichermenu());
}

MainWindow::~MainWindow()
{
    delete ui;
}



void MainWindow::on_BA_clicked()
{

    int id=ui->lineEdit->text().toInt();
    QString nom=ui->lineEdit_3->text();
     int quantite=ui->lineEdit_4->text().toInt();
       QString marque=ui->linemarque->text();
     QDate date_expiration=ui->date1->date();


     Ingredient I(id,nom,quantite,date_expiration,marque);
     bool test=I.ajouter();
     if(test)
     {
         QMessageBox::information(nullptr, QObject::tr("ok"),
                     QObject::tr("ajout effectuer.\n"
                                 "Click Cancel to exit."), QMessageBox::Cancel);
         ui->tab_ingredient->setModel(I.afficher());
         ui->lineEdit->setText("");
          ui->lineEdit_3->setText("");
                ui->lineEdit_4->setText("");
                     ui->linemarque->setText("");
                ui->date1->setDate(QDate(2000,01,01));
         ui->comboBox->clear();
         ui->comboBox->addItems(I.liste());
         ui->comboBox2->clear();
         ui->comboBox2->addItems(I.liste());

 }
     else
         QMessageBox::critical(nullptr, QObject::tr("not ok"),
                     QObject::tr("ajout non effectuer.\n"
                                 "Click Cancel to exit."), QMessageBox::Cancel);

}

void MainWindow::on_b_supprimer_currentChanged(int index)
{

        ui->tab_ingredient->setModel(I.afficher());

        ui->comboBox->clear();
        ui->comboBox->addItems(I.liste());
        ui->comboBox2->clear();
        ui->comboBox2->addItems(I.liste());
}

void MainWindow::on_tabfournisseur_currentChanged(int index)
{
    ui->tab_fournisseur->setModel(F.afficherfourniseeur());

    ui->comboBox2->clear();
    ui->comboBox2->addItems(I.liste());
    ui->comboc1->clear();
    ui->comboc1->addItems(F.listfournisseur());

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




void MainWindow::on_comboBox_currentTextChanged(const QString &arg1)
{

//ui->label->setText(arg1);
        Ingredient e=I.recherche_Id(ui->comboBox->currentText().toInt());
        QString id= QString::number(e.getid());
        QString quantite= QString::number(e.getquantite());

        ui->modif1->setText(id);
        ui->modif2->setText(e.getnom());
         ui->modif3->setText(quantite);
          ui->modif4->setDate(e.getdate_expiration());
           ui->modif5->setText(e.getmarque());

}






void MainWindow::on_pushButton_5_clicked()
{
    Ingredient e(ui->modif1->text().toInt(),ui->modif2->text(),ui->modif3->text().toInt(),ui->modif4->date(),ui->modif5->text());
        bool test=e.modifier(ui->comboBox->currentText().toInt());
        if(test){
            QMessageBox::information(nullptr, QObject::tr("Employe"),
                        QObject::tr("ingredient modifié avec succés.\n"), QMessageBox::Cancel);
            ui->tab_ingredient->setModel(I.afficher());
            ui->modif1->setText("");
            ui->modif2->setText("");
            ui->modif3->setText("");
            ui->modif4->setDate(QDate(2000,01,01));
            ui->modif5->setText("");

          //  ui->id_employe_mod->setText("");
            ui->comboBox->clear();
            ui->comboBox->addItems(I.liste());

        }
        else{
            QMessageBox::critical(nullptr, QObject::tr("ingredient non modifie"),
                        QObject::tr("Echec!\n"), QMessageBox::Cancel);
        }
}






void MainWindow::on_tri_emp_2_clicked()
{
        ui->tab_ingredient->setModel(I.trier1());
}



void MainWindow::on_tri_emp_3_clicked()
{
    ui->tab_ingredient->setModel(I.trier());
}

void MainWindow::on_tri_emp_4_clicked()
{
    ui->tab_ingredient->setModel(I.trier2());
}

void MainWindow::on_chercher_clicked()
{

    QString nom =ui->linechercher1->text();

QString marque =ui->linechercher3->text();

           ui->tabchercher->setModel(I.chercher_emp_avancee(nom,marque));





}




void MainWindow::on_pdf_clicked()
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

void MainWindow::on_qr_clicked()
{


    QProcess *proc = new QProcess;
    QString progName = "C:/Users/Anass/OneDrive/crud/code/QRCode_Generator.exe";
    proc->start(progName);
    proc->errorString();
    proc->errorString();
    qDebug()<< " Started the process"<<endl;
}

/*void MainWindow::on_ajoutfournisseur_clicked()
{
    int id_fournisseur=ui->linefour1->text().toInt();
    QString nom=ui->linefour2->text();
    QString prenom=ui->linefour3->text();
     int cin=ui->linefour4->text().toInt();
       QString adresse=ui->linefour5->text();
 QString email =ui->linefour6->text();
ui->comboBox2->currentText().toInt();
     Fournisseur F(id_fournisseur,nom, prenom, cin,  adresse,  email);
     bool test=F.ajouterfournisseur();
     if(test)
     {
         QMessageBox::information(nullptr, QObject::tr("ok"),
                     QObject::tr("ajout effectuer.\n"
                                 "Click Cancel to exit."), QMessageBox::Cancel);
         ui->tab_fournisseur->setModel(F.afficherfourniseeur());
         ui->linefour1->setText("");
          ui->linefour2->setText("");
                ui->linefour3->setText("");
                     ui->linefour4->setText("");
                ui->linefour5->setText("");
                  ui->linefour6->setText("");
                  ui->comboBox2->clear();
                 ui->comboBox2->addItems(I.liste());
}
     else
         QMessageBox::critical(nullptr, QObject::tr("not ok"),
                     QObject::tr("ajout non effectuer.\n"
                                 "Click Cancel to exit."), QMessageBox::Cancel);
}

*/
void MainWindow::on_ajoutfournisseur_clicked()
{
    Fournisseur c(ui->linefour1->text().toInt(),ui->linefour2->text(),ui->linefour3->text(),ui->linefour4->text().toInt(),ui->linefour5->text(),ui->linefour6->text(),ui->comboBox2->currentText().toInt());
    bool test=c.ajouterfournisseur();
    if(test) {
        /*QMessageBox::information(nullptr, QObject::tr("Fournisseur"),
                    QObject::tr("fournisseur ajouté avec succés.\n"), QMessageBox::Cancel);*/
        notif n("succé","fournisseur ajouté ");
                                 n.afficher();

        ui->tab_fournisseur->setModel(F.afficherfourniseeur());

        ui->linefour1->setText("");
         ui->linefour2->setText("");
               ui->linefour3->setText("");
                    ui->linefour4->setText("");
               ui->linefour5->setText("");
                 ui->linefour6->setText("");
                 ui->comboBox2->clear();
                  ui->comboBox2->addItems(I.liste());
    }
    else{
        QMessageBox::critical(nullptr, QObject::tr("ajout non effectué"),
                    QObject::tr("Echec!\n"), QMessageBox::Cancel);
    }
}

/*void MainWindow::on_comboBox2_activated(int index)
{

}
*/
void MainWindow::on_P_supprimer_2_clicked()
{
    Fournisseur F1;
    F1.setid_fournisseur(ui->supp_2->text().toInt());
    bool test=F1.supprimerfournisseur(F1.getid_fournisseur());
    if(test)
    {
        QMessageBox::information(nullptr, QObject::tr("ok"),
                    QObject::tr("suppression effectuer.\n"
                                "Click Cancel to exit."), QMessageBox::Cancel);
        ui->tab_fournisseur->setModel(F.afficherfourniseeur());

}
    else
        QMessageBox::critical(nullptr, QObject::tr("not ok"),
                    QObject::tr("suppression non effectuer.\n"
                                "Click Cancel to exit."), QMessageBox::Cancel);
}

/*void MainWindow::on_tri_emp_5_clicked()
{
     ui->tab_fournisseur->setModel(F.trierfournisseur());
}

void MainWindow::on_chercher_2_clicked()
{
    QString nom =ui->linechercher1_2->text();

QString prenom =ui->linechercher3_2->text();

           ui->tabchercher_2->setModel(F.chercher_emp_avancee1(nom,prenom));
             ui->tab_fournisseur->setModel(F.trierfournisseur());
}
*/
void MainWindow::on_modiffour_clicked()
{
    Fournisseur c (ui->comboc1->currentText().toInt(),ui->moudiffour2->text(),ui->modiffour3->text(),ui->modiffour4->text().toInt(),ui->modiffour5->text(),ui->modiffour6->text(),ui->comboc1->currentText().toInt());
    bool test=c.modifierfournisseur(ui->comboc1->currentText().toInt());
    if(test){
        QMessageBox::information(nullptr, QObject::tr("Conge"),
                    QObject::tr("FOURNISSEUR modifié avec succés.\n"), QMessageBox::Cancel);
        ui->tab_fournisseur->setModel(F.afficherfourniseeur());

        ui->moudiffour2->setText("");
        ui->modiffour3->setText("");
        ui->modiffour4->setText("");
        ui->modiffour5->setText("");
        ui->modiffour6->setText("");
        ui->comboc1->clear();
        ui->comboc1->addItems(F.listfournisseur());


    }
    else{
        QMessageBox::critical(nullptr, QObject::tr("FOURNISSEUR non mdifié"),
                    QObject::tr("Echec!\n"), QMessageBox::Cancel);
    }
}

void MainWindow::on_comboc1_currentTextChanged(const QString &arg1)
{
    Fournisseur c =F.recherche_fournisseur(ui->comboc1->currentText().toInt());
   // QString id_fournisseur= QString::number(c.getid_fournisseur());
     QString cin= QString::number(c.getcin());
    ui->moudiffour2->setText(c.getnom());
    ui->modiffour3->setText(c.getprenom());
    ui->modiffour4->setText(cin);
    ui->modiffour5->setText(c.getadresse());
    ui->modiffour6->setText(c.getemail());
    //ui->ref_conge_e2->setText(id_fournisseur);

}

void MainWindow::on_chercherfour_clicked()
{
     QString nom =ui->linechercherfour->text();
    QString prenom =ui->linechercherfour_2->text();

          if (  nom != ""){
         ui->tabchercherfour->setModel(F.chercher_four_par_nom(nom)) ;}


             if (prenom!= ""){
            ui->tabchercherfour->setModel(F.chercher_four_par_prenom(prenom)) ;
}
}


void MainWindow::on_trifour_clicked()
{
     ui->tab_fournisseur->setModel(F.triernom());
}

void MainWindow::on_trifour_2_clicked()
{
    ui->tab_fournisseur->setModel(F.trierprenom());
}

void MainWindow::on_trifour_3_clicked()
{
    ui->tab_fournisseur->setModel(F.trieremail());
}

void MainWindow::on_pdffour_clicked()
{
    QTableView tab_fournisseur;
    QSqlQueryModel * Modal=new  QSqlQueryModel();

    QSqlQuery qry;
     qry.prepare("SELECT * FROM fournisseur");
     qry.exec();
     Modal->setQuery(qry);
    tab_fournisseur.setModel(Modal);






     QString strStream;
     QTextStream out(&strStream);

     const int rowCount = tab_fournisseur.model()->rowCount();
     const int columnCount =  tab_fournisseur.model()->columnCount();

     const QString strTitle ="Document";


     out <<  "<html>\n"
         "<head>\n"
             "<meta Content=\"Text/html; charset=Windows-1251\">\n"
         <<  QString("<title>%1</title>\n").arg(strTitle)
         <<  "</head>\n"
         "<body bgcolor=#ffffff link=#5000A0>\n"
        << QString("<h3 style=\" font-size: 32px; font-family: Arial, Helvetica, sans-serif; color: red ; font-weight: lighter; text-align: center;\">%1</h3>\n").arg("Tous les fournisseurs")
        <<"<br>"
         <<"<table border=1 cellspacing=0 cellpadding=2>\n";

     out << "<thead><tr bgcolor=#f0f0f0>";
     for (int column = 0; column < columnCount; column++)
         if (!tab_fournisseur.isColumnHidden(column))
             out << QString("<th>%1</th>").arg(tab_fournisseur.model()->headerData(column, Qt::Horizontal).toString());
     out << "</tr></thead>\n";
     for (int row = 0; row < rowCount; row++) {
             out << "<tr>";
             for (int column = 0; column < columnCount; column++) {
                 if (!tab_fournisseur.isColumnHidden(column)) {
                     QString data = tab_fournisseur.model()->data(tab_fournisseur.model()->index(row, column)).toString().simplified();
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



void MainWindow::on_pushButton_clicked()
{
     ui->stackedWidget->setCurrentIndex(3);
}

void MainWindow::on_pushButton_2_clicked()
{
      ui->stackedWidget->setCurrentIndex(2);
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
        ui->tabcherchermenu->setModel(M.chercher_menu_par_nom( nom_plat)) ;}


            if (type!= ""){
           ui->tabcherchermenu->setModel(M.chercher_menu_par_type(type)) ;}
           if (cuisine!= ""){
          ui->tabcherchermenu->setModel(M.chercher_menu_par_cuisine(cuisine)) ;



}
}






void MainWindow::on_gestion4_clicked()
{
     ui->stackedWidget->setCurrentIndex(1);
}

void MainWindow::on_gestion1_clicked()
{
     ui->stackedWidget->setCurrentIndex(0);
}

void MainWindow::on_gestion5_clicked()
{
     ui->stackedWidget->setCurrentIndex(2);
}


void MainWindow::on_lineEdit_2_textChanged(const QString &arg1)
{
     ui->tab_ingredient->setModel(I.search(arg1));
}

void MainWindow::on_pdf_2_clicked()
{
    QTableView tab_menu;
    QSqlQueryModel * Modal=new  QSqlQueryModel();

    QSqlQuery qry;
     qry.prepare("SELECT * FROM menu");
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
        << QString("<h3 style=\" font-size: 32px; font-family: Arial, Helvetica, sans-serif; color: red ; font-weight: lighter; text-align: center;\">%1</h3>\n").arg("MENU")
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

void MainWindow::on_lineEdit_5_textChanged(const QString &arg1)
{
     ui->tab_menu->setModel(M.search2(arg1));
}
