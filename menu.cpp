#include "menu.h"
#include<QSqlQuery>
#include<QtDebug>
#include<QObject>

#include<QStringList>
Menu::Menu()
{
     id_plat=0;
     nom_plat="";
    prix=0;
 type="";
  description="" ;
 cuisine="" ;
}
Menu::Menu(int id_plat,QString nom_plat,int prix,QString cuisine,QString description,QString type)
{this->id_plat=id_plat;
this-> nom_plat= nom_plat;
this-> prix= prix;
     this-> cuisine= cuisine;

    this-> description= description;
    this-> type= type;
   }

int Menu::getid_plat(){return id_plat;}
QString Menu::getnom_plat(){return  nom_plat;}
int Menu::getprix(){return  prix;}
QString Menu::getdescription(){return description;}
QString Menu::gettype(){return type;}
QString Menu::getcuisine(){return cuisine;}



void Menu::setid_plat(int id_plat){this->id_plat=id_plat;}

 void Menu::setnom_plat(QString  nom_plat ){this-> nom_plat= nom_plat;}

 void Menu::setprix(int  prix){this-> prix= prix;}
 void Menu::setcuisine(QString cuisine){this->cuisine=cuisine;}
 void Menu::settype(QString type){this->type=type;}
 void Menu::setdescription(QString description){this->description=description;}


  bool Menu::ajoutermenu(){

     QSqlQuery query;
     QString id_string=QString::number(id_plat);
      QString  prix_string=QString::number( prix);
           query.prepare("INSERT INTO menu (id_plat, nom_plat, prix,cuisine,description,type) "
                         "VALUES (:id_plat, :nom_plat, :prix, :cuisine,:description,:type)");
           query.bindValue(":id_plat", id_string);
           query.bindValue(":nom_plat",  nom_plat);
           query.bindValue(":prix",  prix_string);
           query.bindValue(":cuisine", cuisine);
             query.bindValue(":description", description);
             query.bindValue(":type", type);

         return  query.exec();

 }
 bool Menu::supprimermenu(int id_plat)
 {
     QSqlQuery query;
     QString id_string=QString::number(id_plat);
     QString  prix_string=QString::number( prix);
           query.prepare("DELETE from menu where id_plat=:id_plat");
           query.bindValue(0, id_plat);

         return  query.exec();


 }

QSqlQueryModel*Menu::affichermenu()
{
    QSqlQueryModel*model=new QSqlQueryModel();
 model->setQuery("SELECT * FROM menu");
    model->setHeaderData(0, Qt::Horizontal, QObject::tr("Référence"));
    model->setHeaderData(1, Qt::Horizontal, QObject::tr(" nom de plat"));
      model->setHeaderData(1, Qt::Horizontal, QObject::tr(" prix de plat"));
      model->setHeaderData(1, Qt::Horizontal, QObject::tr("cuisine "));
        model->setHeaderData(1, Qt::Horizontal, QObject::tr("description"));
           model->setHeaderData(1, Qt::Horizontal, QObject::tr("type de plat"));;
           return model;
}
bool Menu::modifiermenu( int id_plat, QString nom_plat,int prix, QString cuisine, QString description, QString type){
    QSqlQuery query;
    query.prepare("UPDATE menu set id_plat=:id_plat,nom_plat=:nom_plat,prix=:prix,cuisine=:cuisine,description=:description,type=:type WHERE id_plat=:id_plat");
    query.bindValue(":id_plat",id_plat);
    query.bindValue(":nom_plat",nom_plat);
    query.bindValue(":prix",prix);
    query.bindValue(":cuisine",cuisine);
    query.bindValue(":description",description);
    query.bindValue(":type",type);

    return (query.exec());}

QSqlQueryModel* Menu:: triermenu()
{
 //order by extract (year from date_naissance)
    QSqlQueryModel * model=new QSqlQueryModel();
    model->setQuery("select * from Menu order by (nom_plat)DESC ");
    model->setHeaderData(0, Qt::Horizontal, QObject::tr("Référence"));
    model->setHeaderData(1, Qt::Horizontal, QObject::tr(" nom de plat"));
      model->setHeaderData(1, Qt::Horizontal, QObject::tr(" prix de plat"));
      model->setHeaderData(1, Qt::Horizontal, QObject::tr("cuisine "));
        model->setHeaderData(1, Qt::Horizontal, QObject::tr("description"));
           model->setHeaderData(1, Qt::Horizontal, QObject::tr("type de plat"));;
    return model;
}
QSqlQueryModel* Menu:: triermenu2()
{

    QSqlQueryModel * model=new QSqlQueryModel();

    model->setQuery("select * from Menu order by (type) ASC");
    model->setHeaderData(0, Qt::Horizontal, QObject::tr("Référence"));
    model->setHeaderData(1, Qt::Horizontal, QObject::tr(" nom de plat"));
      model->setHeaderData(1, Qt::Horizontal, QObject::tr(" prix de plat"));
      model->setHeaderData(1, Qt::Horizontal, QObject::tr("cuisine "));
        model->setHeaderData(1, Qt::Horizontal, QObject::tr("description"));
           model->setHeaderData(1, Qt::Horizontal, QObject::tr("type de plat"));;


    return model;
}

QSqlQueryModel *Menu::cherchermenu(QString nom_plat,QString type)
 {

    {
        QSqlQueryModel *model = new QSqlQueryModel;
        model->setQuery("SELECT * FROM Menu WHERE upper(nom) Like upper('"+nom_plat+"%') and upper(cuisine) Like upper('"+type+"%') ");

        model->setHeaderData(0, Qt::Horizontal, QObject::tr("Référence"));
        model->setHeaderData(1, Qt::Horizontal, QObject::tr(" nom de plat"));
          model->setHeaderData(1, Qt::Horizontal, QObject::tr(" prix de plat"));
          model->setHeaderData(1, Qt::Horizontal, QObject::tr("cuisine "));
            model->setHeaderData(1, Qt::Horizontal, QObject::tr("description"));
               model->setHeaderData(1, Qt::Horizontal, QObject::tr("type de plat"));;
        qDebug() << model;
        return model ;
    }
}


QSqlQueryModel* Menu::chercher_menu_par_nom( QString t)
 {

    {QSqlQueryModel *model = new QSqlQueryModel;
        model->setQuery("SELECT * FROM Menu WHERE nom_plat like '"+t+"%'  ");
        model->setHeaderData(0, Qt::Horizontal, QObject::tr("Référence"));
        model->setHeaderData(1, Qt::Horizontal, QObject::tr(" nom de plat"));
          model->setHeaderData(1, Qt::Horizontal, QObject::tr(" prix de plat"));
          model->setHeaderData(1, Qt::Horizontal, QObject::tr("cuisine "));
            model->setHeaderData(1, Qt::Horizontal, QObject::tr("description"));
               model->setHeaderData(1, Qt::Horizontal, QObject::tr("type de plat"));;
        return model;
    }

 }


QSqlQueryModel* Menu::chercher_menu_par_type( QString p)
 {

    {QSqlQueryModel *model = new QSqlQueryModel;
        model->setQuery("SELECT * FROM menu nom_plat type like '"+p+"%'  ");
        model->setHeaderData(0, Qt::Horizontal, QObject::tr("Référence"));
        model->setHeaderData(1, Qt::Horizontal, QObject::tr(" nom de plat"));
          model->setHeaderData(1, Qt::Horizontal, QObject::tr(" prix de plat"));
          model->setHeaderData(1, Qt::Horizontal, QObject::tr("cuisine "));
            model->setHeaderData(1, Qt::Horizontal, QObject::tr("description"));
               model->setHeaderData(1, Qt::Horizontal, QObject::tr("type de plat"));;
        return model;
    }

 }
QSqlQueryModel* Menu::chercher_menu_par_cuisine(QString o)
 {

    {QSqlQueryModel *model = new QSqlQueryModel;
        model->setQuery("SELECT * FROM menu WHERE cuisine like '"+o+"%'  ");
        model->setHeaderData(0, Qt::Horizontal, QObject::tr("identifient"));
        model->setHeaderData(1, Qt::Horizontal, QObject::tr(" nom_plat d'Menu"));
          model->setHeaderData(1, Qt::Horizontal, QObject::tr(" prix d'Menu"));
          model->setHeaderData(1, Qt::Horizontal, QObject::tr("cuisine d'Menu"));
            model->setHeaderData(1, Qt::Horizontal, QObject::tr("description d'expiration"));
               model->setHeaderData(1, Qt::Horizontal, QObject::tr("type d'expiration"));;
        return model;
    }

 }
