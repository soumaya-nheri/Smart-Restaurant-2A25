#ifndef PROFILS_H
#define PROFILS_H

#include<QDate>
#include<QString>
#include<QSqlQueryModel>
#include <QComboBox>

class Profils
{
public:
    Profils();
Profils(QString,QString, int);
    //getter

    QString getlogin();
    QString getmot_de_passe();

      //setter
    void setlogin(QString);
    void setmot_de_passe(QString);

    //methode
     bool ajouter();
     QSqlQueryModel* afficher();
     bool supprimer(int);
      Profils recherche_Id(int);
     bool modifier(int );
QStringList liste();
  QSqlQueryModel* trier1();
 QSqlQueryModel* trier();
 QSqlQueryModel* trier2();
 QSqlQueryModel * chercher_profils_avancee(QString login);
  QSqlQueryModel* Filter(int);
 QSqlQueryModel* rechercher(QString str,QString str1,int i); ///const QString & QString
 QStringList listeProfils();
 bool login(QString, QString);

 void fillComboP(QComboBox*);
void fillComboE(QComboBox*);


private:

    QString LOGIN;
   QString MOT_DE_PASSE;
   int id_e;


};



#endif // PROFILS_H
