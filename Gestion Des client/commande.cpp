#include "commande.h"
#include<QSqlQuery>
#include<QtDebug>
#include<QObject>
#include<QString>

#include<QStringList>
Commande::Commande()
{
     id_client=0;
     id_commande=0;
     description="";
}
Commande::Commande(int id_client,int id_commande,QString description,int prix)
{this->id_client=id_client;
this->id_commande =id_commande ;
this->  description=  description;
    this->prix =prix ;
   }

int Commande::getid_client(){return id_client;}
int Commande::getid_commande(){return id_commande;}
QString Commande::getdescription(){return description;}
int Commande::getid_prix(){return prix;}




void Commande::setid_client(int id_client){this->id_client=id_client;}

void Commande::setid_commande(int id_commande){this->id_commande=id_commande;}


 void Commande::setdescription(QString description){this->description=description;}
void Commande::setprix(int prix){this->prix=prix;}
  bool Commande::ajoutercommande(){

     QSqlQuery query;
     QString id_client_string=QString::number(id_client);
      QString  id_commande_string=QString::number( id_commande);
      QString  prix_string=QString::number( prix);
           query.prepare("INSERT INTO commande (id_client, id_commande, description, prix) "
                         "VALUES (:id_client, :id_commande, :description,:prix)");
           query.bindValue(":id_client", id_client_string);
           query.bindValue(":id_commande",  id_commande_string);
           query.bindValue(":description", description);
            query.bindValue(":prix",  prix_string);

         return  query.exec();

 }
 bool Commande::supprimercommande(int id_commande)
 {
     QSqlQuery query;
     QString id_string=QString::number(id_commande);

           query.prepare("DELETE from commande where id_commande=:id_commande");
           query.bindValue(0, id_commande);

         return  query.exec();


 }

QSqlQueryModel*Commande::affichercommande()
{
    QSqlQueryModel*model=new QSqlQueryModel();
 model->setQuery("SELECT * FROM commande");
    model->setHeaderData(0, Qt::Horizontal, QObject::tr("id_client"));
    model->setHeaderData(1, Qt::Horizontal, QObject::tr(" id_commande"));
      model->setHeaderData(2, Qt::Horizontal, QObject::tr("description"));
       model->setHeaderData(3, Qt::Horizontal, QObject::tr("prix"));;
           return model;
}
bool Commande::modifiercommande(int id_client, int id_commande, QString description,int prix)
{
    QSqlQuery query;
    query.prepare("UPDATE commande set id_client=:id_client,id_commande=:id_commande,description=:description,prix=:prix WHERE id_commande=:id_commande");
    query.bindValue(":id_client",id_client);
    query.bindValue(":id_commande",id_commande);
    query.bindValue(":description",description);
     query.bindValue(":prix",prix);
    return (query.exec());}

QSqlQueryModel* Commande:: triercommande2()
{
    QSqlQueryModel * model=new QSqlQueryModel();
    model->setQuery("select * from commande order by (description) ASC ");
    model->setHeaderData(0, Qt::Horizontal, QObject::tr("id_client"));
    model->setHeaderData(1, Qt::Horizontal, QObject::tr(" id_commande"));
      model->setHeaderData(2, Qt::Horizontal, QObject::tr("description"));
         model->setHeaderData(3, Qt::Horizontal, QObject::tr("prix"));;

    return model;
}
QSqlQueryModel* Commande:: triercommande()
{

    QSqlQueryModel * model=new QSqlQueryModel();
    model->setQuery("select * from commande order by (id_commande) ASC ");
    model->setHeaderData(0, Qt::Horizontal, QObject::tr("id_client"));
    model->setHeaderData(1, Qt::Horizontal, QObject::tr(" id_commande"));
      model->setHeaderData(2, Qt::Horizontal, QObject::tr("description"));
       model->setHeaderData(3, Qt::Horizontal, QObject::tr("prix"));;

    return model;
}

QSqlQueryModel *Commande::cherchercommande(int id_client,int id_commande)
 {

    {
        QSqlQueryModel *model = new QSqlQueryModel;
        model->setQuery("SELECT * FROM commande WHERE id_client Like '"+QString("%%1%").arg(id_client)+"' and id_commande Like '"+QString("%%1%").arg(id_commande)+"'");
        model->setHeaderData(0, Qt::Horizontal, QObject::tr("id_client"));
        model->setHeaderData(1, Qt::Horizontal, QObject::tr(" id_commande"));
        model->setHeaderData(2, Qt::Horizontal, QObject::tr("description"));
        model->setHeaderData(3, Qt::Horizontal, QObject::tr("prix"));;
        qDebug() << model;
        return model ;
    }
}


