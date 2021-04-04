#ifndef RESERVATION_H
#define RESERVATION_H
#include<QDate>
#include<QString>
#include<QSqlQueryModel>

#include <QPdfWriter>
class Reservation
{
public:
    Reservation();
    Reservation(int,int,QString);
    //getter
    int getid_client();
    int getid_reservation();
     QString getdate();
      //setter
    void setid_client(int);
    void setid_reservation(int);
    void setdate(QString);


    //methode
     bool ajouterreservation();
     QSqlQueryModel* afficherreservation();
    bool supprimerreservation(int);
    bool modifierreservation(int,int,QString);
//QStringList liste();
// Menu recherche_Id(int);
  QSqlQueryModel* trierreservation();
// QSqlQueryModel* trier();
 QSqlQueryModel* trierreservation2();
QSqlQueryModel * chercherreservation(int,int);


private:
    int id_client;
    int id_reservation;
     QString date_res;

};

#endif // RESERVATION_H
