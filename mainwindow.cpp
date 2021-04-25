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
#include <QSound>
#include <QMediaPlayer>
#include <QSound>
#include <QFileDialog>
#include <QList>

double firstNum;
bool user_is_typing_secondNumber=false;

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

 sound=new QSound(":/Files/music.wav");
    connect(ui->pushButton_0,SIGNAL(released()),this,SLOT(digit_pressed()));
    connect(ui->pushButton_1,SIGNAL(released()),this,SLOT(digit_pressed()));
    connect(ui->pushButton_2,SIGNAL(released()),this,SLOT(digit_pressed()));
    connect(ui->pushButton_3,SIGNAL(released()),this,SLOT(digit_pressed()));
    connect(ui->pushButton_4,SIGNAL(released()),this,SLOT(digit_pressed()));
    connect(ui->pushButton_5,SIGNAL(released()),this,SLOT(digit_pressed()));
    connect(ui->pushButton_6,SIGNAL(released()),this,SLOT(digit_pressed()));
    connect(ui->pushButton_7,SIGNAL(released()),this,SLOT(digit_pressed()));
    connect(ui->pushButton_8,SIGNAL(released()),this,SLOT(digit_pressed()));
    connect(ui->pushButton_9,SIGNAL(released()),this,SLOT(digit_pressed()));

    connect(ui->pushButton_plusMinus,SIGNAL(released()),this,SLOT(unary_operation_pressed()));
    connect(ui->pushButton_percent,SIGNAL(released()),this,SLOT(unary_operation_pressed()));

    connect(ui->pushButton_multiply,SIGNAL(released()),this,SLOT(binary_operation_pressed()));
    connect(ui->pushButton_add,SIGNAL(released()),this,SLOT(binary_operation_pressed()));
    connect(ui->pushButton_minus,SIGNAL(released()),this,SLOT(binary_operation_pressed()));
    connect(ui->pushButton_divide,SIGNAL(released()),this,SLOT(binary_operation_pressed()));

    ui->pushButton_add->setCheckable(true);
    ui->pushButton_multiply->setCheckable(true);
    ui->pushButton_divide->setCheckable(true);
    ui->pushButton_minus->setCheckable(true);
    //setFixedSize( 241,366);

    ui->lineEdit->setValidator(new QIntValidator(0, 9999999, this));
    ui->tab_ingredient->setModel(I.afficher());
     ui->tab_fournisseur->setModel(F.afficherfourniseeur());
     ui->tab_menu->setModel(M.affichermenu());
//configuration

     mMediaPlayer = new QMediaPlayer(this);

     connect(mMediaPlayer , &QMediaPlayer::positionChanged, [&](qint64 pos){

         ui->avancement_media->setValue(pos);

     });

     connect(mMediaPlayer , &QMediaPlayer::durationChanged, [&](qint64 dur){

         ui->avancement_media->setMaximum(dur);

     });


     player = new QMediaPlayer(this);
     player->setMedia(QUrl::fromLocalFile("D:/Users/dhiaa/Desktop/Wedding_planner_2A1/INTEGRATION/cant.wav"));

     player->setVolume(50);




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






/*void MainWindow::on_pushButton_5_clicked()
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


*/



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



/*void MainWindow::on_pushButton_clicked()
{
     ui->stackedWidget->setCurrentIndex(3);
}

void MainWindow::on_pushButton_2_clicked()
{
      ui->stackedWidget->setCurrentIndex(2);
}
*/
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
void MainWindow::on_gestion2_clicked()
{
     ui->stackedWidget->setCurrentIndex(3);
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


//calculatrice






void MainWindow::digit_pressed()
{

    qDebug() << "test";
    QPushButton * button = (QPushButton *)sender();
    QString input;
    double labelnumber;

    if((ui->pushButton_add->isChecked() || ui->pushButton_divide->isChecked() || ui->pushButton_minus->isChecked() || ui->pushButton_multiply->isChecked()) && (!user_is_typing_secondNumber))
    {
        user_is_typing_secondNumber=true;
        labelnumber = button->text().toDouble();
        input = QString::number(labelnumber,'g',15);
    }

    else
    {
        if(ui->label_19->text().contains(".") && button->text() == "0")
        {
            input=ui->label_19->text() + button->text();
        }
        else
        {
            labelnumber = (ui->label_19->text() + button->text()).toDouble();
            input = QString::number(labelnumber,'g',15);
        }
        labelnumber = (ui->label_19->text() + button->text()).toDouble();
    }
    ui->label_19->setText(input);
 user_is_typing_secondNumber=false;
}

void MainWindow::on_pushButton_dot_released()
{
    // check for appearance of decimal, exit function if there is one
         if(ui->label_19->text().contains(".")){

                 return;
         }
    ui->label_19->setText(ui->label_19->text() + ".");
    //check for extra decimal
    user_is_typing_secondNumber=false;
}

void MainWindow::unary_operation_pressed()
{
    QPushButton* button = (QPushButton *)sender();
    double labelnumber;
    QString input;

    if(button->text() == "+/-")
    {
        labelnumber = (ui->label_19->text()).toDouble();
        labelnumber *= -1;
        input = QString::number(labelnumber,'g',15);
        ui->label_19->setText(input);
    }

    else if(button->text() == "%")
    {
        labelnumber = (ui->label_19->text()).toDouble();
        labelnumber *= 0.01;
        input = QString::number(labelnumber,'g',15);
        ui->label_19->setText(input);
    }

    //error correction codse is still missing
   user_is_typing_secondNumber=false;
}

void MainWindow::on_pushButton_clear_released()
{
    ui->pushButton_add->setChecked(false);
    ui->pushButton_minus->setChecked(false);
    ui->pushButton_multiply->setChecked(false);
    ui->pushButton_divide->setChecked(false);
    user_is_typing_secondNumber=false;

    ui->label_19->setText("0");
}

void MainWindow::on_pushButton_equals_released()
{
    double labelnumber,secondNum;
    QString input;
    labelnumber=0;

    secondNum = ui->label_19->text().toDouble();

    if(ui->pushButton_add->isChecked())
    {
        labelnumber = firstNum + secondNum;
        ui->pushButton_add->setChecked(false);
    }

    else if(ui->pushButton_minus->isChecked())
    {
        labelnumber = firstNum - secondNum;
        ui->pushButton_minus->setChecked(false);
    }

    else if(ui->pushButton_multiply->isChecked())
    {
        labelnumber = firstNum * secondNum;
        ui->pushButton_multiply->setChecked(false);
    }

    else if(ui->pushButton_divide->isChecked())
    {
        labelnumber = firstNum / secondNum;
        ui->pushButton_divide->setChecked(false);
    }

    input = QString::number(labelnumber,'g',15);
    ui->label_19->setText(input);

    user_is_typing_secondNumber=false;
}

void MainWindow::binary_operation_pressed()
{
    QPushButton* button = (QPushButton *)sender();
    //double labelnumber;
    //QString input;

    firstNum = ui->label_19->text().toDouble();
    button->setChecked(true);
 user_is_typing_secondNumber=false;
}

void MainWindow::on_btnmodif_clicked()
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


void MainWindow::on_muteSound_clicked()
{
   sound->stop();
}
void MainWindow::on_actionSound_clicked()

   {
     sound->play();
   }
//configuration code

void MainWindow::on_ouvrir_media_clicked()
{


    QString filename = QFileDialog::getOpenFileName(this, "ouvrir");
    qDebug() << "Loading File"<< filename;

    if (filename.isEmpty())

    {

        return;

    }

    mMediaPlayer->setMedia(QUrl::fromLocalFile(filename));

    mMediaPlayer->setVolume(ui->volume_media->value());

    on_play_media_clicked();
}



void MainWindow::on_play_media_clicked()
{
    mMediaPlayer->play();
}

void MainWindow::on_pause_media_clicked()
{
    mMediaPlayer->pause();
}

void MainWindow::on_stop_media_clicked()
{
    mMediaPlayer->stop();
}

void MainWindow::on_mute_media_clicked()
{
    if (ui->mute_media->text() == "Mute")

    {

        mMediaPlayer->setMuted(true);

        ui->mute_media->setText("Unmute");

    }

    else {

        mMediaPlayer->setMuted(false);

        ui->mute_media->setText("Mute");

    }
}

void MainWindow::on_volume_media_valueChanged(int value)
{
    mMediaPlayer->setVolume(value);
}





//texteditor




void MainWindow::on_newfile_clicked()
{
    // Global referencing the current file that we are clearing
       currentFile.clear();

       // Clear the textEdit widget buffer
       ui->textEdit->setText(QString());
}

void MainWindow::on_copier_clicked()
{
      ui->textEdit->copy();
}

void MainWindow::on_coller_clicked()
{
    ui->textEdit->paste();
}

void MainWindow::on_couper_clicked()
{
    ui->textEdit->cut();

}

void MainWindow::on_redo_clicked()
{ ui->textEdit->redo();

}

void MainWindow::on_undo_clicked()
{
     ui->textEdit->undo();
}

void MainWindow::on_savefile_clicked()
{
    // Opens a dialog for saving a file
      QString fileName = QFileDialog::getSaveFileName(this, "Save as");

      // An object for reading and writing files
      QFile file(fileName);

      // Try to open a file with write only options
      if (!file.open(QFile::WriteOnly | QFile::Text)) {
          QMessageBox::warning(this, "Warning", "Cannot save file: " + file.errorString());
          return;
      }

      // Store the currentFile name
      currentFile = fileName;

      // Set the title for the window to the file name
      setWindowTitle(fileName);

      // Interface for writing text
      QTextStream out(&file);

      // Copy text in the textEdit widget and convert to plain text
      QString text = ui->textEdit->toPlainText();

      // Output to file
      out << text;

      // Close the file
      file.close();
}

void MainWindow::on_openfile_clicked()
{
    QString fileName = QFileDialog::getOpenFileName(this, "Open the file");

       // An object for reading and writing files
       QFile file(fileName);

       // Store the currentFile name
       currentFile = fileName;

       // Try to open the file as a read only file if possible or display a
       // warning dialog box
       if (!file.open(QIODevice::ReadOnly | QFile::Text)) {
           QMessageBox::warning(this, "Warning", "Cannot open file: " + file.errorString());
           return;
       }

       // Set the title for the window to the file name
       setWindowTitle(fileName);

       // Interface for reading text
       QTextStream in(&file);

       // Copy text in the string
       QString text = in.readAll();

       // Put the text in the textEdit widget
       ui->textEdit->setText(text);

       // Close the file
       file.close();
}

void MainWindow::on_clear_clicked()
{
    currentFile.clear();

    // Clear the textEdit widget buffer
    ui->textEdit->setText(QString());
}

void MainWindow::on_imprimer_clicked()
{
    QPrinter printer;

        // You'll put your printer name here
        printer.setPrinterName("Printer Name");

        // Create the print dialog and pass the name and parent
        QPrintDialog pDialog(&printer, this);

        if(pDialog.exec() == QDialog::Rejected){
            QMessageBox::warning(this, "Warning", "Cannot Access Printer");
            return;
        }

        // Send the text to the printer
        ui->textEdit->print(&printer);
}

void MainWindow::on_logout_button_clicked()
{

   // QApplication::quit();

}
