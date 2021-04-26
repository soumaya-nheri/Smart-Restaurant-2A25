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

    bool ajouter();
    bool modifier(QString,QString,QString,QString,QString,QString);
    bool supprimer(int);

    QSqlQueryModel * afficher();
    QSqlQueryModel * afficherecherche(QString);
    QSqlQueryModel * triafficher(QString);
    QSqlQueryModel * remplircombopromo();
    QSqlQuery request(QString);

private:
    int id;
    QString menu;
    float prixAv;
    float pourcentage;
    float prixAp;
    int duree;

};

#endif // PROMTION_H
