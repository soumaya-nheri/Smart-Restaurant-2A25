#ifndef NOTIFICATION_H
#define NOTIFICATION_H
#include <QSystemTrayIcon>
 #include<QString>
class notif
{
public:
    notif();
    notif(QString,QString);
    void afficher();
private:
    int num;
    QString text,titre;
};


#endif // NOTIFICATION_H
