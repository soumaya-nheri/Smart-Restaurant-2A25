#ifndef PROMTION_H
#define PROMTION_H
#include <QString>
#include <QSqlQuery>
#include <QSqlQueryModel>
#include <QSqlTableModel>
#include <QtGui>
#include <QtSql>
#include <QtCore>

class promotion
{
public:
    promotion();
    promotion(int,QString,float,float,float,int);
    promotion(QString,float,float,float,int);

    int get_Id();
    QString get_Produit();
    float get_PrixAv();
    float get_Pourcentage();
    float get_PrixAp();
    int get_Duree();



    bool ajouter();
    bool modifier(QString,QString,QString,QString,QString,QString);
    bool supprimer(int);

    QSqlQueryModel * afficher();
    QSqlQueryModel * afficherecherche(QString);
    QSqlQueryModel * triafficher(QString);
    QSqlQueryModel * remplircombopromo();
    QSqlQuery request(QString);
    QSqlQueryModel * recupererproduits();
    QSqlQuery requestproduit(QString id);

private:
    int id;
    QString produit;
    float prixAv;
    float pourcentage;
    float prixAp;
    int duree;

};

#endif // PROMTION_H
