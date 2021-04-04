#include "client.h"
#include<QSqlQuery>
#include<QtDebug>
#include<QObject>
#include<QString>

#include<QStringList>
Client::Client()
{
     id=0;
     nom="";
     prenom="";
     adresse="";
     num=0;
}
Client::Client(int id,QString nom,QString prenom,QString adresse,int num)
{this->id=id;
this-> nom= nom;
this-> prenom= prenom;
     this-> adresse= adresse;

    this-> num= num;
   }

int Client::getid(){return id;}
QString Client::getnom(){return  nom;}
QString Client::getprenom(){return  prenom;}
QString Client::getadresse(){return adresse;}
int Client::getnum(){return num;}



void Client::setid(int id){this->id=id;}

void Client::setnom(QString  nom ){this-> nom= nom;}


 void Client::setprenom(QString prenom){this->prenom=prenom;}
 void Client::setadresse(QString adresse){this->adresse=adresse;}
  void Client::setnum(int  num){this-> num= num;}

  bool Client::ajouterclient(){

     QSqlQuery query;
     QString id_string=QString::number(id);
      QString  num_string=QString::number( num);
           query.prepare("INSERT INTO client (id, nom, prenom,adresse, num) "
                         "VALUES (:id, :nom, :prenom, :adresse,:num)");
           query.bindValue(":id", id_string);
           query.bindValue(":nom",  nom);
           query.bindValue(":prenom", prenom);
           query.bindValue(":adresse", adresse);
           query.bindValue(":num",  num_string);

         return  query.exec();

 }
 bool Client::supprimerclient(int id)
 {
     QSqlQuery query;
     QString id_string=QString::number(id);
     QString  num_string=QString::number( num);
           query.prepare("DELETE from client where id=:id");
           query.bindValue(0, id);

         return  query.exec();


 }

QSqlQueryModel*Client::afficherclient()
{
    QSqlQueryModel*model=new QSqlQueryModel();
 model->setQuery("SELECT * FROM client");
    model->setHeaderData(0, Qt::Horizontal, QObject::tr("id client"));
    model->setHeaderData(1, Qt::Horizontal, QObject::tr(" nom client"));
      model->setHeaderData(2, Qt::Horizontal, QObject::tr(" prenom client"));
      model->setHeaderData(3, Qt::Horizontal, QObject::tr("adresse client "));
        model->setHeaderData(4, Qt::Horizontal, QObject::tr("numero tel client"));;
           return model;
}
bool Client::modifierclient(int id, QString nom, QString prenom, QString adresse, int num)
{
    QSqlQuery query;
    query.prepare("UPDATE client set id=:id,nom=:nom,prenom=:prenom,adresse=:adresse,num=:num WHERE id=:id");
    query.bindValue(":id",id);
    query.bindValue(":nom",nom);
    query.bindValue(":prenom",prenom);
    query.bindValue(":adresse",adresse);
    query.bindValue(":num",num);

    return (query.exec());}

QSqlQueryModel* Client:: trierclient()
{
 //order by extract (year from date_naissance)
    QSqlQueryModel * model=new QSqlQueryModel();
    model->setQuery("select * from client order by (nom) DESC ");
    model->setHeaderData(0, Qt::Horizontal, QObject::tr("id client"));
    model->setHeaderData(1, Qt::Horizontal, QObject::tr(" nom client"));
      model->setHeaderData(2, Qt::Horizontal, QObject::tr(" prenom client"));
      model->setHeaderData(3, Qt::Horizontal, QObject::tr("adresse "));
        model->setHeaderData(4, Qt::Horizontal, QObject::tr("numero tel client"));;

    return model;
}
QSqlQueryModel* Client:: trierclient2()
{

    QSqlQueryModel * model=new QSqlQueryModel();

    model->setQuery("select * from client order by (prenom) DESC");
    model->setHeaderData(0, Qt::Horizontal, QObject::tr("id"));
    model->setHeaderData(1, Qt::Horizontal, QObject::tr(" nom client"));
      model->setHeaderData(2, Qt::Horizontal, QObject::tr(" prenom client"));
      model->setHeaderData(3, Qt::Horizontal, QObject::tr("adresse client"));
        model->setHeaderData(4, Qt::Horizontal, QObject::tr("numero tel client"));;


    return model;
}

QSqlQueryModel *Client::chercherclient(QString nom, QString prenom)
 {

    {
        QSqlQueryModel *model = new QSqlQueryModel;
        model->setQuery("SELECT * FROM client WHERE nom Like '"+QString("%%1%").arg(nom)+"' and prenom Like '"+QString("%%1%").arg(prenom)+"'");
        qDebug()<<QString("%%1%").arg(nom);
        model->setHeaderData(0, Qt::Horizontal, QObject::tr("id client"));
        model->setHeaderData(1, Qt::Horizontal, QObject::tr(" nom client"));
          model->setHeaderData(2, Qt::Horizontal, QObject::tr(" prenom client"));
          model->setHeaderData(3, Qt::Horizontal, QObject::tr("adresse client"));
            model->setHeaderData(4, Qt::Horizontal, QObject::tr("numero tel client"));;
        qDebug() << model;
        return model ;
    }
}


