#ifndef INGREDIENT_H
#define INGREDIENT_H

#include<QString>
#include<QSqlQueryModel>
class Ingredient
{
public:
    Ingredient();

    Ingredient(int,QString,int);
    int getid();
    QString getnom();
    int getquantite();
    void setid(int);
     void setnom(QString);
     void setquantite(int);
     bool ajouter();
     QSqlQueryModel* afficher();
     bool supprimer(int);
     void modifier(int,QString,int);

private:
    int id;
   QString nom;
   int quantite;



};

#endif // INGREDIENT_H
