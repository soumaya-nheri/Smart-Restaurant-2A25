#include "promotion.h"

promotion::promotion()
{

}

//Constructeur pour Afficher

promotion::promotion(int id ,QString menu , float prixAv,float pourcentage,float prixAp,int duree)
{
    this->id=id;
    this->menu=menu;
    this->prixAv=prixAv;
    this->pourcentage=pourcentage;
    this->prixAp=prixAp;
    this->duree=duree;
}

//Constructeur pour Ajouter

promotion::promotion(QString menu , float prixAv,float pourcentage,float prixAp,int duree)
{
    this->menu=menu;
    this->prixAv=prixAv;
    this->pourcentage=pourcentage;
    this->prixAp=prixAp;
    this->duree=duree;
}

//*******AJOUTER

bool promotion::ajouter()
{
//creation du query
QSqlQuery query;

//convertir QString au number
QString prixAvstring= QString::number(prixAv);
QString pourcentagestring= QString::number(pourcentage);
QString prixApstring= QString::number(prixAp);
QString dureestring= QString::number(duree);

query.prepare("INSERT INTO PROMO (MENU, PRIXAV, POURCENTAGE, PRIXAP, DUREE) "
                    "VALUES (:menu, :prixav, :pourcentage, :prixap, :duree)");

//convertion des données et evitée les SQLINJECTION
query.bindValue(":menu", menu);
query.bindValue(":prixav", prixAvstring);
query.bindValue(":pourcentage", pourcentagestring);
query.bindValue(":prixap", prixApstring);
query.bindValue(":duree", dureestring);


return    query.exec();
}
//*******MODIFIER

bool promotion::modifier(QString menu,QString prixav,QString pourcentage,QString prixap,QString duree,QString id)
{
QSqlQuery query;

query.prepare("UPDATE PROMO SET MENU= :menu, PRIXAV= :prixav,POURCENTAGE= :pourcentage,PRIXAP= :prixap,DUREE= :duree "
                    " WHERE  ID = :id ");


query.bindValue(":menu", menu);
query.bindValue(":prixav", prixav);
query.bindValue(":pourcentage", pourcentage);
query.bindValue(":prixap", prixap);
query.bindValue(":duree", duree);
query.bindValue(":id", id);


return    query.exec();
}

//******AFFICHER

QSqlQueryModel * promotion::afficher()
{QSqlQueryModel * model= new QSqlQueryModel();

model->setQuery("select * from PROMO");

model->setHeaderData(0, Qt::Horizontal, QObject::tr("id"));
model->setHeaderData(1, Qt::Horizontal, QObject::tr("Menu"));
model->setHeaderData(2, Qt::Horizontal, QObject::tr("Prix avant"));
model->setHeaderData(3, Qt::Horizontal, QObject::tr("Pourcentage"));
model->setHeaderData(4, Qt::Horizontal, QObject::tr("Prix apres"));
model->setHeaderData(5, Qt::Horizontal, QObject::tr("Duree"));


    return model;
}

//******AFFICHER TRI

QSqlQueryModel * promotion::triafficher(QString col)
{QSqlQueryModel * model= new QSqlQueryModel();

    QSqlQuery query;
    query.prepare("select * from PROMO order by "+col);
    query.exec();


model->setQuery(query);

model->setHeaderData(0, Qt::Horizontal, QObject::tr("id"));
model->setHeaderData(1, Qt::Horizontal, QObject::tr("Menu"));
model->setHeaderData(2, Qt::Horizontal, QObject::tr("Prix avant"));
model->setHeaderData(3, Qt::Horizontal, QObject::tr("Pourcentage"));
model->setHeaderData(4, Qt::Horizontal, QObject::tr("Prix apres"));
model->setHeaderData(5, Qt::Horizontal, QObject::tr("Duree"));

    return model;
}



//*******SUPPRIMPER

bool promotion::supprimer(int idd)
{
QSqlQuery query;
QString res= QString::number(idd);
query.prepare("Delete from PROMO where ID = :id ");
query.bindValue(":id", res);
return    query.exec();
}

//******REMPLIR COMBO BOX

QSqlQueryModel * promotion::remplircombopromo()
{
    QSqlQueryModel * mod= new QSqlQueryModel();
    QSqlQuery query;
    query.prepare("select ID from PROMO");
    query.exec();
    mod->setQuery(query);
    return mod;
}


QSqlQuery promotion::request(QString id)
{
    QSqlQuery query;
    query.prepare("select * from PROMO where ID= '"+id+"'");
    query.addBindValue(id);
    query.exec();
    return query;
}


QSqlQueryModel * promotion::afficherecherche(QString res)
{
    QSqlQueryModel * model= new QSqlQueryModel();
    QSqlQuery query;
    query.prepare("select * from PROMO  where (MENU LIKE '%"+res+"%' OR PRIXAV LIKE '%"+res+"%' OR POURCENTAGE LIKE '%"+res+"%' )");
    query.exec();
    model->setQuery(query);
    model->setHeaderData(0, Qt::Horizontal, QObject::tr("id"));
    model->setHeaderData(1, Qt::Horizontal, QObject::tr("Menu"));
    model->setHeaderData(2, Qt::Horizontal, QObject::tr("Prix avant"));
    model->setHeaderData(3, Qt::Horizontal, QObject::tr("Pourcentage"));
    model->setHeaderData(4, Qt::Horizontal, QObject::tr("Prix apres"));
    model->setHeaderData(5, Qt::Horizontal, QObject::tr("Duree"));


    return model;
}



