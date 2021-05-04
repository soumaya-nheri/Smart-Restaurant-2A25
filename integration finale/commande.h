#ifndef COMMANDE_H
#define COMMANDE_H
#include<QDate>
#include<QString>
#include<QSqlQueryModel>
#include<QDate>

#include <QPdfWriter>
class Commande
{
public:
    Commande();
    Commande(int,int,QString,int);
    //getter
    int getid_client();
    int getid_commande();
     QString getdescription();
     int getid_prix();
      //setter
    void setid_client(int);
    void setid_commande(int);
    void setdescription(QString);
    void setprix(int);


    //methode
     bool ajoutercommande();
     QSqlQueryModel* affichercommande();
    bool supprimercommande(int);
    bool modifiercommande(int,int,QString,int);
//QStringList liste();
// Menu recherche_Id(int);
  QSqlQueryModel* triercommande();
// QSqlQueryModel* trier();
 QSqlQueryModel* triercommande2();
QSqlQueryModel * cherchercommande(int,int);


private:
    int id_client;
    int id_commande;
     QString description;
     int prix;

};

#endif // COMMANDE_H
