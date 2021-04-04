#include "reservation.h"
#include<QSqlQuery>
#include<QtDebug>
#include<QObject>
#include<QString>

#include<QStringList>
Reservation::Reservation()
{
     id_client=0;
     id_reservation=0;
     date_res="";
}
Reservation::Reservation(int id_client,int id_reservation,QString date_res)
{this->id_client=id_client;
this->id_reservation =id_reservation ;
this-> date_res= date_res;
   }

int Reservation::getid_client(){return id_client;}
int Reservation::getid_reservation(){return id_reservation;}
QString Reservation::getdate(){return date_res;}



void Reservation::setid_client(int id_client){this->id_client=id_client;}

void Reservation::setid_reservation(int id_reservation){this->id_reservation=id_reservation;}


 void Reservation::setdate(QString date_res){this->date_res=date_res;}

  bool Reservation::ajouterreservation(){

     QSqlQuery query;
     QString id_client_string=QString::number(id_client);
      QString  id_reservation_string=QString::number( id_reservation);
           query.prepare("INSERT INTO reservation (id_client, id_reservation, date_res) "
                         "VALUES (:id_client, :id_reservation, :date_res)");
           query.bindValue(":id_client", id_client_string);
           query.bindValue(":id_reservation",  id_reservation_string);
           query.bindValue(":date_res", date_res);

         return  query.exec();

 }
 bool Reservation::supprimerreservation(int id_reservation)
 {
     QSqlQuery query;
     QString id_string=QString::number(id_reservation);

           query.prepare("DELETE from reservation where id_reservation=:id_reservation");
           query.bindValue(0, id_reservation);

         return  query.exec();


 }

QSqlQueryModel*Reservation::afficherreservation()
{
    QSqlQueryModel*model=new QSqlQueryModel();
 model->setQuery("SELECT * FROM reservation");
    model->setHeaderData(0, Qt::Horizontal, QObject::tr("id_client"));
    model->setHeaderData(1, Qt::Horizontal, QObject::tr(" id_reservationc"));
      model->setHeaderData(2, Qt::Horizontal, QObject::tr("date_res"));;
           return model;
}
bool Reservation::modifierreservation(int id_client, int id_reservation, QString date_res)
{
    QSqlQuery query;
    query.prepare("UPDATE reservation set id_client=:id_client,id_reservation=:id_reservation,date_res=:date_res WHERE id_reservation=:id_reservation");
    query.bindValue(":id_client",id_client);
    query.bindValue(":id_reservation",id_reservation);
    query.bindValue(":date_res",date_res);
    return (query.exec());}

QSqlQueryModel* Reservation:: trierreservation()
{
    QSqlQueryModel * model=new QSqlQueryModel();
    model->setQuery("select * from reservation order by (date_res) DESC ");
    model->setHeaderData(0, Qt::Horizontal, QObject::tr("id_client"));
    model->setHeaderData(1, Qt::Horizontal, QObject::tr(" id_reservationc"));
      model->setHeaderData(2, Qt::Horizontal, QObject::tr("date_res"));;

    return model;
}
QSqlQueryModel* Reservation:: trierreservation2()
{

    QSqlQueryModel * model=new QSqlQueryModel();

    model->setQuery("select * from reservation order by (id_reservation) DESC");
    model->setHeaderData(0, Qt::Horizontal, QObject::tr("id_client"));
    model->setHeaderData(1, Qt::Horizontal, QObject::tr(" id_reservationc"));
      model->setHeaderData(2, Qt::Horizontal, QObject::tr("date_res"));;


    return model;
}

QSqlQueryModel *Reservation::chercherreservation(int id_client,int id_reservation)
 {

    {
        QSqlQueryModel *model = new QSqlQueryModel;
        model->setQuery("SELECT * FROM reservation WHERE id_client Like '"+QString("%%1%").arg(id_client)+"' and id_reservation Like '"+QString("%%1%").arg(id_reservation)+"'");
        model->setHeaderData(0, Qt::Horizontal, QObject::tr("id_client"));
        model->setHeaderData(1, Qt::Horizontal, QObject::tr(" id_reservationc"));
        model->setHeaderData(2, Qt::Horizontal, QObject::tr("date_res"));;
        qDebug() << model;
        return model ;
    }
}


