#ifndef REVENUE_H
#define REVENUE_H


#include<QDate>
#include<QString>
#include<QSqlQueryModel>

class revenue
{
public:
    revenue();
revenue(int,QDate,int);
    //getter
    int getid_revenue();
    QDate getdate_revenue();
    int getmontant();


      //setter
    void setid_revenue(int);
    void setdate_revenue(QDate);
    void setmontant(int);


    //methode
     bool ajouter();
     QSqlQueryModel* afficher();
     bool supprimer(int);
      revenue recherche_Id(int);
     bool modifier(int );
QStringList liste();
 QSqlQueryModel * chercher_revenue_par_id( int);
  QSqlQueryModel* Filter(int);
 QSqlQueryModel* rechercher(QString str,QString str1,int i); ///const QString & QString
  QSqlQueryModel * afficherecherche(QString res);

private:
    int id_revenue;
    QDate date_revenue;
    int montant;




};


#endif // REVENUE_H
