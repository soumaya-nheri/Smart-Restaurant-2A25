#ifndef INGREDIENT_H
#define INGREDIENT_H

#include<QDate>
#include<QString>
#include<QSqlQueryModel>

#include <QPdfWriter>
class Ingredient
{
public:
    Ingredient();

    Ingredient(int,QString,int,QDate,QString);
    //getter
    int getid();
    QString getnom();
    int getquantite();
     QString getmarque();
     QDate getdate_expiration();

      //setter
    void setid(int);
    void setnom(QString);
    void setquantite(int);
    void setmarque(QString);
    void setdate_expiration(QDate);

    //methode
     bool ajouter();
     QSqlQueryModel* afficher();
     bool supprimer(int);
     bool modifier(int );

QStringList liste();
  Ingredient recherche_Id(int);
  QSqlQueryModel* trier1();
 QSqlQueryModel* trier();
 QSqlQueryModel* trier2();
 QSqlQueryModel * chercher_emp_avancee(QString nom,QString marque);
 QSqlQueryModel* search(QString);
private:
    int id;
   QString nom;
   int quantite;
 QDate date_expiration;
 QString marque;


};

#endif // INGREDIENT_H
