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
      Employe recherche_Id(int);
     bool modifier(int );
QStringList liste();
  QSqlQueryModel* trier1();
 QSqlQueryModel* trier();
 QSqlQueryModel* trier2();
 QSqlQueryModel * chercher_emp_avancee(QString nom,QString prenom);
 QSqlQueryModel * chercher_emp_nom_id(const QString &str);
 QSqlQueryModel * chercher_employe_par_nom( QString);
 QSqlQueryModel * chercher_employe_par_prenom(QString);
 QSqlQueryModel * chercher_employe_par_id( int);
  QSqlQueryModel* Filter(int);
 QSqlQueryModel* rechercher(QString str,QString str1,int i); ///const QString & QString
 QStringList listemploye();
  int calcul_employe(int,int);

  QSqlQueryModel* search(QString);
private:
    int id;
    QString nom;
   QString prenom;
   int Salaire;
 QDate date;


};

#endif // EMPLOYE_H
