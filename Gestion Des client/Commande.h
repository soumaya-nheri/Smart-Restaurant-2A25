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
    Commande(int,int,QString);
    //getter
    int getid_client();
    int getid_commande();
     QString getdescription();
      //setter
    void setid_client(int);
    void setid_commande(int);
    void setdescription(QString);


    //methode
     bool ajoutercommande();
     QSqlQueryModel* affichercommande();
    bool supprimercommande(int);
    bool modifiercommande(int,int,QString);
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

};

#endif // COMMANDE_H
