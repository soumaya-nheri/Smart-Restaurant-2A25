#ifndef MENU_H
#define MENU_H

#include<QDate>
#include<QString>
#include<QSqlQueryModel>

#include <QPdfWriter>
class Menu
{
public:
    Menu();
     Menu(int,QString,int,QString,QString,QString);
    //getter
    int getid_plat();
    QString getnom_plat();
    int getprix();
     QString gettype();
    QString getdescription();
     QString getcuisine();
      //setter
    void setid_plat(int);
    void setnom_plat(QString);
    void setprix(int);
    void settype(QString);
    void setdescription(QString);
     void setcuisine(QString);

    //methode
     bool ajoutermenu();
     QSqlQueryModel* affichermenu();
    bool supprimermenu(int);
    bool modifiermenu(int,QString,int,QString,QString,QString );
//QStringList liste();
// Menu recherche_Id(int);
  QSqlQueryModel* triermenu();
// QSqlQueryModel* trier();
 QSqlQueryModel* triermenu2();
QSqlQueryModel * cherchermenu(QString nom_plat,QString type);
QSqlQueryModel * chercher_menu_par_nom(QString);
QSqlQueryModel * chercher_menu_par_type(QString);
QSqlQueryModel * chercher_menu_par_cuisine(QString);

private:
    int id_plat;
   QString nom_plat;
   int prix;
 QString type;
 QString description ;
QString cuisine ;


};



#endif // MENU_H
