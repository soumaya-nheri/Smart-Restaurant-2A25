#ifndef MENU_H
#define MENU_H

#include<QDate>
#include<QString>
#include<QSqlQueryModel>

#include <QPdfWriter>
class Client
{
public:
    Client();
    Client(int,QString,QString,QString,int);
    //getter
    int getid();
    QString getnom();
     QString getprenom();
    QString getadresse();
     int getnum();
      //setter
    void setid(int);
    void setnom(QString);
    void setprenom(QString);
    void setadresse(QString);
     void setnum(int);

    //methode
     bool ajouterclient();
     QSqlQueryModel* afficherclient();
    bool supprimerclient(int);
    bool modifierclient(int,QString,QString,QString,int );
//QStringList liste();
// Menu recherche_Id(int);
  QSqlQueryModel* trierclient();
// QSqlQueryModel* trier();
 QSqlQueryModel* trierclient2();
 QSqlQueryModel* trierclient3();
QSqlQueryModel * chercherclient(QString,QString);


private:
    int id;
   QString nom;
 QString prenom;
 QString adresse ;
 int num ;


};



#endif // MENU_H
