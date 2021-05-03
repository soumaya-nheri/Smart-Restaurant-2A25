#include "gestion_livraison.h"
#include "ui_gestion_livraison.h"
#include"historique.h"
#include<QDebug>
#include <QTextDocument>
#include <QTextStream>
#include <QDebug>
#include<QStringList>
#include<QTableView>
#include <QMessageBox>
#include <QPrintDialog>
#include <QTextStream>
#include <QPrinter>

gestion_livraison::gestion_livraison(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::gestion_livraison)
{
    ui->setupUi(this);
    ui->sw_main->setCurrentIndex(0);
        refrech();
        ui->cb_sort_livreur->addItem("Nom");
        ui->cb_sort_livreur->addItem("Prenom");
        ui->cb_sort_livreur->addItem("Salaire");
        ui->le_id_ajouter_livreur->setValidator( new QIntValidator(0, 1000, this) );
        ui->le_salaire_ajouter_livreur->setValidator( new QIntValidator(0, 1000000, this) );
        ui->le_salaire_modifer_livreur->setValidator( new QIntValidator(0, 1000000, this) );

        ui->le_id_liv_ajout->setValidator( new QIntValidator(0, 1000, this) );
        ui->cb_sort_liv->addItem("Adresse");
        ui->cb_sort_liv->addItem("Description");
        ui->cb_sort_liv->addItem("id_Commande");
        ui->cb_sort_liv->addItem("id_Livreur");
}
void gestion_livraison::refrech()
{
    ui->tv_livreur->setModel(l.afficher());
    l.fillComboBoxId(ui->cb_supp_livreur);
    l.fillComboBoxId(ui->cb_modfier_livreur);

    ui->tv_liv->setModel(L.afficher());
    l.fillComboBoxId(ui->cb_livreur_ajout);
    l.fillComboBoxId(ui->cb_livreur_modif);
    L.fillComboBoxId(ui->cb_liv_modif);
    L.fillComboBoxId(ui->cb_supp_liv);
    L.fillComboBoxCommande(ui->cb_commande_ajout);
    L.fillComboBoxCommande(ui->cb_commande_modif);


}

gestion_livraison::~gestion_livraison()
{
    delete ui;
}
void gestion_livraison::on_pb_livreur_clicked()
{
    ui->sw_main->setCurrentIndex(1);
}

void gestion_livraison::on_pushButton_2_clicked()
{
    ui->sw_main->setCurrentIndex(2);
}

void gestion_livraison::on_pb_ajouter_livreur_clicked()
{
    int id_livreur;
    Livreur _l_l(ui->le_id_ajouter_livreur->text().toInt(), ui->le_nom_ajouter_livreur->text(), ui->le_prenom_ajouter_livreur->text(), ui->le_salaire_ajouter_livreur->text().toInt());
    if(_l_l.ajouter()) {
        ui->le_id_ajouter_livreur->setText("");
        ui->le_nom_ajouter_livreur->setText("");
        ui->le_prenom_ajouter_livreur->setText("");
        ui->le_salaire_ajouter_livreur->setText("");
        refrech();
        QFile file("C:/Users/user/Desktop/int/Smart-Restaurant-2A25/his/his.txt");
        if(!file.open(QIODevice::WriteOnly | QIODevice::Append | QIODevice::Text))
            return;
        QTextStream cout(&file);
        QString id_string= QString::number(id_livreur);
        QString message2="\n livreur a ete supprimé sous le code"+id_string+"";
        cout << message2;

        QMessageBox::information(nullptr, QObject::tr("Ajouter un livreur"),
                           QObject::tr("Ajout avec succès !.\n"
                                       "Click Close to exit."), QMessageBox::Close);
    }
    else {
        QMessageBox::critical(nullptr, QObject::tr("Ajouter un livreur"),
                           QObject::tr("Erreur!.\n"
                                       "Click Close to exit."), QMessageBox::Close);
    }
}

void gestion_livraison::on_pb_modifer_livreur_clicked()
{
    int id_livreur;
    Livreur _l_l(ui->cb_modfier_livreur->currentText().toInt(), ui->le_nom_modfier_livreur->text(), ui->le_prenom_modifier_livreur->text(), ui->le_salaire_modifer_livreur->text().toInt());
    if(_l_l.modifier()) {
        ui->le_nom_modfier_livreur->setText("");
        ui->le_prenom_modifier_livreur->setText("");
        ui->le_salaire_modifer_livreur->setText("");
        refrech();
        QFile file("C:/Users/user/Desktop/int/Smart-Restaurant-2A25/his/his.txt");
        if(!file.open(QIODevice::WriteOnly | QIODevice::Append | QIODevice::Text))
            return;
        QTextStream cout(&file);
        QString id_string= QString::number(id_livreur);
        QString message2="\n livreur a ete modifier sous le code"+id_string+"";
        cout << message2;

        QMessageBox::information(nullptr, QObject::tr("Modifier un livreur"),
                           QObject::tr("Modifie avec succès !.\n"
                                       "Click Close to exit."), QMessageBox::Close);
    }
    else {
        QMessageBox::critical(nullptr, QObject::tr("Modifier un livreur"),
                           QObject::tr("Erreur!.\n"
                                       "Click Close to exit."), QMessageBox::Close);
    }
}

void gestion_livraison::on_pb_supp_livreur_clicked()
{

    int id_livreur;
    Livreur _l_l;
    _l_l.setId(ui->cb_supp_livreur->currentText().toInt());
    if(_l_l.supprimer()) {
        refrech();
        foreach(QLineEdit* le, findChildren<QLineEdit*>()) {
                             le->clear();}
                        QFile file("C:/Users/user/Desktop/int/Smart-Restaurant-2A25/his/his.txt");
                        if(!file.open(QIODevice::WriteOnly | QIODevice::Append | QIODevice::Text))
                            return;
                        QTextStream cout(&file);
                        QString id_string= QString::number(id_livreur);
                        QString message2="\n livreur a ete supprimé sous le code"+id_string+"";
                        cout << message2;

        QMessageBox::information(nullptr, QObject::tr("Supprimer un livreur"),
                           QObject::tr("Supprime avec succès !.\n"
                                       "Click Close to exit."), QMessageBox::Close);
    }
    else {
        QMessageBox::critical(nullptr, QObject::tr("Supprimer un livreur"),
                           QObject::tr("Erreur!.\n"
                                       "Click Close to exit."), QMessageBox::Close);
    }
}

void gestion_livraison::on_le_search_livreur_textChanged(const QString &arg1)
{
    ui->tv_livreur->setModel(l.search(arg1));
}

void gestion_livraison::on_cb_sort_livreur_currentTextChanged(const QString &arg1)
{
    ui->tv_livreur->setModel(l.sort(arg1));
}

void gestion_livraison::on_pb_liv_ajout_clicked()
{
    Liv ___l(ui->le_id_liv_ajout->text().toInt(),
             ui->le_adresse_liv_ajout->text(),
             ui->te_des_liv_ajout->toPlainText(),
             ui->cb_commande_ajout->currentText().toInt(),
             ui->cb_livreur_ajout->currentText().toInt()
             );
    if(___l.ajouter()) {
        refrech();
        ___l.sendMail();

        QMessageBox::information(nullptr, QObject::tr("Ajouter une Livraison"),
                           QObject::tr("Ajout avec succès !.\n"
                                       "Click Close to exit."), QMessageBox::Close);
    }
    else {
        QMessageBox::critical(nullptr, QObject::tr("Ajouter une Livraison"),
                           QObject::tr("Erreur!.\n"
                                       "Click Close to exit."), QMessageBox::Close);
    }
}

void gestion_livraison::on_pb_liv_modif_clicked()
{
    Liv ___l(ui->cb_liv_modif->currentText().toInt(),
             ui->le_adresse_liv_modif->text(),
             ui->te_des_liv_modif->toPlainText(),
             ui->cb_commande_modif->currentText().toInt(),
             ui->cb_livreur_modif->currentText().toInt()
             );
    if(___l.modifier()) {
        refrech();

        QMessageBox::information(nullptr, QObject::tr("Modifier une Livraison"),
                           QObject::tr("Modif avec succès !.\n"
                                       "Click Close to exit."), QMessageBox::Close);
    }
    else {
        QMessageBox::critical(nullptr, QObject::tr("Modifier une Livraison"),
                           QObject::tr("Erreur!.\n"
                                       "Click Close to exit."), QMessageBox::Close);
    }
}

void gestion_livraison::on_pb_supp_liv_clicked()
{
    Liv ___l;
    ___l.setId(ui->cb_supp_liv->currentText().toInt());
    if(___l.supprimer()) {
        refrech();

        QMessageBox::information(nullptr, QObject::tr("Supprimer une Livraison"),
                           QObject::tr("Supprim avec succès !.\n"
                                       "Click Close to exit."), QMessageBox::Close);
    }
    else {
        QMessageBox::critical(nullptr, QObject::tr("Supprimer une Livraison"),
                           QObject::tr("Erreur!.\n"
                                       "Click Close to exit."), QMessageBox::Close);
    }
}

void gestion_livraison::on_le_search_liv_textChanged(const QString &arg1)
{
    ui->tv_liv->setModel(L.search(arg1));
}

void gestion_livraison::on_cb_sort_liv_currentTextChanged(const QString &arg1)
{
    ui->tv_liv->setModel(L.sort(arg1));
}
void gestion_livraison::ouvrirlivraison()
{
    QFile file ("C:/Users/user/Desktop/int/Smart-Restaurant-2A25/his/his.txt");
    if (!file.open(QIODevice::ReadOnly))
    {
        QMessageBox::information(0,"info",file.errorString());
    }
    QTextStream in (&file);
   ui->textHisto->setText(in.readAll());

}
void gestion_livraison::on_buttonHis_clicked()
{
    QString searchString = ui->searchHis->text();
           QTextDocument *document = ui->textHisto->document();
ouvrirlivraison();           bool found = false;

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



void gestion_livraison::on_pdf_clicked()
{
    QTableView tv_livreur;
    QSqlQueryModel * Modal=new  QSqlQueryModel();

    QSqlQuery qry;
     qry.prepare("SELECT * FROM livreur");
     qry.exec();
     Modal->setQuery(qry);
    tv_livreur.setModel(Modal);
     QString strStream;
     QTextStream out(&strStream);

     const int rowCount =tv_livreur.model()->rowCount();
     const int columnCount =  tv_livreur.model()->columnCount();

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
         if (!tv_livreur.isColumnHidden(column))
             out << QString("<th>%1</th>").arg(tv_livreur.model()->headerData(column, Qt::Horizontal).toString());
     out << "</tr></thead>\n";
     for (int row = 0; row < rowCount; row++) {
             out << "<tr>";
             for (int column = 0; column < columnCount; column++) {
                 if (!tv_livreur.isColumnHidden(column)) {
                     QString data = tv_livreur.model()->data(tv_livreur.model()->index(row, column)).toString().simplified();
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


void gestion_livraison::on_Translate_clicked()
{
    if(ui->Translate->isChecked())
    {
        ui->tw_livraur->setTabText(0,"ADD DELIVERY MAN");
        ui->tw_livraur->setTabText(1,"DISPLAY DELIVERY MAN");
        ui->tw_livraur->setTabText(2,"DELETE DELIVERY MAN");
        ui->tw_livraur->setTabText(3,"EDIT DELIVERY MAN");
         ui->tw_livraur->setTabText(4,"HISTORICAL");
        ui->label_3->setText(tr("ID"));
         ui->label_4->setText(tr("NAME"));
         ui->label_5->setText(tr("FIRST NAME"));
        ui->label_6->setText(tr("SALARY"));
        ui->pdf->setText(tr("PRINT"));
        ui->pb_modifer_livreur->setText(tr("edit"));
         ui->pb_ajouter_livreur->setText(tr("ADD"));
        ui->label_7->setText(tr("id"));
        ui->label_10->setText(tr("name"));
        ui->label_9->setText(tr("first name"));
        ui->label_6->setText(tr("salary"));
        ui->label_7->setText(tr("id"));
        ui->label_8->setText(tr("salary"));
         ui->pb_supp_livreur->setText(tr("delete"));
         ui->label_11->setText(tr("name"));
         ui->label_12->setText(tr(" first name"));
         ui->buttonHis->setText(tr("search historic"));
        ui->Translate->setText(tr("Frensh Version"));
    }

else
        {
        ui->tw_livraur->setTabText(0,"AJOUTER LIVREUR ");
        ui->tw_livraur->setTabText(1,"AFFICHER LIVREUR");
        ui->tw_livraur->setTabText(2,"SUPPRIMER LIVREUR");
        ui->tw_livraur->setTabText(3,"MODIFIER LIVREUR");
         ui->tw_livraur->setTabText(4,"HISTORIQUES");
        ui->label_3->setText(tr("id"));
         ui->label_4->setText(tr("nom"));
         ui->label_5->setText(tr("prenom"));
        ui->label_6->setText(tr("salaire"));
        ui->pdf->setText(tr("imprimer"));
        ui->pb_modifer_livreur->setText(tr("modifier"));
         ui->pb_ajouter_livreur->setText(tr("ajouter"));
        ui->label_7->setText(tr("id"));
        ui->label_10->setText(tr("nom"));
        ui->label_9->setText(tr("prenom"));
        ui->label_5->setText(tr("prenom"));
        ui->label_7->setText(tr("id"));
        ui->label_8->setText(tr("salaire"));
         ui->pb_supp_livreur->setText(tr("supprimer"));
         ui->label_11->setText(tr("name"));
         ui->label_12->setText(tr(" prenom"));
         ui->buttonHis->setText(tr("recherche his"));
        ui->Translate->setText(tr("Frensh Version"));

        }
}
