#include "livrasion.h"
#include "ui_livrasion.h"
#include <QMessageBox>

Livrasion::Livrasion(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Livrasion)
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

void Livrasion::refrech()
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

Livrasion::~Livrasion()
{
    delete ui;
}

void Livrasion::on_pb_livreur_clicked()
{
    ui->sw_main->setCurrentIndex(1);
}

void Livrasion::on_pushButton_2_clicked()
{
    ui->sw_main->setCurrentIndex(2);
}

void Livrasion::on_pb_ajouter_livreur_clicked()
{
    Livreur _l_l(ui->le_id_ajouter_livreur->text().toInt(), ui->le_nom_ajouter_livreur->text(), ui->le_prenom_ajouter_livreur->text(), ui->le_salaire_ajouter_livreur->text().toInt());
    if(_l_l.ajouter()) {
        ui->le_id_ajouter_livreur->setText("");
        ui->le_nom_ajouter_livreur->setText("");
        ui->le_prenom_ajouter_livreur->setText("");
        ui->le_salaire_ajouter_livreur->setText("");
        refrech();

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

void Livrasion::on_pb_modifer_livreur_clicked()
{
    Livreur _l_l(ui->cb_modfier_livreur->currentText().toInt(), ui->le_nom_modfier_livreur->text(), ui->le_prenom_modifier_livreur->text(), ui->le_salaire_modifer_livreur->text().toInt());
    if(_l_l.modifier()) {
        ui->le_nom_modfier_livreur->setText("");
        ui->le_prenom_modifier_livreur->setText("");
        ui->le_salaire_modifer_livreur->setText("");
        refrech();

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

void Livrasion::on_pb_supp_livreur_clicked()
{
    Livreur _l_l;
    _l_l.setId(ui->cb_supp_livreur->currentText().toInt());
    if(_l_l.supprimer()) {
        refrech();

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

void Livrasion::on_le_search_livreur_textChanged(const QString &arg1)
{
    ui->tv_livreur->setModel(l.search(arg1));
}

void Livrasion::on_cb_sort_livreur_currentTextChanged(const QString &arg1)
{
    ui->tv_livreur->setModel(l.sort(arg1));
}

void Livrasion::on_pb_liv_ajout_clicked()
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

void Livrasion::on_pb_liv_modif_clicked()
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

void Livrasion::on_pb_supp_liv_clicked()
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

void Livrasion::on_le_search_liv_textChanged(const QString &arg1)
{
    ui->tv_liv->setModel(L.search(arg1));
}

void Livrasion::on_cb_sort_liv_currentTextChanged(const QString &arg1)
{
    ui->tv_liv->setModel(L.sort(arg1));
}
