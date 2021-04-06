#include "ingredient.h"
#include<QSqlQuery>
#include<QtDebug>
#include<QObject>

#include<QStringList>
Ingredient::Ingredient()
{
id=0;
nom="";
quantite=0;
 date_expiration=QDate(2000,01,01);
marque="";

}
Ingredient::Ingredient(int id ,QString nom ,int quantite,QDate date_expiration,QString marque)
{this->id=id;
this->nom=nom;
this->quantite=quantite;
    this->date_expiration=date_expiration;
    this->marque=marque;}

int Ingredient::getid(){return id;}
QString Ingredient::getnom(){return nom;}
int Ingredient::getquantite(){return quantite;}
QString Ingredient::getmarque(){return marque;}

QDate Ingredient::getdate_expiration(){ return date_expiration;}

void Ingredient::setdate_expiration(QDate date_expiration){
    this->date_expiration=date_expiration;}

void Ingredient::setid(int id){this->id=id;}

 void Ingredient::setnom(QString nom ){this->nom=nom;}

 void Ingredient::setquantite(int quantite){this->quantite=quantite;}
 void Ingredient::setmarque(QString marque){this->marque=marque;}

 bool Ingredient::ajouter (){

     QSqlQuery query;
     QString id_string=QString::number(id);
      QString quantite_string=QString::number(quantite);
           query.prepare("INSERT INTO ingredient (id, nom, quantite,date_expiration,marque) "
                         "VALUES (:id, :nom, :quantite, :date_expiration,:marque)");
           query.bindValue(":id", id_string);
           query.bindValue(":nom", nom);
           query.bindValue(":quantite", quantite_string);
           query.bindValue(":marque", marque);
              query.bindValue(":date_expiration",date_expiration);
         return  query.exec();

 }
 bool Ingredient::supprimer(int id)
 {
     QSqlQuery query;
     QString id_string=QString::number(id);
      QString quantite_string=QString::number(quantite);
           query.prepare("DELETE from ingredient where id=:id");
           query.bindValue(0, id);

         return  query.exec();


 }
QSqlQueryModel*Ingredient::afficher()
{
    QSqlQueryModel*model=new QSqlQueryModel();

         model->setQuery("SELECT * FROM ingredient");
         model->setHeaderData(0, Qt::Horizontal, QObject::tr("Réference"));
         model->setHeaderData(1, Qt::Horizontal, QObject::tr("Nom"));
           model->setHeaderData(2, Qt::Horizontal, QObject::tr("Quantite "));
           model->setHeaderData(3, Qt::Horizontal, QObject::tr("Date d'Expiration"));
             model->setHeaderData(4, Qt::Horizontal, QObject::tr("Marque"));
           return model;
}


QStringList Ingredient::liste(){
    QSqlQuery query;
    query.prepare("SELECT * FROM ingredient");
    query.exec();
    QStringList list;
    while(query.next()){
        list.append(query.value(0).toString());
    }

    return list;

}


Ingredient Ingredient::recherche_Id(int id){
    QSqlQuery query;
    query.prepare("SELECT * FROM ingredient WHERE id=:id");
    query.bindValue(":id",id);
    query.exec();
    Ingredient e;
    while(query.next()){
        e.setid(query.value(0).toInt());
        e.setnom(query.value(1).toString());
             e.setquantite(query.value(2).toInt());
            e.setdate_expiration(query.value(3).toDate());
              e.setmarque(query.value(4).toString());
    }

    return e;
}

bool Ingredient::modifier(int idc)
{
    QSqlQuery query;
    QString id_string=QString::number(id);
     QString quantite_string=QString::number(quantite);
    query.prepare("UPDATE  ingredient SET id=:id, nom=:nom, quantite=:quantite,date_expiration=:date_expiration, marque=:marque WHERE id=:idc");
    query.bindValue(":id", id_string);
    query.bindValue(":nom", nom);
    query.bindValue(":quantite", quantite_string);
    query.bindValue(":date_expiration", date_expiration);
    query.bindValue(":marque", marque);
    query.bindValue(":idc",idc);


    return query.exec();
}
QSqlQueryModel* Ingredient:: trier1()
{

    QSqlQueryModel * model=new QSqlQueryModel();
    model->setQuery("select * from Ingredient order by nom ");
    model->setHeaderData(0, Qt::Horizontal, QObject::tr("Réference"));
    model->setHeaderData(1, Qt::Horizontal, QObject::tr("Nom"));
      model->setHeaderData(2, Qt::Horizontal, QObject::tr("Quantite "));
      model->setHeaderData(3, Qt::Horizontal, QObject::tr("Date d'Expiration"));
        model->setHeaderData(4, Qt::Horizontal, QObject::tr("Marque"));


    return model;
}

QSqlQueryModel* Ingredient:: trier()
{
 //order by extract (year from date_naissance)
    QSqlQueryModel * model=new QSqlQueryModel();
    model->setQuery("select * from Ingredient order by (date_expiration)DESC ");
    model->setHeaderData(0, Qt::Horizontal, QObject::tr("Réference"));
    model->setHeaderData(1, Qt::Horizontal, QObject::tr("Nom"));
      model->setHeaderData(2, Qt::Horizontal, QObject::tr("Quantite "));
      model->setHeaderData(3, Qt::Horizontal, QObject::tr("Date d'Expiration"));
        model->setHeaderData(4, Qt::Horizontal, QObject::tr("Marque"));
    return model;
}
QSqlQueryModel* Ingredient:: trier2()
{

    QSqlQueryModel * model=new QSqlQueryModel();

    model->setQuery("select * from Ingredient order by (quantite) ASC");
    model->setHeaderData(0, Qt::Horizontal, QObject::tr("Réference"));
    model->setHeaderData(1, Qt::Horizontal, QObject::tr("Nom"));
      model->setHeaderData(2, Qt::Horizontal, QObject::tr("Quantite "));
      model->setHeaderData(3, Qt::Horizontal, QObject::tr("Date d'Expiration"));
        model->setHeaderData(4, Qt::Horizontal, QObject::tr("Marque"));

    return model;
}

QSqlQueryModel *Ingredient::chercher_emp_avancee(QString nom,QString marque)
 {

    {
        QSqlQueryModel *model = new QSqlQueryModel;
        model->setQuery("SELECT * FROM Ingredient WHERE upper(nom) Like upper('"+nom+"%') and upper(marque) Like upper('"+marque+"%') ");
        model->setHeaderData(0, Qt::Horizontal, QObject::tr("ID"));
        model->setHeaderData(1, Qt::Horizontal, QObject::tr("NOM"));
        model->setHeaderData(2, Qt::Horizontal, QObject::tr("quantite"));
        model->setHeaderData(1, Qt::Horizontal, QObject::tr("Marque d'ingredient"));
          model->setHeaderData(1, Qt::Horizontal, QObject::tr("date d'expiration"));
        qDebug() << model;
        return model ;
    }
}

QSqlQueryModel* Ingredient::search(QString input)
{
    QSqlQuery query;
    query.prepare("SELECT * FROM Ingredient WHERE NOM LIKE ? OR MARQUE LIKE ? OR date_expiration LIKE ? OR QUANTITE LIKE ?");
    query.addBindValue("%"+input+"%");
    query.addBindValue("%"+input+"%");
    query.addBindValue("%"+input+"%");
    query.addBindValue("%"+input+"%");
    query.exec();

    QSqlQueryModel*model=new QSqlQueryModel();
    model->setQuery(query);
    model->setHeaderData(0, Qt::Horizontal, QObject::tr("ID"));
    model->setHeaderData(1, Qt::Horizontal, QObject::tr("NOM"));
    model->setHeaderData(2, Qt::Horizontal, QObject::tr("quantite"));
    model->setHeaderData(1, Qt::Horizontal, QObject::tr("Marque d'ingredient"));
      model->setHeaderData(1, Qt::Horizontal, QObject::tr("date d'expiration"));
    return model;
}
