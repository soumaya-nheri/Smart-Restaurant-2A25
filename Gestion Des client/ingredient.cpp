#include "ingredient.h"
#include<QSqlQuery>
#include<QtDebug>
#include<QObject>
Ingredient::Ingredient()
{
id=0;
nom="";
quantite=0;
}
Ingredient::Ingredient(int id ,QString nom ,int quantite)
{this->id=id;
this->nom=nom;
this->quantite=quantite;}

int Ingredient::getid(){return id;}
QString Ingredient::getnom(){return nom;}
int Ingredient::getquantite(){return quantite;}

void Ingredient::setid(int id){this->id=id;}
 void Ingredient::setnom(QString nom ){this->nom=nom;}
 void Ingredient::setquantite(int quantite){this->quantite=quantite;}
 bool Ingredient::ajouter (){

     QSqlQuery query;
     QString id_string=QString::number(id);
      QString quantite_string=QString::number(quantite);
           query.prepare("INSERT INTO ingredient (id, nom, quantite) "
                         "VALUES (:id, :nom, :quantite)");
           query.bindValue(":id", id_string);
           query.bindValue(":nom", nom);
           query.bindValue(":quantite", quantite_string);
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
         model->setHeaderData(0, Qt::Horizontal, QObject::tr("identifient"));
         model->setHeaderData(1, Qt::Horizontal, QObject::tr("Nom d'ingredient"));
           model->setHeaderData(1, Qt::Horizontal, QObject::tr("Quantite d'ingredient"));
           return model;
}





