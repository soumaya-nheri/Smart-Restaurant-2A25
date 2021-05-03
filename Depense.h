#ifndef DEPENSE_H
#define DEPENSE_H

#include<QDate>
#include<QString>
#include<QSqlQueryModel>

class depense
{
public:
    depense();
depense(int,int,QDate,int);
    //getter
    int getid_depense();
    int getsalaire();
    QDate getdate_depense();
    int getid_produit();

      //setter
    void setid_depense(int);
    void setsalaire(int);
    void setdate_depense(QDate);
    void setid_produit(int);


    //methode
     bool ajouter();
     QSqlQueryModel* afficher();
     bool supprimer(int);
      depense recherche_Id(int);
     bool modifier(int );
QStringList liste();
  QSqlQueryModel* trier1();
 QSqlQueryModel* trier();
 QSqlQueryModel* trier2();
 QSqlQueryModel * chercher_depense_par_id( int);
  QSqlQueryModel* Filter(int);
 QSqlQueryModel* rechercher(QString str,QString str1,int i); ///const QString & QString

  QSqlQueryModel * afficherechercheD(QString res);


private:
    int id_depense;
    int salaire;
    QDate date_depense;
    int id_produit;



};

#endif // DEPENSE_H
