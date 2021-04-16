#include "fournisseur.h"
#include<QSqlQuery>
#include<QtDebug>
#include<QObject>
#include<QStringList>

Fournisseur::Fournisseur()
{
    id_fournisseur=0;
    nom="";
   prenom="";
    cin=0;
     adresse="";
     email="";
id=0;


}

Fournisseur::Fournisseur(int id_fournisseur ,QString nom ,QString prenom,int cin, QString adresse, QString email,int id)
{this->id_fournisseur=id_fournisseur;
this->nom=nom;
this->prenom=prenom;
    this->cin=cin;
    this->adresse=adresse;
this->email=email;
this->id=id;}

int Fournisseur::getid_fournisseur(){return id_fournisseur;}
QString Fournisseur::getnom(){return nom;}
QString Fournisseur::getprenom(){return prenom;}
int Fournisseur::getcin(){return cin;}
QString Fournisseur::getadresse(){return adresse;}
QString Fournisseur::getemail(){return email;}




void Fournisseur::setid_fournisseur(int id_fournisseur){this->id_fournisseur=id_fournisseur;}
 void Fournisseur::setnom(QString nom ){this->nom=nom;}
 void Fournisseur::setprenom(QString prenom){this->prenom=prenom;}

 void Fournisseur::setcin(int cin){this->cin=cin;}
 void Fournisseur::setadresse(QString adresse){this->adresse=adresse;}
void Fournisseur::setemail(QString email){this->email=email;}
int Fournisseur::getid(){
    return id;
}
void Fournisseur::setid(int id){
    this->id=id;
}

bool Fournisseur::ajouterfournisseur() {

    QSqlQuery query;
    QString id_string=QString::number(id_fournisseur);
       QString id_ingredient_string=QString::number(id);
     QString cin_string=QString::number(cin);
          query.prepare("INSERT INTO fournisseur (id_fournisseur, nom, prenom,cin,adresse,email,id) "
                        "VALUES (:id_fournisseur, :nom, :prenom, :cin,:adresse,:email,:id)");
          query.bindValue(":id_fournisseur", id_string);
          query.bindValue(":nom", nom);
          query.bindValue(":prenom", prenom);
          query.bindValue(":cin", cin_string);
          query.bindValue(":adresse", adresse);
          query.bindValue(":email", email);
query.bindValue(":id", id_ingredient_string);
        return  query.exec();

}

QSqlQueryModel*Fournisseur::afficherfourniseeur()
{

        QSqlQueryModel * model=new QSqlQueryModel();
        model->setQuery("select fournisseur.id_fournisseur, fournisseur.nom, fournisseur.prenom,fournisseur.cin,fournisseur.adresse,fournisseur.email,ingredient.id from fournisseur inner join ingredient on fournisseur.id=ingredient.id");
        model->setHeaderData(0, Qt::Horizontal, QObject::tr("ID"));
        model->setHeaderData(1, Qt::Horizontal, QObject::tr("Nom"));
          model->setHeaderData(2, Qt::Horizontal, QObject::tr("Prénom"));
          model->setHeaderData(3, Qt::Horizontal, QObject::tr("CIN"));
            model->setHeaderData(4, Qt::Horizontal, QObject::tr("Adresse"));
             model->setHeaderData(5, Qt::Horizontal, QObject::tr("Email"));
              model->setHeaderData(6, Qt::Horizontal, QObject::tr("ID Ingrédient"));

        return model;

}

bool Fournisseur::supprimerfournisseur(int id_fournisseur)
{
    QSqlQuery query;
    QString id_string=QString::number(id_fournisseur);
     QString cin_string=QString::number(cin);
          query.prepare("DELETE from fournisseur where id_fournisseur=:id_fournisseur");
          query.bindValue(0, id_fournisseur);

        return  query.exec();


}
/*QSqlQueryModel*Fournisseur:: trierfournisseur()
{

    QSqlQueryModel * model=new QSqlQueryModel();
    model->setQuery("select * from fournisseur order by nom ");
    model->setHeaderData(0, Qt::Horizontal, QObject::tr("id"));
    model->setHeaderData(1, Qt::Horizontal, QObject::tr("Nom"));
      model->setHeaderData(1, Qt::Horizontal, QObject::tr("prenom"));
      model->setHeaderData(1, Qt::Horizontal, QObject::tr("cin"));
        model->setHeaderData(1, Qt::Horizontal, QObject::tr("adresse"));
         model->setHeaderData(1, Qt::Horizontal, QObject::tr("email"));


    return model;
}
*/
QSqlQueryModel *Fournisseur::chercher_emp_avancee1(QString  nom,QString  prenom)
 {

    {
        QSqlQueryModel *model = new QSqlQueryModel;
          //QString res=QString::number();
        //QString res1=QString::number(duree);

        model->setQuery("SELECT * FROM fournisseur  WHERE upper(NOM) Like upper('"+nom+"%') and upper(prenom) Like upper('"+prenom+"%')  ");
        model->setHeaderData(0, Qt::Horizontal, QObject::tr("ID"));
        model->setHeaderData(1, Qt::Horizontal, QObject::tr("Nom"));
          model->setHeaderData(2, Qt::Horizontal, QObject::tr("Prénom"));
          model->setHeaderData(3, Qt::Horizontal, QObject::tr("CIN"));
            model->setHeaderData(4, Qt::Horizontal, QObject::tr("Adresse"));
             model->setHeaderData(5, Qt::Horizontal, QObject::tr("Email"));
              model->setHeaderData(6, Qt::Horizontal, QObject::tr("ID Ingrédient"));

        qDebug() << model;
        return model ;
    }
}
QStringList Fournisseur::listfournisseur(){
    QSqlQuery query;
    query.prepare("select * from fournisseur");
    query.exec();
    QStringList list;
    while(query.next()){
        list.append(query.value(0).toString());
    }

    return list;

}

bool Fournisseur::modifierfournisseur(int id_fournisseur){
    QSqlQuery query;
    query.prepare("update fournisseur set id_fournisseur=:id_fournisseur ,nom=:nom,prenom=:prenom,cin=:cin,adresse=:adresse,email=:email where id_fournisseur=:id_fournisseur");
    query.bindValue(":id_fournisseur", id_fournisseur);
    query.bindValue(":nom", nom);
    query.bindValue(":prenom", prenom);
    query.bindValue(":cin", cin);
    query.bindValue(":adresse", adresse);
    query.bindValue(":email", email);

    return query.exec();
}
Fournisseur Fournisseur::recherche_fournisseur(int id_fournisseur){
    QSqlQuery query;
    query.prepare("select *from fournisseur where id_fournisseur=:id_fournisseur");
    query.bindValue(":id_fournisseur",id_fournisseur);
    query.exec();
    Fournisseur c;
    while(query.next()){
        c.setid_fournisseur(query.value(0).toInt());
        c.setnom(query.value(1).toString());
        c.setprenom(query.value(2).toString());
        c.setcin(query.value(3).toInt());
        c.setadresse(query.value(4).toString());
        c.setemail(query.value(5).toString());

    }

    return c;
}
QSqlQueryModel* Fournisseur::chercher_four_par_nom( QString t)
 {

    {QSqlQueryModel *model = new QSqlQueryModel;
        model->setQuery("SELECT * FROM fournisseur WHERE nom like '"+t+"%'  ");
        model->setHeaderData(0, Qt::Horizontal, QObject::tr("ID"));
        model->setHeaderData(1, Qt::Horizontal, QObject::tr("Nom"));
          model->setHeaderData(2, Qt::Horizontal, QObject::tr("Prénom"));
          model->setHeaderData(3, Qt::Horizontal, QObject::tr("CIN"));
            model->setHeaderData(4, Qt::Horizontal, QObject::tr("Adresse"));
             model->setHeaderData(5, Qt::Horizontal, QObject::tr("Email"));
              model->setHeaderData(6, Qt::Horizontal, QObject::tr("ID Ingrédient"));
        return model;
    }

 }


QSqlQueryModel* Fournisseur::chercher_four_par_prenom( QString p)
 {

    {QSqlQueryModel *model = new QSqlQueryModel;
        model->setQuery("SELECT * FROM fournisseur WHERE prenom like '"+p+"%'  ");
        model->setHeaderData(0, Qt::Horizontal, QObject::tr("ID"));
        model->setHeaderData(1, Qt::Horizontal, QObject::tr("Nom"));
          model->setHeaderData(2, Qt::Horizontal, QObject::tr("Prénom"));
          model->setHeaderData(3, Qt::Horizontal, QObject::tr("CIN"));
            model->setHeaderData(4, Qt::Horizontal, QObject::tr("Adresse"));
             model->setHeaderData(5, Qt::Horizontal, QObject::tr("Email"));
              model->setHeaderData(6, Qt::Horizontal, QObject::tr("ID Ingrédient"));
        return model;
    }

 }
QSqlQueryModel* Fournisseur:: triernom()
{

    QSqlQueryModel * model=new QSqlQueryModel();
    model->setQuery("select * from fournisseur order by nom ");
    model->setHeaderData(0, Qt::Horizontal, QObject::tr("ID"));
    model->setHeaderData(1, Qt::Horizontal, QObject::tr("Nom"));
      model->setHeaderData(2, Qt::Horizontal, QObject::tr("Prénom"));
      model->setHeaderData(3, Qt::Horizontal, QObject::tr("CIN"));
        model->setHeaderData(4, Qt::Horizontal, QObject::tr("Adresse"));
         model->setHeaderData(5, Qt::Horizontal, QObject::tr("Email"));
          model->setHeaderData(6, Qt::Horizontal, QObject::tr("ID Ingrédient"));


    return model;
}

QSqlQueryModel* Fournisseur:: trierprenom()
{

    QSqlQueryModel * model=new QSqlQueryModel();
    model->setQuery("select * from fournisseur order by prenom ");
    model->setHeaderData(0, Qt::Horizontal, QObject::tr("ID"));
    model->setHeaderData(1, Qt::Horizontal, QObject::tr("Nom"));
      model->setHeaderData(2, Qt::Horizontal, QObject::tr("Prénom"));
      model->setHeaderData(3, Qt::Horizontal, QObject::tr("CIN"));
        model->setHeaderData(4, Qt::Horizontal, QObject::tr("Adresse"));
         model->setHeaderData(5, Qt::Horizontal, QObject::tr("Email"));
          model->setHeaderData(6, Qt::Horizontal, QObject::tr("ID Ingrédient"));

    return model;
}


QSqlQueryModel* Fournisseur:: trieremail()
{

    QSqlQueryModel * model=new QSqlQueryModel();
    model->setQuery("select * from fournisseur order by email ");
    model->setHeaderData(0, Qt::Horizontal, QObject::tr("ID"));
    model->setHeaderData(1, Qt::Horizontal, QObject::tr("Nom"));
      model->setHeaderData(2, Qt::Horizontal, QObject::tr("Prénom"));
      model->setHeaderData(3, Qt::Horizontal, QObject::tr("CIN"));
        model->setHeaderData(4, Qt::Horizontal, QObject::tr("Adresse"));
         model->setHeaderData(5, Qt::Horizontal, QObject::tr("Email"));
          model->setHeaderData(6, Qt::Horizontal, QObject::tr("ID Ingrédient"));

    return model;
}
