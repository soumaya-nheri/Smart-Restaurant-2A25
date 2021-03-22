#ifndef PROMTION_H
#define PROMTION_H
#include <QString>

class promtion
{
public:
    promtion();
    promtion(QString,float,float,float,int);
    promtion(int,QString,float,float,float,int);


private:
    int id;
    QString produit;
    float prixAv;
    float prixAp;
    float pourcentage;
    int duree;

};

#endif // PROMTION_H
