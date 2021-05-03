#include "revenue.h"
#include<QSqlQuery>
#include<QtDebug>
#include<QObject>

#include<QStringList>



revenue::revenue()
{
id_revenue=0;
date_revenue=QDate(2000,01,01);
montant=0;


}
revenue::revenue(int id_revenue ,QDate date_revenue,int montant)
{this->id_revenue=id_revenue;
 this->date_revenue=date_revenue;
 this->montant=montant;}

int revenue::getid_revenue(){return id_revenue;}
QDate revenue::getdate_revenue(){ return date_revenue;}
int revenue::getmontant(){return montant;}

void revenue::setid_revenue(int id_revenue){this->id_revenue=id_revenue;}
 void revenue::setdate_revenue(QDate date_revenue){this->date_revenue=date_revenue;}
 void revenue::setmontant(int montant){this->montant=montant;}



 bool revenue::ajouter (){

      QSqlQuery query;
     QString id_revenue_string=QString::number(id_revenue);
      QString montant_string=QString::number(montant);
           query.prepare("INSERT INTO REVENUE (ID_REVENUE, DATE_REVENUE, MONTANT) "
                         "VALUES (:ID_REVENUE, :DATE_REVENUE, :MONTANT)");
           query.bindValue(":ID_REVENUE", id_revenue_string);
           query.bindValue(":DATE_REVENUE",date_revenue);
           query.bindValue(":MONTANT", montant_string);



         return  query.exec();

 }
 bool revenue::supprimer(int id_revenue)
 {
     QSqlQuery query;
     QString id_revenue_string=QString::number(id_revenue);
           query.prepare("DELETE from REVENUE where id_revenue=:id_revenue");
           query.bindValue(0, id_revenue);

         return  query.exec();


 }
QSqlQueryModel*revenue::afficher()
{
    QSqlQueryModel*model=new QSqlQueryModel();

         model->setQuery("SELECT * FROM REVENUE");
         model->setHeaderData(0, Qt::Horizontal, QObject::tr("id du revenue"));
         model->setHeaderData(1, Qt::Horizontal, QObject::tr("date de revenue"));
          model->setHeaderData(2, Qt::Horizontal, QObject::tr("montant"));
           return model;
}


QStringList revenue::liste(){
    QSqlQuery query;
    query.prepare("SELECT * FROM REVENUE");
    query.exec();
    QStringList list;
    while(query.next()){
        list.append(query.value(0).toString());
    }

    return list;

}


revenue revenue::recherche_Id(int id_revenue){
    QSqlQuery query;
    query.prepare("SELECT * FROM REVENUE WHERE ID_REVENUE=:ID_REVENUE");
    query.bindValue(":ID_REVENUE",id_revenue);
    query.exec();
    revenue r;
    while(query.next()){
        r.setid_revenue(query.value(0).toInt());
        r.setdate_revenue(query.value(1).toDate());
        r.setmontant(query.value(2).toInt());

    }

    return r;
}

bool revenue::modifier(int IDC)
{
    QSqlQuery query;
    QString id_revenue_string=QString::number(id_revenue);
     QString montant_string=QString::number(montant);

    query.prepare("UPDATE  REVENUE SET ID_REVENUE=:ID_REVENUE, DATE_REVENUE=:DATE_REVENUE, MONTANT=:MONTANT WHERE ID_REVENUE=:IDC");
    query.bindValue(":ID_REVENUE", id_revenue_string);
    query.bindValue(":DATE_REVENUE",date_revenue);
    query.bindValue(":MONTANT", montant_string);


    query.bindValue(":IDC",IDC);


    return query.exec();
}





QSqlQueryModel *revenue::chercher_revenue_par_id(int id_revenue)
 {

    {
        QSqlQueryModel *model = new QSqlQueryModel;
        QString res=QString::number(id_revenue);
        model->setQuery("SELECT * FROM REVENUE WHERE ID_REVENUE like '"+res+"%' ");
        model->setHeaderData(0, Qt::Horizontal, QObject::tr("ID_REVENUE"));
        model->setHeaderData(1, Qt::Horizontal, QObject::tr("DATE_REVENUE"));
         model->setHeaderData(2, Qt::Horizontal, QObject::tr("MONTANT"));



        return model ;
    }
}

QSqlQueryModel * revenue::afficherecherche(QString res)
{
    QSqlQueryModel * model= new QSqlQueryModel();
    QSqlQuery query;
    query.prepare("select * from revenue  where (ID_REVENUE LIKE '%"+res+"%' )");
    query.exec();
    model->setQuery(query);
    model->setHeaderData(0, Qt::Horizontal, QObject::tr("id du revenue"));
    model->setHeaderData(1, Qt::Horizontal, QObject::tr("date de revenue"));
    model->setHeaderData(2, Qt::Horizontal, QObject::tr("montant"));


    return model ;

     }

