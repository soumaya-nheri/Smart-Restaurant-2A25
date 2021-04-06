#include "Employe.h"
#include<QSqlQuery>
#include<QtDebug>
#include<QObject>

#include<QStringList>



Employe::Employe()
{
id=0;
nom="";
prenom="";
Salaire =0;
date=QDate(2000,01,01);


}
Employe::Employe(int id ,QString nom ,QString prenom,QDate date,int Salaire)
{this->id=id;
this->nom=nom;
this->prenom=prenom;
 this->date=date;
 this->Salaire=Salaire;}

int Employe::getid(){return id;}
QString Employe::getnom(){return nom;}
QString Employe::getprenom(){return prenom;}
int Employe::getsalaire(){return Salaire;}
QDate Employe::getdate(){ return date;}

void Employe::setdate(QDate date){
    this->date=date;}

void Employe::setid(int id){this->id=id;}

 void Employe::setnom(QString nom ){this->nom=nom;}
void Employe::setprenom(QString prenom ){this->prenom=prenom;}
 void Employe::setsalaire(int Salaire){this->Salaire=Salaire;}


 bool Employe::ajouter (){

      QSqlQuery query;
     QString id_string=QString::number(id);
      QString _string=QString::number(Salaire);
           query.prepare("INSERT INTO EMPLOYES (ID, NOM,PRENOM,DATE_NAISSANCE,SALAIRE) "
                         "VALUES (:ID, :NOM, :PRENOM, :DATE_NAISSANCE,:SALAIRE)");
           query.bindValue(":ID", id_string);
           query.bindValue(":NOM", nom);
             query.bindValue(":PRENOM", prenom);
               query.bindValue(":DATE_NAISSANCE",date);
           query.bindValue(":SALAIRE", Salaire);


         return  query.exec();

 }
 bool Employe::supprimer(int id)
 {
     QSqlQuery query;
     QString id_string=QString::number(id);
      QString salaire_string=QString::number(Salaire);
           query.prepare("DELETE from EMPLOYES where id=:id");
           query.bindValue(0, id);

         return  query.exec();


 }
QSqlQueryModel*Employe::afficher()
{
    QSqlQueryModel*model=new QSqlQueryModel();

         model->setQuery("SELECT * FROM EMPLOYES");
         model->setHeaderData(0, Qt::Horizontal, QObject::tr("identifient"));
         model->setHeaderData(1, Qt::Horizontal, QObject::tr("Nom d'employe"));
          model->setHeaderData(1, Qt::Horizontal, QObject::tr("Prenom d'employe"));
           model->setHeaderData(1, Qt::Horizontal, QObject::tr("Salaire d'employe"));
             model->setHeaderData(1, Qt::Horizontal, QObject::tr("date "));
           return model;
}


QStringList Employe::liste(){
    QSqlQuery query;
    query.prepare("SELECT * FROM EMPLOYES");
    query.exec();
    QStringList list;
    while(query.next()){
        list.append(query.value(0).toString());
    }

    return list;

}


Employe Employe::recherche_Id(int id){
    QSqlQuery query;
    query.prepare("SELECT * FROM EMPLOYES WHERE ID=:ID");
    query.bindValue(":ID",id);
    query.exec();
    Employe e;
    while(query.next()){
        e.setid(query.value(0).toInt());
        e.setnom(query.value(1).toString());
        e.setprenom(query.value(1).toString());
             e.setsalaire(query.value(2).toInt());
            e.setdate(query.value(3).toDate());

    }

    return e;
}

bool Employe::modifier(int IDC)
{
    QSqlQuery query;
    QString id_string=QString::number(id);
     QString salaire_string=QString::number(Salaire);
    query.prepare("UPDATE  EMPLOYES SET ID=:ID, NOM=:NOM, PRENOM=:PRENOM,DATE_NAISSANCE=:DATE_NAISSANCE, SALAIRE=:SALAIRE WHERE ID=:IDC");
    query.bindValue(":ID", id_string);
    query.bindValue(":NOM", nom);
      query.bindValue(":PRENOM", prenom);
    query.bindValue(":DATE_NAISSANCE",date);
     query.bindValue(":SALAIRE", salaire_string);
    query.bindValue(":IDC",IDC);


    return query.exec();
}
QSqlQueryModel* Employe:: trier1()
{

    QSqlQueryModel * model=new QSqlQueryModel();
    model->setQuery("select * from EMPLOYES order by NOM ");
    model->setHeaderData(0, Qt::Horizontal, QObject::tr("ID"));
    model->setHeaderData(1, Qt::Horizontal, QObject::tr("NOM"));
     model->setHeaderData(1, Qt::Horizontal, QObject::tr("PRENOM"));
    model->setHeaderData(2, Qt::Horizontal, QObject::tr("DATE_NAISSANCE"));
      model->setHeaderData(1, Qt::Horizontal, QObject::tr("SALAIRE"));


    return model;
}

QSqlQueryModel* Employe:: trier()
{
 //order by extract (year from DATE_NAISSANCE)
    QSqlQueryModel * model=new QSqlQueryModel();
    model->setQuery("select * from EMPLOYES order by (DATE_NAISSANCE)DESC ");
    model->setHeaderData(0, Qt::Horizontal, QObject::tr("ID"));
    model->setHeaderData(1, Qt::Horizontal, QObject::tr("NOM"));
     model->setHeaderData(1, Qt::Horizontal, QObject::tr("PRENOM"));
    model->setHeaderData(2, Qt::Horizontal, QObject::tr("DATE_NAISSANCE"));
      model->setHeaderData(1, Qt::Horizontal, QObject::tr("SALAIRE"));
    return model;
}
QSqlQueryModel* Employe:: trier2()
{

    QSqlQueryModel * model=new QSqlQueryModel();

    model->setQuery("select * from EMPLOYES order by (SALAIRE) ASC");
    model->setHeaderData(0, Qt::Horizontal, QObject::tr("ID"));
    model->setHeaderData(1, Qt::Horizontal, QObject::tr("NOM"));
      model->setHeaderData(1, Qt::Horizontal, QObject::tr("PRENOM"));
    model->setHeaderData(2, Qt::Horizontal, QObject::tr("DATE_NAISSANCE"));
      model->setHeaderData(1, Qt::Horizontal, QObject::tr("SALAIRE"));


    return model;
}

QSqlQueryModel *Employe::chercher_emp_avancee(QString NOM,QString PRENOM )
 {

    {
        QSqlQueryModel *model = new QSqlQueryModel;
        model->setQuery("SELECT * FROM EMPLOYES WHERE upper(nom) Like upper('"+NOM+"%') and upper (prenom)like upper ('"+PRENOM+"%')");
        model->setHeaderData(0, Qt::Horizontal, QObject::tr("ID"));
        model->setHeaderData(1, Qt::Horizontal, QObject::tr("NOM"));
          model->setHeaderData(1, Qt::Horizontal, QObject::tr("PRENOM"));
        model->setHeaderData(2, Qt::Horizontal, QObject::tr("DATE_NAISSANCE"));
          model->setHeaderData(1, Qt::Horizontal, QObject::tr("SALAIRE"));
        qDebug() << model;
        return model ;
    }
}
QSqlQueryModel * Employe::chercher_emp_nom_id(const QString &str){
    QSqlQueryModel *model=new QSqlQueryModel();
    model->setQuery("select * from EMPLOYES where NOM like '"+str+"%' or ID  like '"+str+"%'");
    model->setHeaderData(0, Qt::Horizontal, QObject::tr("ID"));
    model->setHeaderData(1, Qt::Horizontal, QObject::tr("NOM"));
    model->setHeaderData(2, Qt::Horizontal, QObject::tr("PRENOM"));
    model->setHeaderData(3, Qt::Horizontal, QObject::tr("DATE_NAISSANCE"));
    model->setHeaderData(4, Qt::Horizontal, QObject::tr("SALAIRE"));


    return model;
}

QSqlQueryModel * Employe::chercher_employe_par_nom( QString nom)
 {

    {QSqlQueryModel *model = new QSqlQueryModel;
        model->setQuery("SELECT * FROM EMPLOYES WHERE NOM like '"+nom+"%' ");
        model->setHeaderData(0, Qt::Horizontal, QObject::tr("ID"));
        model->setHeaderData(1, Qt::Horizontal, QObject::tr("NOM"));
        model->setHeaderData(2, Qt::Horizontal, QObject::tr("PRENOM"));
        model->setHeaderData(3, Qt::Horizontal, QObject::tr("DATE_NAISSANCE"));
        model->setHeaderData(4, Qt::Horizontal, QObject::tr("SALAIRE"));
        return model ;
    }

 }

QSqlQueryModel * Employe::chercher_employe_par_prenom(QString p)
 {

    {QSqlQueryModel *model = new QSqlQueryModel;
        model->setQuery("SELECT * FROM EMPLOYES WHERE PRENOM like '"+p+"%' ");
        model->setHeaderData(0, Qt::Horizontal, QObject::tr("ID"));
        model->setHeaderData(1, Qt::Horizontal, QObject::tr("NOM"));
        model->setHeaderData(2, Qt::Horizontal, QObject::tr("PRENOM"));
        model->setHeaderData(3, Qt::Horizontal, QObject::tr("DATE_NAISSANCE"));
        model->setHeaderData(4, Qt::Horizontal, QObject::tr("SALAIRE"));
        return model ;
    }

 }
QSqlQueryModel *Employe::chercher_employe_par_id(int id)
 {

    {
        QSqlQueryModel *model = new QSqlQueryModel;
        QString res=QString::number(id);
        model->setQuery("SELECT * FROM EMPLOYE WHERE ID like '"+res+"%' ");
        model->setHeaderData(0, Qt::Horizontal, QObject::tr("ID"));
        model->setHeaderData(1, Qt::Horizontal, QObject::tr("NOM"));
        model->setHeaderData(2, Qt::Horizontal, QObject::tr("PRENOM"));
        model->setHeaderData(3, Qt::Horizontal, QObject::tr("DATE_NAISSANCE"));
        model->setHeaderData(4, Qt::Horizontal, QObject::tr("SALAIRE"));


        return model ;
    }
}

QSqlQueryModel* Employe::search(QString input)
{
    QSqlQuery query;
    query.prepare("SELECT * FROM EMPLOYES WHERE NOM LIKE ? OR PRENOM LIKE ? OR DATE_NAISSANCE LIKE ? OR SALAIRE LIKE ?");
    query.addBindValue("%"+input+"%");
    query.addBindValue("%"+input+"%");
    query.addBindValue("%"+input+"%");
    query.addBindValue("%"+input+"%");
    query.exec();

    QSqlQueryModel*model=new QSqlQueryModel();
    model->setQuery(query);
    model->setHeaderData(0, Qt::Horizontal, QObject::tr("ID"));
    model->setHeaderData(1, Qt::Horizontal, QObject::tr("NOM"));
    model->setHeaderData(2, Qt::Horizontal, QObject::tr("PRENOM"));
    model->setHeaderData(3, Qt::Horizontal, QObject::tr("DATE_NAISSANCE"));
    model->setHeaderData(4, Qt::Horizontal, QObject::tr("SALAIRE"));
    return model;
}
