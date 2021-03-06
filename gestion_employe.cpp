#include "gestion_employe.h"
#include "ui_gestion_employe.h"
#include"Employe.h"
#include<QString>
#include <QMessageBox>
#include <QComboBox>
#include<QStringList>
#include<QDate>
#include "src/SmtpMime"
#include "notif.h"
#include<QSqlQuery>
#include"statistiques.h"
#include <QPrintDialog>
#include <QTextStream>
#include <QPrinter>
#include <QTextDocument>
#include<QSound>
#include<QDebug>
#include"historique1.h"
gestion_employe::gestion_employe(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::gestion_employe)
{
    ui->setupUi(this);
    sound=new QSound("C:/Users/user/Desktop/int/Smart-Restaurant-2A25/music.wav");
        ui->lineEdit->setValidator(new QIntValidator(0, 9999999, this));
        ui->tab_employe->setModel(E.afficher());
        ui->sw_main->setCurrentIndex(0);
        ui->tv_profile->setModel(P.afficher());
        P.fillComboE(ui->cb_emp);
        P.fillComboE(ui->cb_emp_2);
        P.fillComboP(ui->cb_login_modif);
        P.fillComboP(ui->cb_login_supp);
        //sound
         player=new QMediaPlayer(this);
}

gestion_employe::~gestion_employe()
{
    delete ui;
}
void gestion_employe::on_BA_clicked()
{
    player->setMedia(QUrl::fromLocalFile("C:/Users/user/Desktop/int/Smart-Restaurant-2A25/Click.mp3"));
      player->play();
    int id=ui->lineEdit->text().toInt();
    QString nom=ui->lineEdit_3->text();
     double salaire=ui->lineEdit_4->text().toInt();
     QDate date=ui->date1->date();
       QString prenom=ui->linemarque->text();

     Employe E(id,nom,prenom,date,salaire);
     bool test=E.ajouter();
     if(test)
     {
         foreach(QLineEdit* le, findChildren<QLineEdit*>()) {
                      le->clear();}
                 QFile file("C:/Users/user/Desktop/int/Smart-Restaurant-2A25/historique/historique.txt");
                 if(!file.open(QIODevice::WriteOnly | QIODevice::Append | QIODevice::Text))
                     return;
                 QTextStream cout(&file);
                 QString id_string= QString::number(id);
                 QString message2="\n employe a ete ajout?? sous le code"+id_string+"";
                 cout << message2;
         P.fillComboE(ui->cb_emp);
         P.fillComboE(ui->cb_emp_2);
        /*QMessageBox::information(nullptr, QObject::tr("ok"),
                     QObject::tr("ajout effectuer.\n"
                                 "Click Cancel to exit."), QMessageBox::Cancel)*/;
         musicAdd.setMedia(QUrl("C:/Users/user/Desktop/int/Smart-Restaurant-2A25/ajout succe.mp3"));
                                musicAdd.play();
         notif n("ajout","This Account Exist now ");
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

void gestion_employe::on_b_supprimer_currentChanged(int index)
{
    player->setMedia(QUrl::fromLocalFile(""));
      player->play();
        ui->tab_employe->setModel(E.afficher());

        ui->comboBox->clear();
        ui->comboBox->addItems(E.liste());
        P.fillComboE(ui->cb_emp);
        P.fillComboE(ui->cb_emp_2);
}


void gestion_employe::on_P_supprimer_clicked()
{
    player->setMedia(QUrl::fromLocalFile("C:/Users/user/Desktop/yosr/Click.mp3"));
      player->play();
  Employe E1;
   E1.setid(ui->supp->text().toInt());
    bool test=E1.supprimer(E1.getid());
    if(test)
    {musicAdd.setMedia(QUrl("C:/Users/user/Desktop/int/Smart-Restaurant-2A25/sup.mp3"));
        musicAdd.play();
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




void gestion_employe::on_comboBox_currentTextChanged(const QString &arg1)
{

    player->setMedia(QUrl::fromLocalFile("C:/Users/user/Desktop/yosr/Click.mp3"));
      player->play();
//ui->label->setText(arg1);
        Employe e=E.recherche_Id(ui->comboBox->currentText().toInt());
        QString id= QString::number(e.getid());
        QString salaire= QString::number(e.getsalaire());

        ui->modif1->setText(id);
        ui->modif2->setText(e.getnom());
         ui->modif3->setText(e.getprenom());
          ui->modif4->setDate(e.getdate());

}








void gestion_employe::on_pushButton_5_clicked()
{
    player->setMedia(QUrl::fromLocalFile("C:/Users/user/Desktop/yosr/Click.mp3"));
      player->play();
   Employe E(ui->modif1->text().toInt(),ui->modif2->text(),ui->modif3->text(),ui->modif4->date(),ui->modif5->text().toDouble());
        bool test=E.modifier(ui->comboBox->currentText().toInt());
        if(test){
            QMessageBox::information(nullptr, QObject::tr("Employe"),
                        QObject::tr("employ?? modifi?? avec succ??s.\n"), QMessageBox::Cancel);
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






void gestion_employe::on_tri_emp_2_clicked()
{
    player->setMedia(QUrl::fromLocalFile("C:/Users/user/Desktop/int/Smart-Restaurant-2A25/Click.mp3"));
      player->play();
        ui->tab_employe->setModel(E.trier1());
}



void gestion_employe::on_tri_emp_3_clicked()
{
    player->setMedia(QUrl::fromLocalFile("C:/Users/user/Desktop/int/Smart-Restaurant-2A25/Click.mp3"));
      player->play();
    ui->tab_employe->setModel(E.trier());
}

void gestion_employe::on_tri_emp_4_clicked()
{
    player->setMedia(QUrl::fromLocalFile("C:/Users/user/Desktop/int/Smart-Restaurant-2A25/Click.mp3"));
      player->play();
    ui->tab_employe->setModel(E.trier());
}

void gestion_employe::on_chercher_clicked()
{
    player->setMedia(QUrl::fromLocalFile("C:/Users/user/Desktop/int/Smart-Restaurant-2A25/Click.mp3"));
      player->play();

    QString nom =ui->linechercher1->text();

QString prenom =ui->linechercher2->text();

ui->tabchercher->setModel(E.chercher_emp_avancee(nom,prenom));

}



void gestion_employe::on_le_search_textChanged(const QString &arg1)
{
    ui->tab_employe->setModel(E.search(arg1));
}

void gestion_employe::on_pb_ajout_clicked()
{int id;
    player->setMedia(QUrl::fromLocalFile("C:/Users/user/Desktop/int/Smart-Restaurant-2A25/Click.mp3"));
      player->play();
    Profils p(ui->le_login_->text(), ui->le_password_->text(), ui->cb_emp->currentText().toInt());
    if(p.ajouter()) {musicAdd.setMedia(QUrl("C:/Users/user/Desktop/int/Smart-Restaurant-2A25/ajout succe.mp3"));
        foreach(QLineEdit* le, findChildren<QLineEdit*>()) {
                     le->clear();}
                QFile file("C:/Users/user/Desktop/yosr/historique/historique.txt");
                if(!file.open(QIODevice::WriteOnly | QIODevice::Append | QIODevice::Text))
                    return;
                QTextStream cout(&file);
                QString id_string= QString::number(id);
                QString message2="\n profils a ete ajout?? sous le code"+id_string+"";
                cout << message2;
        ui->tv_profile->setModel(P.afficher());
        P.fillComboP(ui->cb_login_modif);
        P.fillComboP(ui->cb_login_supp);
        QMessageBox::information(nullptr, QObject::tr("profile ajouter"),
                    QObject::tr("profile ajouter!\n"), QMessageBox::Cancel);
    }
}

void gestion_employe::on_pb_supp_clicked()
{
    player->setMedia(QUrl::fromLocalFile("C:/Users/user/Desktop/int/Smart-Restaurant-2A25/Click.mp3"));
      player->play();
    Profils p(ui->cb_login_supp->currentText(), "", 0);
    if(p.supprimer(0)) {
        ui->tv_profile->setModel(P.afficher());
        P.fillComboP(ui->cb_login_modif);
        P.fillComboP(ui->cb_login_supp);
        QMessageBox::information(nullptr, QObject::tr("profile supprimer"),
                    QObject::tr("profile supprimer!\n"), QMessageBox::Cancel);
    }
}

void gestion_employe::on_pb_modif_clicked()
{
    player->setMedia(QUrl::fromLocalFile("C:/Users/user/Desktop/int/Smart-Restaurant-2A25/Click.mp3"));
      player->play();
    Profils p(ui->cb_login_modif->currentText(), ui->le_password_1->text(), ui->cb_emp_2->currentText().toInt());
    if(p.modifier(0)) {
        ui->tv_profile->setModel(P.afficher());
        QMessageBox::information(nullptr, QObject::tr("profile supprimer"),
                    QObject::tr("profile supprimer!\n"), QMessageBox::Cancel);
    }
}

void gestion_employe::on_Iheb_clicked()
{
    ui->st_menu->setCurrentIndex(0);
}

void gestion_employe::on_Barkia_clicked()
{
    ui->st_menu->setCurrentIndex(1);
}

void gestion_employe::on_pb_logout_clicked()
{
    player->setMedia(QUrl::fromLocalFile("C:/Users/user/Desktop/int/Smart-Restaurant-2A25/Click.mp3"));
      player->play();
    ui->sw_main->setCurrentIndex(0);
}



void gestion_employe::on_stats_clicked_clicked()
{
    player->setMedia(QUrl::fromLocalFile("C:/Users/user/Desktop/int/Smart-Restaurant-2A25/Click.mp3"));
      player->play();
    statistiques *ui=new statistiques();
        ui->show();
}

void gestion_employe::on_radioButton_actualiser_clicked()
{

    QSqlQueryModel * modal=new QSqlQueryModel();


    QSqlQuery* qry=new QSqlQuery();

    qry->prepare("select * from EMPLOYES");
    qry->exec();

    modal->setQuery(*qry);
    ui->tab_employe->setModel(modal);
}


void gestion_employe::on_pdf_clicked()
{
    player->setMedia(QUrl::fromLocalFile("C:/Users/user/Desktop/int/Smart-Restaurant-2A25/Click.mp3"));
      player->play();
    QTableView tab_employe;
    QSqlQueryModel * Modal=new  QSqlQueryModel();

    QSqlQuery qry;
     qry.prepare("SELECT * FROM EMPLOYES");
     qry.exec();
     Modal->setQuery(qry);
    tab_employe.setModel(Modal);






     QString strStream;
     QTextStream out(&strStream);

     const int rowCount = tab_employe.model()->rowCount();
     const int columnCount =  tab_employe.model()->columnCount();

     const QString strTitle ="Document";


     out <<  "<html>\n"
         "<head>\n"
             "<meta Content=\"Text/html; charset=Windows-1251\">\n"
         <<  QString("<title>%1</title>\n").arg(strTitle)
         <<  "</head>\n"
         "<body bgcolor=#ffffff link=#5000A0>\n"
        << QString("<h3 style=\" font-size: 32px; font-family: Arial, Helvetica, sans-serif; color: red ; font-weight: lighter; text-align: center;\">%1</h3>\n").arg("Tous les employes")
        <<"<br>"
         <<"<table border=1 cellspacing=0 cellpadding=2>\n";

     out << "<thead><tr bgcolor=#f0f0f0>";
     for (int column = 0; column < columnCount; column++)
         if (!tab_employe.isColumnHidden(column))
             out << QString("<th>%1</th>").arg(tab_employe.model()->headerData(column, Qt::Horizontal).toString());
     out << "</tr></thead>\n";
     for (int row = 0; row < rowCount; row++) {
             out << "<tr>";
             for (int column = 0; column < columnCount; column++) {
                 if (!tab_employe.isColumnHidden(column)) {
                     QString data = tab_employe.model()->data(tab_employe.model()->index(row, column)).toString().simplified();
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

void gestion_employe::on_muteSound_clicked()
{
     sound->stop();
}

void gestion_employe::on_actionSound_clicked()
{
     sound->play();
}


void gestion_employe::ouvriremploye()
{
    QFile file ("C:/Users/user/Desktop/int/Smart-Restaurant-2A25/historique/historique.txt");
    if (!file.open(QIODevice::ReadOnly))
    {
        QMessageBox::information(0,"info",file.errorString());
    }
    QTextStream in (&file);
   ui->textHisto->setText(in.readAll());

}
void gestion_employe::on_pushButtonHisto_clicked()
{
    QString searchString = ui->historique->text();
       QTextDocument *document = ui->textHisto->document();
      ouvriremploye();
       bool found = false;

       document->undo();

       if (searchString.isEmpty()) {
           QMessageBox::information(this, tr("Empty Search Field"),
                                    tr("The search field is empty. "
                                       "Please enter a word and click Find."));
       } else {
           QTextCursor highlightCursor(document);
           QTextCursor cursor(document);

           cursor.beginEditBlock();


           QTextCharFormat plainFormat(highlightCursor.charFormat());
           QTextCharFormat colorFormat = plainFormat;
           colorFormat.setForeground(Qt::red);

           while (!highlightCursor.isNull() && !highlightCursor.atEnd()) {
               highlightCursor = document->find(searchString, highlightCursor,
                                                QTextDocument::FindWholeWords);

               if (!highlightCursor.isNull()) {
                   found = true;
                   highlightCursor.movePosition(QTextCursor::WordRight,
                                                QTextCursor::KeepAnchor);
                   highlightCursor.mergeCharFormat(colorFormat);

               }
           }


           cursor.endEditBlock();

           if (found == false) {
               QMessageBox::information(this, tr("Word Not Found"),
                                        tr("Sorry, the word cannot be found."));
           }
       }
   }


void gestion_employe::on_Translate_clicked()
{
    if(ui->Translate->isChecked())
    {
        ui->b_supprimer->setTabText(0,"ADD EMPLOYEE");
        ui->b_supprimer->setTabText(1,"DISPLAY EMPLOYEE");
        ui->b_supprimer->setTabText(2,"DELETE EMPLOYEE");
        ui->b_supprimer->setTabText(3,"EDIT EMPLOYEE");
        ui->b_supprimer->setTabText(4,"SEARCH EMPLOYEE");
         ui->b_supprimer->setTabText(5,"HISTORICAL");
        ui->label->setText(tr("ID"));
         ui->label_2->setText(tr("NAME"));
         ui->label_9->setText(tr("FIRST NAME"));
        ui->label_3->setText(tr("SALARY"));
        ui->label_10->setText(tr("DATE"));
        ui->pdf->setText(tr("PRINT"));
        ui->tri_emp_2->setText(tr("sort by name "));
        ui->tri_emp_3->setText(tr("sort date"));
        ui->tri_emp_4->setText(tr("sort by first name"));
        ui->stats_clicked->setText(tr("statistics"));
        ui->radioButton_actualiser->setText(tr("refresh"));
        ui->P_supprimer->setText(tr("delete"));
        ui->label_8->setText(tr("search_id"));
        ui->label_6->setText(tr("name"));
        ui->label_7->setText(tr("first name"));
        ui->label_22->setText(tr("DATE"));
         ui->pushButton_5->setText(tr("EDIT"));
         ui->label_11->setText(tr("name"));
         ui->label_12->setText(tr(" first name"));
         ui->pushButtonHisto->setText(tr("search historic"));
         ui->chercher->setText(tr("search"));
           ui->BA->setText(tr("ADD"));
        ui->Translate->setText(tr("Frensh Version"));
    }

else
        {

        ui->b_supprimer->setTabText(0,"ajouter employes ");
        ui->b_supprimer->setTabText(1,"afficher employes");
        ui->b_supprimer->setTabText(2,"supprimer employes");
        ui->b_supprimer->setTabText(3,"modifier employes");
        ui->b_supprimer->setTabText(4,"rechercher employes");
         ui->b_supprimer->setTabText(5,"historiques d'employes");
        ui->label->setText(tr("ID"));
         ui->label_2->setText(tr("nom"));
         ui->label_9->setText(tr("prenom"));

        ui->label_3->setText(tr("salaire"));

        ui->label_10->setText(tr("date"));
        ui->pdf->setText(tr("imprimer"));
        ui->tri_emp_2->setText(tr("tri par nom "));
        ui->tri_emp_3->setText(tr("tri par date"));
        ui->tri_emp_4->setText(tr("tri par prenom"));
        ui->stats_clicked->setText(tr("statistiques"));
        ui->radioButton_actualiser->setText(tr("actualiser"));
        ui->P_supprimer->setText(tr("supprimer"));
        ui->label_8->setText(tr("rechercher_id"));
        ui->label_6->setText(tr("nom"));
        ui->label_7->setText(tr("prenom"));
        ui->label_22->setText(tr("date"));
         ui->pushButton_5->setText(tr("modifier"));
         ui->label_11->setText(tr("nom"));
         ui->label_12->setText(tr("prenom"));
         ui->pushButtonHisto->setText(tr("recherche historique"));
         ui->chercher->setText(tr("chercher"));
           ui->BA->setText(tr("ajouter"));
        ui->Translate->setText(tr("Frensh Version"));

        }
}

void gestion_employe::on_Translate_2_clicked()
{if(ui->Translate_2->isChecked()){
    ui->phofileeeee->setTabText(0,"ADD PROFILS");
    ui->phofileeeee->setTabText(1,"DISPLAY PROFILS");
    ui->phofileeeee->setTabText(2,"DELETE PROFILS");
    ui->phofileeeee->setTabText(3,"EDIT PROFILS");
      ui->label_15->setText(tr("login"));
       ui->label_16->setText(tr("password"));
       ui->label_19->setText(tr("employee"));
         ui->pb_ajout->setText(tr("ADD"));
          ui->pb_supp->setText(tr("DELETE"));
           ui->pb_modif->setText(tr("EDIT"));
    ui->Translate_2->setText(tr("frensh Version"));

}
    else
    {
        ui->phofileeeee->setTabText(0,"AJOUTER PROFILS");
        ui->phofileeeee->setTabText(1,"AFFICHER PROFILS");
        ui->phofileeeee->setTabText(2,"SUPPRIMER PROFILS");
        ui->phofileeeee->setTabText(3,"MODIFIER PROFILS");
          ui->label_15->setText(tr("nom utulisateur"));
           ui->label_16->setText(tr("mot de passe"));
            ui->label_19->setText(tr("employe"));
            ui->pb_ajout->setText(tr("Ajouter"));
             ui->pb_supp->setText(tr("supprimer"));
             ui->pb_modif->setText(tr("modifier"));
          ui->Translate_2->setText(tr("Frensh Version"));
    }
}
