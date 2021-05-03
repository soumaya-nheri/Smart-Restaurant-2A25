#ifndef LIVREUR_H
#define LIVREUR_H
#include <QString>
#include <QSqlQuery>
#include <QSqlQueryModel>
#include <QComboBox>

class Livreur
{
private:
    int id;
    QString nom;
    QString prenom;
    int salaire;
public:
    Livreur();
    Livreur(int, QString, QString, int);

    int getId();
    void setId(int);
    QString getNom();
    void setNom(QString);
    QString getPrenom();
    void setPrenom(QString);
    int getSalaire();
    void setSalaire(int);

    bool ajouter();
    QSqlQueryModel* afficher();
    bool modifier();
    bool supprimer();
    QSqlQueryModel* sort(QString);
    QSqlQueryModel* search(QString);
    void fillComboBoxId(QComboBox*);

};

#endif // LIVREUR_H
