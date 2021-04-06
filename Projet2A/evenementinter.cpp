#include "evenementinter.h"
#include "ui_evenementinter.h"
#include "evenement.h"
#include "connection.h"
#include <QMessageBox>


EvenementInter::EvenementInter(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::EvenementInter)
{
    ui->setupUi(this);

    setWindowTitle("Gestion d'evenements");

    //Column size
    ui->tablemodifier->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);

    //refresh combobox + tableau
    refresh();


}

EvenementInter::~EvenementInter()
{
    delete ui;
}

void EvenementInter::refresh()
{

    //remplir tableau
    ui->tablemodifier->setModel(tmpevent.afficher());

    ui->comboBox->setModel(tmpevent.remplircomboevent());
    ui->comboBox_modif->setModel(tmpevent.remplircomboevent());
}

//ajouter evenement
void EvenementInter::on_AjouterBouton_clicked()
{
    Evenement event(ui->Nom->toPlainText(),ui->Description->toPlainText(),ui->dateEdit->date());
    bool test = event.ajouter();
    if(test)
{
        //NOTIFICATION
        trayIcon = new QSystemTrayIcon(this);
        trayIcon->setVisible(true);
        trayIcon->setIcon(this->style()->standardIcon(QStyle::SP_DesktopIcon));
        trayIcon->setToolTip("Ajouter" "\n"
                        "Ajouter avec sucées");
        trayIcon->showMessage("Ajouter","Ajouter avec sucées",QSystemTrayIcon::Information,1500);
        trayIcon->show();

    refresh();

}
}


//supprimer evenement
void EvenementInter::on_SupprimerBouton_clicked()
{
    QMessageBox::StandardButton reply =QMessageBox::question(this,
                          "Supprimer","Voulez-vous vraiment supprimer ?",
                          QMessageBox::Yes | QMessageBox::No);
    if(reply == QMessageBox::Yes)
    {
        bool test=tmpevent.supprimer(ui->comboBox->currentText().toInt());
        if(test)
        {
            //refresh combobox + tableau
            refresh();

            //NOTIFICATION
            trayIcon = new QSystemTrayIcon(this);
            trayIcon->setVisible(true);
            trayIcon->setIcon(this->style()->standardIcon(QStyle::SP_DesktopIcon));
            trayIcon->setToolTip("Supprimer" "\n"
                            "Supprimer avec sucées");
            trayIcon->showMessage("Supprimer","Supprimer avec sucées",QSystemTrayIcon::Warning,1500);
            trayIcon->show();

        }
        else
        {
            QMessageBox::critical(this, QObject::tr("Supprimer un Evenement"),
                        QObject::tr("Erreur !.\n"
                                    "Click Cancel to exit."), QMessageBox::Cancel);
        }

    }

}


void EvenementInter::on_comboBox_currentIndexChanged(const QString &arg1)
{
    QSqlQuery query;

    QString id = ui->comboBox->currentText();

    query =tmpevent.request(id);
    if(query.exec())
    {
        while(query.next())
        {
            ui->Nomval->setText(query.value(1).toString());
            ui->Descriptionval->setText(query.value(2).toString());
            ui->Dateeventval->setText(query.value(3).toString());
        }
    }

}

void EvenementInter::on_comboBox_modif_currentIndexChanged(const QString &arg1)
{
    QSqlQuery query;

    QString id = ui->comboBox_modif->currentText();

    query =tmpevent.request(id);
    if(query.exec())
    {
        while(query.next())
        {
            ui->nommodif->setText(query.value(1).toString());
            ui->descmodif->setText(query.value(2).toString());
            ui->datemodif->setDate(query.value(3).toDate());
        }
    }

}


void EvenementInter::on_modifiebtn_clicked()
{
    if((ui->nommodif->text() != "") &&(ui->descmodif->text() != ""))
    {
        if(tmpevent.modifier(ui->nommodif->text(),ui->descmodif->text(),ui->datemodif->date(),ui->comboBox_modif->currentText()))
        {
            //refresh combobox + tableau
            refresh();

            //NOTIFICATION
            trayIcon = new QSystemTrayIcon(this);
            trayIcon->setVisible(true);
            trayIcon->setIcon(this->style()->standardIcon(QStyle::SP_DesktopIcon));
            trayIcon->setToolTip("Modifier" "\n"
                            "Modifier avec sucées");
            trayIcon->showMessage("Modifier","Modifier avec sucées",QSystemTrayIcon::Warning,1500);
            trayIcon->show();


        }
    }



}



//PDF
void EvenementInter::on_PDF_clicked()
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
