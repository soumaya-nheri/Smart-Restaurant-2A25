#ifndef EMPLOYE_H
#define EMPLOYE_H


#include<QDate>
#include<QString>
#include<QSqlQueryModel>

class Employe
{
public:
    Employe();
Employe(int,QString,QString,QDate,int);
    //getter
    int getid();
    QString getnom();
    QString getprenom();
     QDate getdate();
     int getsalaire();
      //setter
    void setid(int);
    void setnom(QString);
    void setprenom(QString);
    void setsalaire(int);
    void setdate(QDate);

    //methode
     bool ajouter();
     QSqlQueryModel* afficher();
     bool supprimer(int);
private:
    int id;
    QString nom;
   QString prenom;
   int Salaire;
 QDate date;


};
#endif // EMPLOYE_H
