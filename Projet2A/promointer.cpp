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
    list << "" << "PRODUIT" << "PRIXAV" << "POURCENTAGE" << "PRIXAP" << "DUREE";

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
    ui->comboBox_nomprod->setModel(tmppromo.recupererproduits());
}


promointer::~promointer()
{
    delete ui;
}

void promointer::on_AjouterBouton_clicked()
{
    promotion promo(ui->comboBox_nomprod->currentText(),ui->Prixav->toPlainText().toFloat(),ui->Pourcentage->toPlainText().toFloat(),ui->Prixap->toPlainText().toFloat(),ui->duree->toPlainText().toUInt());
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

void promointer::on_comboBox_nomprod_currentIndexChanged(const QString &arg1)
{
    QSqlQuery query;


    query =tmppromo.requestproduit(ui->comboBox_nomprod->currentText());

    if(query.exec())
    {
        while(query.next())
        {
            ui->Prixav->setText(query.value(2).toString());
        }
    }

}

void promointer::on_Pourcentage_cursorPositionChanged()
{
    float aux= ui->Prixav->toPlainText().toFloat();

    float pourcent = ui->Pourcentage->toPlainText().toFloat();

    float tmp = aux - aux/100 * pourcent;

    ui->Prixap->setText(QString::number(tmp));
}

void promointer::on_pourcentagemodif_cursorPositionChanged(int arg1, int arg2)
{
    float aux= ui->anciepmodif->toPlainText().toFloat();

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

void promointer::on_tricombo_currentIndexChanged(const QString &arg1)
{
    if(!(ui->tricombo->currentText()==""))
        ui->tablemodifier->setModel(tmppromo.triafficher(ui->tricombo->currentText()));
    else
        ui->tablemodifier->setModel(tmppromo.afficher());



}

void promointer::on_btn_modif_clicked()
{
    if((ui->pourcentagemodif->text() != "") &&(ui->dureemodif->text() != ""))
    {
        if(tmppromo.modifier(ui->nommodif->toPlainText(),ui->anciepmodif->toPlainText(),ui->pourcentagemodif->text(),ui->nouvpmodif->toPlainText(),ui->dureemodif->text(),ui->comboBox_modif->currentText()))
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
