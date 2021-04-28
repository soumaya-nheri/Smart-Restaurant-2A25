#include "liv.h"
#include "src/SmtpMime"

Liv::Liv()
{
    this->id = 0;
    this->adresse = "";
    this->description = "";
    this->id_commande = 0;
    this->id_livreur = 0;
}

Liv::Liv(int _0_, QString _1_, QString _2_, int _3_, int _4_)
{
    this->id = _0_;
    this->adresse = _1_;
    this->description = _2_;
    this->id_commande = _3_;
    this->id_livreur = _4_;
}

int Liv::getId()
{
    return this->id;
}

void Liv::setId(int _0_)
{
    this->id = _0_;
}

QString Liv::getAdresse()
{
    return this->adresse;
}

void Liv::setAdresse(QString _1_)
{
    this->adresse = _1_;
}

QString Liv::getDescription()
{
    return this->description;
}

void Liv::setDescription(QString _2_)
{
    this->description = _2_;
}

int Liv::getId_commande()
{
    return this->id_commande;
}

void Liv::setId_commande(int _3_)
{
    this->id_commande = _3_;
}

int Liv::getId_livreur()
{
    return this->id_livreur;
}

void Liv::setId_livreur(int _4_)
{
    this->id_livreur = _4_;
}

bool Liv::ajouter()
{
    QSqlQuery query;
    query.prepare("INSERT INTO livraison (id, adresse, description, id_commande, id_livreur) VALUES (?, ?, ?, ?, ?)");
    query.addBindValue(QString::number(this->id));
    query.addBindValue(this->adresse);
    query.addBindValue(this->description);
    query.addBindValue(QString::number(this->id_commande));
    query.addBindValue(QString::number(this->id_livreur));

    return query.exec();
}

bool Liv::modifier()
{
    QSqlQuery query;
    query.prepare("UPDATE livraison SET adresse = ?, description = ?, id_commande = ?, id_livreur = ? WHERE id = ?");
    query.addBindValue(this->adresse);
    query.addBindValue(this->description);
    query.addBindValue(QString::number(this->id_commande));
    query.addBindValue(QString::number(this->id_livreur));
    query.addBindValue(QString::number(this->id));

    return query.exec();
}

bool Liv::supprimer()
{
    QSqlQuery query;
    query.prepare("DELETE FROM livraison WHERE id = ?");
    query.addBindValue(QString::number(this->id));

    return query.exec();
}

QSqlQueryModel* Liv::afficher()
{
    QSqlQuery query;
    query.exec("SELECT * FROM livraison");

    QSqlQueryModel*model=new QSqlQueryModel();
    model->setQuery(query);
    model->setHeaderData(0, Qt::Horizontal, QObject::tr("ID"));
    model->setHeaderData(1, Qt::Horizontal, QObject::tr("ADRESSE"));
    model->setHeaderData(2, Qt::Horizontal, QObject::tr("DESCRIPTION"));
    model->setHeaderData(3, Qt::Horizontal, QObject::tr("ID COMMANDE"));
    model->setHeaderData(4, Qt::Horizontal, QObject::tr("ID LIVREUR"));

    return model;
}

QSqlQueryModel* Liv::sort(QString __input__)
{
    QSqlQuery query;
    query.exec("SELECT * FROM livraison ORDER BY "+__input__+" ASC");

    QSqlQueryModel*model=new QSqlQueryModel();
    model->setQuery(query);
    model->setHeaderData(0, Qt::Horizontal, QObject::tr("ID"));
    model->setHeaderData(1, Qt::Horizontal, QObject::tr("ADRESSE"));
    model->setHeaderData(2, Qt::Horizontal, QObject::tr("DESCRIPTION"));
    model->setHeaderData(3, Qt::Horizontal, QObject::tr("ID COMMANDE"));
    model->setHeaderData(4, Qt::Horizontal, QObject::tr("ID LIVREUR"));

    return model;
}

QSqlQueryModel* Liv::search(QString __input__)
{
    QSqlQuery query;
    query.prepare("SELECT * FROM livraison WHERE adresse LIKE ? OR description LIKE ? OR id_commande LIKE ? OR id_livreur LIKE ?");
    query.addBindValue("%"+__input__+"%");
    query.addBindValue("%"+__input__+"%");
    query.addBindValue("%"+__input__+"%");
    query.addBindValue("%"+__input__+"%");
    query.exec();

    QSqlQueryModel*model=new QSqlQueryModel();
    model->setQuery(query);
    model->setHeaderData(0, Qt::Horizontal, QObject::tr("ID"));
    model->setHeaderData(1, Qt::Horizontal, QObject::tr("ADRESSE"));
    model->setHeaderData(2, Qt::Horizontal, QObject::tr("DESCRIPTION"));
    model->setHeaderData(3, Qt::Horizontal, QObject::tr("ID COMMANDE"));
    model->setHeaderData(4, Qt::Horizontal, QObject::tr("ID LIVREUR"));

    return model;
}

void Liv::fillComboBoxId(QComboBox* __comboBox)
{
    __comboBox->clear();
    QSqlQuery query;
    query.exec("SELECT id FROM livraison");
    while(query.next()) {
        __comboBox->addItem(query.value(0).toString());
    }
}

void Liv::fillComboBoxCommande(QComboBox* __comboBox)
{
    __comboBox->clear();
    QSqlQuery query;
    query.exec("SELECT id FROM commande");
    while(query.next()) {
        __comboBox->addItem(query.value(0).toString());
    }
}
/*

void Liv::sendMail()
{
    SmtpClient smtp("smtp.gmail.com", 465, SmtpClient::SslConnection);

    smtp.setUser("soltani.firas@esprit.tn");
    smtp.setPassword("191JMT4454");

    MimeMessage message;

    EmailAddress sender("soltani.firas@esprit.tn", "firas");
    message.setSender(&sender);

    EmailAddress to("soltani.firas@esprit.tn", "firas");
    message.addRecipient(&to);

    message.setSubject(" Livraison ajouter ");

    MimeText text;
    text.setText("Livrasion:: id:"+QString::number(this->id)+", adresse:"+this->adresse+", description:"+this->description+", id_commande:"+QString::number(this->id_commande)+", id_livreur:"+QString::number(this->id_livreur));

    message.addPart(&text);

        if (!smtp.connectToHost()) {
            qDebug() << "Failed to connect to host!" << endl;
        }

        if (!smtp.login()) {
            qDebug() << "Failed to login!" << endl;
        }

        if (!smtp.sendMail(message)) {
            qDebug() << "Failed to send mail!" << endl;
        }

    smtp.quit();
}
*/
