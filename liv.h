#ifndef LIV_H
#define LIV_H
#include <QString>
#include <QSqlQuery>
#include <QSqlQueryModel>
#include <QComboBox>

class Liv
{
private:
    int id;
    QString adresse;
    QString description;
    int id_livreur;
    int id_commande;
public:
    Liv();
    Liv(int, QString, QString, int, int);

    int getId();
    void setId(int);
    QString getAdresse();
    void setAdresse(QString);
    QString getDescription();
    void setDescription(QString);
    int getId_livreur();
    void setId_livreur(int);
    int getId_commande();
    void setId_commande(int);

    bool ajouter();
    bool modifier();
    bool supprimer();
    QSqlQueryModel* afficher();
    QSqlQueryModel* sort(QString);
    QSqlQueryModel* search(QString);
    void fillComboBoxId(QComboBox*);
    void fillComboBoxCommande(QComboBox*);

    void sendMail();

};

#endif // LIV_H
