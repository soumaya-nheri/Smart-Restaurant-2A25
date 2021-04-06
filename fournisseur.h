#ifndef FOURNISSEUR_H
#define FOURNISSEUR_H

#include<QDate>
#include<QString>
#include<QSqlQueryModel>

#include <QPdfWriter>


class Fournisseur
{
public:
    Fournisseur();

    Fournisseur(int,QString,QString,int,QString,QString,int);
    //getter
    int getid_fournisseur();
     int getcin();
    QString getnom();
    QString getprenom();
     QString getadresse();
     QString getemail();
int getid();
      //setter
    void setid_fournisseur(int);
      void setcin(int);
    void setnom(QString);
    void setprenom(QString);
    void setadresse(QString);
    void setemail(QString);
 void setid(int);


    bool ajouterfournisseur();
    QSqlQueryModel* afficherfourniseeur();

 bool supprimerfournisseur(int);
 //QSqlQueryModel* trierfournisseur();
bool modifierfournisseur(int);
QStringList listfournisseur();
QSqlQueryModel * chercher_emp_avancee1(QString nom,QString prenom);

 Fournisseur recherche_fournisseur(int);
 QSqlQueryModel * chercher_four_par_nom(QString);
 QSqlQueryModel * chercher_four_par_prenom(QString);
 QSqlQueryModel* triernom();
QSqlQueryModel* trierprenom();
QSqlQueryModel* trieremail();

private:
    int id_fournisseur;
    int cin;
   QString nom;
 QString prenom;
 QString adresse;
QString email;
int id;

};

#endif // FOURNISSEUR_H
