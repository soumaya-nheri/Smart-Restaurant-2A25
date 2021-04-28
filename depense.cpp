#include "Depense.h"
#include<QSqlQuery>
#include<QtDebug>
#include<QObject>

#include<QStringList>



depense::depense()
{
id_depense=0;
salaire =0;
date_depense=QDate(2000,01,01);
id_produit=0;


}
depense::depense(int id_depense ,int salaire, QDate date_depense,int id_produit)
{this->id_depense=id_depense;
 this->salaire=salaire;
 this->date_depense=date_depense;
 this->id_produit=id_produit;}

int depense::getid_depense(){return id_depense;}
int depense::getsalaire(){return salaire;}
QDate depense::getdate_depense(){ return date_depense;}
int depense::getid_produit(){return id_produit;}

void depense::setid_depense(int id_depense){this->id_depense=id_depense;}
 void depense::setsalaire(int salaire){this->salaire=salaire;}
 void depense::setdate_depense(QDate date_depense){this->date_depense=date_depense;}
 void depense::setid_produit(int id_produit){this->id_produit=id_produit;}



 bool depense::ajouter (){

      QSqlQuery query;
     QString id_depense_string=QString::number(id_depense);
      QString salaire_string=QString::number(salaire);
      QString id_produit_string=QString::number(id_produit);
           query.prepare("INSERT INTO DEPENSE (ID_DEPENSE, SALAIRE,DATE_DEPENSE,ID_PRODUIT) "
                         "VALUES (:ID_DEPENSE, :SALAIRE, :DATE_DEPENSE, :ID_PRODUIT)");
           query.bindValue(":ID_DEPENSE", id_depense_string);
           query.bindValue(":SALAIRE", salaire_string);
           query.bindValue(":DATE_DEPENSE",date_depense);
           query.bindValue(":ID_PRODUIT", id_produit_string);


         return  query.exec();

 }
 bool depense::supprimer(int id_depense)
 {
     QSqlQuery query;
     QString id_depense_string=QString::number(id_depense);
           query.prepare("DELETE from DEPENSE where id_depense=:id_depense");
           query.bindValue(0, id_depense);

         return  query.exec();


 }
QSqlQueryModel*depense::afficher()
{
    QSqlQueryModel*model=new QSqlQueryModel();

         model->setQuery("SELECT * FROM DEPENSE");
         model->setHeaderData(0, Qt::Horizontal, QObject::tr("id du depense"));
         model->setHeaderData(1, Qt::Horizontal, QObject::tr("salaire"));
          model->setHeaderData(2, Qt::Horizontal, QObject::tr("date de depense"));
             model->setHeaderData(3, Qt::Horizontal, QObject::tr("id du produit "));
           return model;
}


QStringList depense::liste(){
    QSqlQuery query;
    query.prepare("SELECT * FROM DEPENSE");
    query.exec();
    QStringList list;
    while(query.next()){
        list.append(query.value(0).toString());
    }

    return list;

}


depense depense::recherche_Id(int id_depense){
    QSqlQuery query;
    query.prepare("SELECT * FROM DEPENSE WHERE ID_DEPENSE=:ID_DEPENSE");
    query.bindValue(":ID_DEPENSE",id_depense);
    query.exec();
    depense d;
    while(query.next()){
        d.setid_depense(query.value(0).toInt());
        d.setsalaire(query.value(1).toInt());
        d.setdate_depense(query.value(2).toDate());
        d.setid_produit(query.value(3).toInt());

    }

    return d;
}

bool depense::modifier(int IDC)
{
    QSqlQuery query;
    QString id_depense_string=QString::number(id_depense);
     QString salaire_string=QString::number(salaire);
     QString id_produit_string=QString::number(id_produit);

    query.prepare("UPDATE  DEPENSE SET ID_DEPENSE=:ID_DEPENSE, SALAIRE=:SALAIRE, DATE_DEPENSE=:DATE_DEPENSE, ID_PRODUIT=:ID_PRODUIT WHERE ID_DEPENSE=:IDC");
    query.bindValue(":ID_DEPENSE", id_depense_string);
    query.bindValue(":SALAIRE", salaire_string);
    query.bindValue(":DATE_DEPENSE",date_depense);
    query.bindValue(":ID_PRODUIT", id_produit_string);

    query.bindValue(":IDC",IDC);


    return query.exec();
}
QSqlQueryModel* depense:: trier1()
{

    QSqlQueryModel * model=new QSqlQueryModel();
    model->setQuery("select * from DEPENSE order by ID_DEPENSE ");
    model->setHeaderData(0, Qt::Horizontal, QObject::tr("ID_DEPENSE"));
    model->setHeaderData(1, Qt::Horizontal, QObject::tr("SALAIRE"));
    model->setHeaderData(2, Qt::Horizontal, QObject::tr("DATE_DEPENSE"));
    model->setHeaderData(3, Qt::Horizontal, QObject::tr("ID_PRODUIT"));


    return model;
}

QSqlQueryModel* depense:: trier()
{
 //order by extract (year from DATE_DEPENSE)
    QSqlQueryModel * model=new QSqlQueryModel();
    model->setQuery("select * from DEPENSE order by (DATE_DEPENSE)ASC ");
    model->setHeaderData(0, Qt::Horizontal, QObject::tr("ID_DEPENSE"));
    model->setHeaderData(1, Qt::Horizontal, QObject::tr("SALAIRE"));
    model->setHeaderData(2, Qt::Horizontal, QObject::tr("DATE_DEPENSE"));
    model->setHeaderData(3, Qt::Horizontal, QObject::tr("ID_PRODUIT"));

    return model;
}
QSqlQueryModel* depense:: trier2()
{

    QSqlQueryModel * model=new QSqlQueryModel();

    model->setQuery("select * from DEPENSE order by (SALAIRE) DESC");
    model->setHeaderData(0, Qt::Horizontal, QObject::tr("ID_DEPENSE"));
    model->setHeaderData(1, Qt::Horizontal, QObject::tr("SALAIRE"));
    model->setHeaderData(2, Qt::Horizontal, QObject::tr("DATE_DEPENSE"));
    model->setHeaderData(3, Qt::Horizontal, QObject::tr("ID_PRODUIT"));


    return model;
}





QSqlQueryModel *depense::chercher_depense_par_id(int id_depense)
 {

    {
        QSqlQueryModel *model = new QSqlQueryModel;
        QString res=QString::number(id_depense);
        model->setQuery("SELECT * FROM DEPENSE WHERE ID_DEPENSE like '"+res+"%' ");
        model->setHeaderData(0, Qt::Horizontal, QObject::tr("ID_DEPENSE"));
        model->setHeaderData(1, Qt::Horizontal, QObject::tr("SALAIRE"));
        model->setHeaderData(2, Qt::Horizontal, QObject::tr("DATE_DEPENSE"));
        model->setHeaderData(3, Qt::Horizontal, QObject::tr("ID_PRODUIT"));


        return model ;
    }
}


QSqlQueryModel * depense::afficherechercheD(QString res)
{
    QSqlQueryModel * model= new QSqlQueryModel();
    QSqlQuery query;
    query.prepare("select * from depense  where (ID_DEPENSE LIKE '%"+res+"%' )");
    query.exec();
    model->setQuery(query);
    model->setHeaderData(0, Qt::Horizontal, QObject::tr("id du depense"));
    model->setHeaderData(1, Qt::Horizontal, QObject::tr("salaire"));
    model->setHeaderData(2, Qt::Horizontal, QObject::tr("date du depense"));
    model->setHeaderData(3, Qt::Horizontal, QObject::tr("id du produit"));


    return model ;

     }
