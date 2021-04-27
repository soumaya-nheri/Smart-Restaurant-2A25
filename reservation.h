#ifndef RESERVATION_H
#define RESERVATION_H

#include<QDate>
#include<QString>
#include<QSqlQueryModel>
#include<QDate>

#include <QPdfWriter>
class Reservation
{
public:
    Reservation();
    Reservation(int,int,QDate);
    //getter
    int getid_client();
    int getid_reservation();
     QDate getdate();
      //setter
    void setid_client(int);
    void setid_reservation(int);
    void setdate(QDate);


    //methode
     bool ajouterreservation();
     QSqlQueryModel* afficherreservation();
    bool supprimerreservation(int);
    bool modifierreservation(int,int,QDate);
//QStringList liste();
// Menu recherche_Id(int);
  QSqlQueryModel* trierreservation();
// QSqlQueryModel* trier();
 QSqlQueryModel* trierreservation2();
QSqlQueryModel * chercherreservation(int,int);


private:
    int id_client;
    int id_reservation;
     QDate date_res;

};


#endif // RESERVATION_H
