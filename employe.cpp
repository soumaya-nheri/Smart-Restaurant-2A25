#include "employe.h"
#include<QSqlQuery>
#include<QtDebug>
#include<QObject>
#include<QStringList>



employe::employe()
{
id=0;
nom="";
prenom="";
Salaire =0;
date=QDate(2000,01,01);


}
Employe::Employe(int id ,QString nom ,QString prenom,QDate date,int Salaire)
{this->id=id;
this->nom=nom;
this->prenom=prenom;
 this->date=date;
 this->Salaire=Salaire;}

int Employe::getid(){return id;}
QString Employe::getnom(){return nom;}
QString Employe::getprenom(){return prenom;}
int Employe::getsalaire(){return Salaire;}
QDate Employe::getdate(){ return date;}

void Employe::setdate(QDate date){
    this->date=date;}

void Employe::setid(int id){this->id=id;}

 void Employe::setnom(QString nom ){this->nom=nom;}
void Employe::setprenom(QString prenom ){this->prenom=prenom;}
 void Employe::setsalaire(int Salaire){this->Salaire=Salaire;}


 bool Employe::ajouter (){

      QSqlQuery query;
     QString id_string=QString::number(id);
      QString _string=QString::number(Salaire);
           query.prepare("INSERT INTO EMPLOYES (ID, NOM,PRENOM,DATE_NAISSANCE,SALAIRE) "
                         "VALUES (:ID, :NOM, :PRENOM, :DATE_NAISSANCE,:SALAIRE)");
           query.bindValue(":ID", id_string);
           query.bindValue(":NOM", nom);
             query.bindValue(":PRENOM", prenom);
           query.bindValue(":SALAIRE", Salaire);

              query.bindValue(":DATE_NAISSANCE",date);
         return  query.exec();

 }
 bool Employe::supprimer(int id)
 {
     QSqlQuery query;
     QString id_string=QString::number(id);
      QString salaire_string=QString::number(Salaire);
           query.prepare("DELETE from EMPLOYES where id=:id");
           query.bindValue(0, id);

         return  query.exec();


 }
QSqlQueryModel*Employe::afficher()
{
    QSqlQueryModel*model=new QSqlQueryModel();

         model->setQuery("SELECT * FROM EMPLOYES");
         model->setHeaderData(0, Qt::Horizontal, QObject::tr("identifient"));
         model->setHeaderData(1, Qt::Horizontal, QObject::tr("Nom d'employe"));
          model->setHeaderData(1, Qt::Horizontal, QObject::tr("Prenom d'employe"));
           model->setHeaderData(1, Qt::Horizontal, QObject::tr("Salaire d'employe"));
             model->setHeaderData(1, Qt::Horizontal, QObject::tr("date "));
           return model;
}
