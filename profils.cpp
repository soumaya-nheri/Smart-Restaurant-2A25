#include "profils.h"

#include<QSqlQuery>
#include<QtDebug>
#include<QObject>

#include<QStringList>



Profils::Profils()
{

LOGIN="";
MOT_DE_PASSE="";
}
Profils::Profils(QString LOGIN ,QString MOT_DE_PASSE, int id)
{this->LOGIN=LOGIN;
this->MOT_DE_PASSE=MOT_DE_PASSE;
    this->id_e = id;
}

QString Profils::getlogin(){return LOGIN;}

QString Profils::getmot_de_passe(){return MOT_DE_PASSE;}



void Profils::setlogin(QString LOGIN){this->LOGIN=LOGIN;}
 void Profils::setmot_de_passe(QString MOT_DE_PASSE) {this->MOT_DE_PASSE=MOT_DE_PASSE;}

 bool Profils::ajouter (){

      QSqlQuery query;
           query.prepare("INSERT INTO PROFILS (login,password,id_e) "
                         "VALUES (:login, :password,:id_e)");
           query.bindValue(":login", LOGIN);
             query.bindValue(":password",MOT_DE_PASSE);
             query.bindValue(":id_e",id_e);

         return  query.exec();

 }
 bool Profils::supprimer(int id)
 {
     QSqlQuery query;
     QString id_string=QString::number(id);
           query.prepare("DELETE from PROFILS where login = ?");
           query.addBindValue(this->LOGIN);

         return  query.exec();


 }
QSqlQueryModel*Profils::afficher()
{
    QSqlQueryModel*model=new QSqlQueryModel();

         model->setQuery("SELECT * FROM PROFILS");
         model->setHeaderData(0, Qt::Horizontal, QObject::tr("LOGIN"));
         model->setHeaderData(1, Qt::Horizontal, QObject::tr("PASSWORD"));
          model->setHeaderData(1, Qt::Horizontal, QObject::tr("ID EMPLOYE"));
           return model;
}


QStringList Profils::liste(){
    QSqlQuery query;
    query.prepare("SELECT * FROM PROFILS");
    query.exec();
    QStringList list;
    while(query.next()){
        list.append(query.value(0).toString());
    }

    return list;

}


Profils Profils::recherche_Id(int id){
    QSqlQuery query;
    query.prepare("SELECT * FROM EMPLOYES WHERE ID=:ID");
    query.bindValue(":ID",id);
    query.exec();
    Profils p;
    while(query.next()){
        p.setlogin(query.value(1).toString());
        p.setmot_de_passe(query.value(1).toString());

    }

    return p;
}

bool Profils::modifier(int IDC)
{
    QSqlQuery query;
    query.prepare("UPDATE  PROFILS SET password = ?, id_e = ? WHERE login = ?");
    query.addBindValue(this->MOT_DE_PASSE);
    query.addBindValue(this->id_e);
    query.addBindValue(this->LOGIN);

    return query.exec();
}
QSqlQueryModel* Profils:: trier1()
{

    QSqlQueryModel * model=new QSqlQueryModel();
    model->setQuery("select * from Profils order by LOGIN ");
    model->setHeaderData(1, Qt::Horizontal, QObject::tr("LOGIN"));
     model->setHeaderData(1, Qt::Horizontal, QObject::tr("MOT_DE_PASSE"));


    return model;
}

bool Profils::login(QString l, QString p) {
    QSqlQuery query;
    query.prepare("SELECT login, password, id_e FROM PROFILS WHERE login = ? AND password = ?");
    query.addBindValue(l);
    query.addBindValue(p);
    query.exec();
    while(query.next()){
        if(query.value(0).toString() == l && query.value(1).toString() == p) {
            this->LOGIN = query.value(0).toString();
            this->MOT_DE_PASSE = query.value(1).toString();
            this->id_e = query.value(2).toInt();
            return true;
        }
    }
    return false;
}

void Profils::fillComboP(QComboBox* c)
{
    c->clear();
    QSqlQuery query;
    query.exec("SELECT LOGIN FROM PROFILS");
    while(query.next()) {
        c->addItem(query.value(0).toString());
    }
}

void Profils::fillComboE(QComboBox* c)
{
    c->clear();
    QSqlQuery query;
    query.exec("SELECT id FROM EMPLOYES");
    while(query.next()) {
        c->addItem(query.value(0).toString());
    }
}


