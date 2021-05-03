#include "historique.h"
#include <QTextStream>
historique::historique(QObject *parent)
    : QAbstractItemModel(parent)
{

    mFilename="C:/Users/user/Desktop/int/Smart-Restaurant-2A25/his";
        mFilename1="C:/Users/user/Desktop/int/Smart-Restaurant-2A25/his";
        mFilename2="C:/Users/user/Desktop/int/Smart-Restaurant-2A25/his";
        mFilename3="C:/Users/user/Desktop/int/Smart-Restaurant-2A25/his";
        mFilename4="C:/Users/user/Desktop/int/Smart-Restaurant-2A25/his";
        mFilename5="C:/Users/user/Desktop/int/Smart-Restaurant-2A25/his";
}
QString historique::read()
{
QFile mFile(mFilename);
if (!mFile.open(QFile::ReadOnly | QFile::Text))
{
    qDebug () <<"il ne peut pas";
}
QTextStream in (&mFile);
QString text=mFile.readAll();
mFile.close();
return  text;
}
QString historique::read1()
{
QFile mFile(mFilename1);
if (!mFile.open(QFile::ReadOnly | QFile::Text))
{
    qDebug () <<"il ne peut pas";
}
QTextStream in (&mFile);
QString text=mFile.readAll();
mFile.close();
return  text;
}
QString historique::read2()
{
QFile mFile(mFilename2);
if (!mFile.open(QFile::ReadOnly | QFile::Text))
{
    qDebug () <<"il ne peut pas";
}
QTextStream in (&mFile);
QString text=mFile.readAll();
mFile.close();
return  text;
}
QString historique::read3()
{
QFile mFile(mFilename3);
if (!mFile.open(QFile::ReadOnly | QFile::Text))
{
    qDebug () <<"il ne peut pas";
}
QTextStream in (&mFile);
QString text=mFile.readAll();
mFile.close();
return  text;
}
QString historique::read4()
{
QFile mFile(mFilename4);
if (!mFile.open(QFile::ReadOnly | QFile::Text))
{
    qDebug () <<"il ne peut pas";
}
QTextStream in (&mFile);
QString text=mFile.readAll();
mFile.close();
return  text;
}
QString historique::read5()
{
QFile mFile(mFilename5);
if (!mFile.open(QFile::ReadOnly | QFile::Text))
{
    qDebug () <<"il ne peut pas";
}
QTextStream in (&mFile);
QString text=mFile.readAll();
mFile.close();
return  text;
}
void historique::write(QString text)
{
    QString aux=read();

    QDateTime datetime = QDateTime::currentDateTime();
    QString date =datetime.toString();
    date+= " ";
    aux+=date;
QFile mFile(mFilename);
if (!mFile.open(QFile::WriteOnly | QFile::Text))
{
    qDebug () <<"il ne peut pas";
}
QTextStream out (&mFile);


aux+=text;
out << aux << "\n";
mFile.flush();
mFile.close();

}
void historique::write1(QString text)
{
    QString aux=read1();

    QDateTime datetime = QDateTime::currentDateTime();
    QString date =datetime.toString();
    date+= " ";
    aux+=date;
QFile mFile(mFilename1);
if (!mFile.open(QFile::WriteOnly | QFile::Text))
{
    qDebug () <<"il ne peut pas";
}
QTextStream out (&mFile);


aux+=text;
out << aux << "\n";
mFile.flush();
mFile.close();

}
void historique::write2(QString text)
{
    QString aux=read2();

    QDateTime datetime = QDateTime::currentDateTime();
    QString date =datetime.toString();
    date+= " ";
    aux+=date;
QFile mFile(mFilename2);
if (!mFile.open(QFile::WriteOnly | QFile::Text))
{
    qDebug () <<"il ne peut pas";
}
QTextStream out (&mFile);


aux+=text;
out << aux << "\n";
mFile.flush();
mFile.close();

}
void historique::write3(QString text)
{
    QString aux=read3();

    QDateTime datetime = QDateTime::currentDateTime();
    QString date =datetime.toString();
    date+= " ";
    aux+=date;
QFile mFile(mFilename3);
if (!mFile.open(QFile::WriteOnly | QFile::Text))
{
    qDebug () <<"il ne peut pas";
}
QTextStream out (&mFile);


aux+=text;
out << aux << "\n";
mFile.flush();
mFile.close();

}
void historique::write4(QString text)
{
    QString aux=read4();

    QDateTime datetime = QDateTime::currentDateTime();
    QString date =datetime.toString();
    date+= " ";
    aux+=date;
QFile mFile(mFilename4);
if (!mFile.open(QFile::WriteOnly | QFile::Text))
{
    qDebug () <<"il ne peut pas";
}
QTextStream out (&mFile);


aux+=text;
out << aux << "\n";
mFile.flush();
mFile.close();

}
void historique::write5(QString text)
{
    QString aux=read5();

    QDateTime datetime = QDateTime::currentDateTime();
    QString date =datetime.toString();
    date+= " ";
    aux+=date;
QFile mFile(mFilename5);
if (!mFile.open(QFile::WriteOnly | QFile::Text))
{
    qDebug () <<"il ne peut pas";
}
QTextStream out (&mFile);


aux+=text;
out << aux << "\n";
mFile.flush();
mFile.close();

}
