#include "promointer.h"
#include "ui_promointer.h"
#include <QMessageBox>

promointer::promointer(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::promointer)
{
    ui->setupUi(this);

    setWindowTitle("Gestion promotion");

    //Column size
    ui->tablemodifier->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);

    refresh();
    //refresh combobox + tableau

    QStringList list;
    list << "" << "MENU" << "PRIXAV" << "POURCENTAGE" << "PRIXAP" << "DUREE";

    ui->tricombo->addItems(list);
    qDebug()<<    ui->tricombo->currentText();


}

void promointer::refresh()
{

    //remplir tableau
    if(ui->tricombo->currentText()=="")
    ui->tablemodifier->setModel(tmppromo.afficher());

    ui->comboBox_supp->setModel(tmppromo.remplircombopromo());
    ui->comboBox_modif->setModel(tmppromo.remplircombopromo());
}


promointer::~promointer()
{
    delete ui;
}

void promointer::on_AjouterBouton_clicked()
{
    promotion promo(ui->nomprod->text(),ui->Prixav->text().toFloat(),ui->Pourcentage->text().toFloat(),ui->Prixap->text().toFloat(),ui->duree->text().toUInt());
    bool test = promo.ajouter();
    if(test){
        QMessageBox::information(nullptr, QObject::tr("Ajouter une promotion"),
        QObject::tr("Promotion ajouté.\n" "Click Cancel to exit."), QMessageBox::Cancel);

        }
          else
          {
              QMessageBox::critical(nullptr, QObject::tr("Ajouter une promotion"),
                          QObject::tr("Erreur !.\n"
                                      "Click Cancel to exit."), QMessageBox::Cancel);
          }
    //refresh combobox + tableau
    refresh();


}

void promointer::on_comboBox_modif_currentIndexChanged(const QString &arg1)
{
    QSqlQuery query;


    query =tmppromo.request(ui->comboBox_modif->currentText());

    if(query.exec())
    {
        while(query.next())
        {
            ui->nommodif->setText(query.value(1).toString());
            ui->anciepmodif->setText(query.value(2).toString());
            ui->pourcentagemodif->setText(query.value(3).toString());
            ui->nouvpmodif->setText(query.value(4).toString());
            ui->dureemodif->setText(query.value(5).toString());
        }
    }

}

void promointer::on_comboBox_supp_currentIndexChanged(const QString &arg1)
{
    QSqlQuery query;


    query =tmppromo.request(ui->comboBox_supp->currentText());

    if(query.exec())
    {
        while(query.next())
        {
            ui->Nomval->setText(query.value(1).toString());
            ui->anciepval->setText(query.value(2).toString());
            ui->pourcentageval->setText(query.value(3).toString());
            ui->nouvpval->setText(query.value(4).toString());
            ui->dureeval->setText(query.value(5).toString());
        }
    }

}

void promointer::on_rechercheav_cursorPositionChanged(int arg1, int arg2)
{

    ui->tablemodifier->setModel(tmppromo.afficherecherche(ui->rechercheav->text()));

    QString test =ui->rechercheav->text();

    if(test=="")
    {
        ui->tablemodifier->setModel(tmppromo.afficher());//refresh
    }

}

void promointer::on_Pourcentage_cursorPositionChanged()
{
    float aux= ui->Prixav->text().toFloat();

    float pourcent = ui->Pourcentage->text().toFloat();

    float tmp = aux - aux/100 * pourcent;

    ui->Prixap->setText(QString::number(tmp));
}

void promointer::on_pourcentagemodif_cursorPositionChanged(int arg1, int arg2)
{
    float aux= ui->anciepmodif->text().toFloat();

    float pourcent = ui->pourcentagemodif->text().toFloat();

    float tmp = aux - aux/100 * pourcent;

    ui->nouvpmodif->setText(QString::number(tmp));

}

void promointer::on_comboBox_tri_currentIndexChanged(const QString &arg1)
{
    if(!(ui->tricombo->currentText()==""))
    {
        ui->tablemodifier->setModel(tmppromo.triafficher(ui->tricombo->currentText()));
    }
}

//TRI
void promointer::on_tricombo_currentIndexChanged(const QString &arg1)
{
    if(!(ui->tricombo->currentText()==""))
        ui->tablemodifier->setModel(tmppromo.triafficher(ui->tricombo->currentText()));
    else
        ui->tablemodifier->setModel(tmppromo.afficher());



}

//BOUTON MODIFIER
void promointer::on_btn_modif_clicked()
{
    if((ui->pourcentagemodif->text() != "") &&(ui->dureemodif->text() != ""))
    {
        if(tmppromo.modifier(ui->nommodif->text(),ui->anciepmodif->text(),ui->pourcentagemodif->text(),ui->nouvpmodif->text(),ui->dureemodif->text(),ui->comboBox_modif->currentText()))
        {
            //refresh combobox + tableau
            refresh();
            QMessageBox::information(nullptr, QObject::tr("Modifier une promotion"),
            QObject::tr("Promo modifier.\n" "Click Cancel to exit."), QMessageBox::Cancel);

            }
              else
              {
                  QMessageBox::critical(nullptr, QObject::tr("Modifier une promotion"),
                              QObject::tr("Erreur !.\n"
                                          "Click Cancel to exit."), QMessageBox::Cancel);
              }


        }
    }


void promointer::on_SupprimerBouton_clicked()
{
    QMessageBox::StandardButton reply =QMessageBox::question(this,
                          "Supprimer","Voulez-vous vraiment supprimer ?",
                          QMessageBox::Yes | QMessageBox::No);
    if(reply == QMessageBox::Yes)
    {
        bool test=tmppromo.supprimer(ui->comboBox_supp->currentText().toInt());
        if(test)
        {
            //refresh combobox + tableau
            refresh();

            //NOTIFICATION
            QMessageBox::information(nullptr, QObject::tr("Supprimer une promotion"),
            QObject::tr("Promo suprimer.\n" "Click Cancel to exit."), QMessageBox::Cancel);

            }
        else
        {
            QMessageBox::critical(this, QObject::tr("Supprimer un Evenement"),
                        QObject::tr("Erreur !.\n"
                                    "Click Cancel to exit."), QMessageBox::Cancel);
        }

    }

}

void promointer::on_PDF_clicked()
{
    QString strStream;
               QTextStream out(&strStream);
               const int rowCount = ui->tablemodifier->model()->rowCount();
               const int columnCount =ui->tablemodifier->model()->columnCount();

               out <<  "<html>\n"
                       "<head>\n"
                       "<meta Content=\"Text/html; charset=Windows-1251\">\n"
                       <<  QString("<title>%1</title>\n").arg("eleve")
                       <<  "</head>\n"
                       "<body bgcolor=#F4B8B8 link=#5000A0>\n"
                          // "<img src='C:/Users/ksemt/Desktop/final/icon/logo.webp' width='20' height='20'>\n"
                           "<img src='C:/Users/DeLL/Desktop/logooo.png' width='100' height='100'>\n"
                           "<h1>   Liste des Session </h1>"
                            "<h1>  </h1>"

                           "<table border=1 cellspacing=0 cellpadding=2>\n";


               // headers
                   out << "<thead><tr bgcolor=#f0f0f0>";
                   for (int column = 0; column < columnCount; column++)
                       if (!ui->tablemodifier->isColumnHidden(column))
                           out << QString("<th>%1</th>").arg(ui->tablemodifier->model()->headerData(column, Qt::Horizontal).toString());
                   out << "</tr></thead>\n";
                   // data table
                      for (int row = 0; row < rowCount; row++) {
                          out << "<tr>";
                          for (int column = 0; column < columnCount; column++) {
                              if (!ui->tablemodifier->isColumnHidden(column)) {
                                  QString data = ui->tablemodifier->model()->data(ui->tablemodifier->model()->index(row, column)).toString().simplified();
                                  out << QString("<td bkcolor=0>%1</td>").arg((!data.isEmpty()) ? data : QString("&nbsp;"));
                              }
                          }
                          out << "</tr>\n";
                      }
                      out <<  "</table>\n"
                          "</body>\n"
                          "</html>\n";

                      QTextDocument *document = new QTextDocument();
                      document->setHtml(strStream);

                      QPrinter printer;

                      QPrintDialog *dialog = new QPrintDialog(&printer, NULL);
                      if (dialog->exec() == QDialog::Accepted) {
                          document->print(&printer);
                   }

}

void promointer::on_btnevent_clicked()
{
    promointer::close();
    EvenementInter * m= new EvenementInter;
    m->show();

}

void promointer::on_btnpromo_clicked()
{

}
