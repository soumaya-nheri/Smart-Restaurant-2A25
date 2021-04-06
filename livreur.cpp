#include "livreur.h"

Livreur::Livreur()
{
    this->id = 0;
    this->nom = "";
    this->prenom = "";
    this->salaire = 0;
}

Livreur::Livreur(int _0, QString _1, QString _2, int _3)
{
    this->id = _0;
    this->nom = _1;
    this->prenom = _2;
    this->salaire = _3;
}

int Livreur::getId()
{
    return this->id;
}

void Livreur::setId(int _0)
{
    this->id = _0;
}

QString Livreur::getNom()
{
    return this->nom;
}

void Livreur::setNom(QString _1)
{
    this->nom = _1;
}

QString Livreur::getPrenom()
{
    return this->prenom;
}

void Livreur::setPrenom(QString _2)
{
    this->prenom = _2;
}

int Livreur::getSalaire()
{
    return this->salaire;
}

void Livreur::setSalaire(int _3)
{
    this->salaire = _3;
}

bool Livreur::ajouter()
{
    QSqlQuery query;
    query.prepare("INSERT INTO livreur (id, nom, prenom, salaire) VALUES (?, ?, ?, ?)");
    query.addBindValue(QString::number(this->id));
    query.addBindValue(this->nom);
    query.addBindValue(this->prenom);
    query.addBindValue(QString::number(this->salaire));

    return query.exec();
}

bool Livreur::modifier()
{
    QSqlQuery query;
    query.prepare("UPDATE livreur SET nom = ?, prenom = ?, salaire = ? WHERE id = ?");
    query.addBindValue(this->nom);
    query.addBindValue(this->prenom);
    query.addBindValue(QString::number(this->salaire));
    query.addBindValue(QString::number(this->id));

    return query.exec();
}

bool Livreur::supprimer()
{
    QSqlQuery query;
    query.prepare("DELETE FROM livreur WHERE id = ?");
    query.addBindValue(QString::number(this->id));

    return query.exec();
}

QSqlQueryModel* Livreur::afficher()
{
    QSqlQuery query;
    query.exec("SELECT * FROM livreur");

    QSqlQueryModel*model=new QSqlQueryModel();
    model->setQuery(query);
    model->setHeaderData(0, Qt::Horizontal, QObject::tr("ID"));
    model->setHeaderData(1, Qt::Horizontal, QObject::tr("NOM"));
    model->setHeaderData(2, Qt::Horizontal, QObject::tr("PRENOM"));
    model->setHeaderData(3, Qt::Horizontal, QObject::tr("SALAIRE"));

    return model;
}

QSqlQueryModel* Livreur::sort(QString __input__)
{
    QSqlQuery query;
    query.exec("SELECT * FROM livreur ORDER BY "+__input__+" ASC");

    QSqlQueryModel*model=new QSqlQueryModel();
    model->setQuery(query);
    model->setHeaderData(0, Qt::Horizontal, QObject::tr("ID"));
    model->setHeaderData(1, Qt::Horizontal, QObject::tr("NOM"));
    model->setHeaderData(2, Qt::Horizontal, QObject::tr("PRENOM"));
    model->setHeaderData(3, Qt::Horizontal, QObject::tr("SALAIRE"));

    return model;
}

QSqlQueryModel* Livreur::search(QString __input__)
{
    QSqlQuery query;
    query.prepare("SELECT * FROM livreur WHERE nom LIKE ? OR prenom LIKE ? OR salaire LIKE ?");
    query.addBindValue("%"+__input__+"%");
    query.addBindValue("%"+__input__+"%");
    query.addBindValue("%"+__input__+"%");
    query.exec();

    QSqlQueryModel*model=new QSqlQueryModel();
    model->setQuery(query);
    model->setHeaderData(0, Qt::Horizontal, QObject::tr("ID"));
    model->setHeaderData(1, Qt::Horizontal, QObject::tr("NOM"));
    model->setHeaderData(2, Qt::Horizontal, QObject::tr("PRENOM"));
    model->setHeaderData(3, Qt::Horizontal, QObject::tr("SALAIRE"));

    return model;
}

void Livreur::fillComboBoxId(QComboBox* __comboBox)
{
    __comboBox->clear();
    QSqlQuery query;
    query.exec("SELECT id FROM livreur");
    while(query.next()) {
        __comboBox->addItem(query.value(0).toString());
    }
}
