#-------------------------------------------------
#
# Project created by QtCreator 2018-10-26T21:45:23
#
#-------------------------------------------------
QT += gui
QT += core widgets
QT += charts
QT       += network
QT       += sql
QT       +=  printsupport
QT       += multimedia multimediawidgets
greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Atelier_Connexion
TEMPLATE = app

# The following define makes your compiler emit warnings if you use
# any feature of Qt which has been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

DEFINES += SMTP_BUILD
# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

CONFIG += c++11

SOURCES += \
    Employe.cpp \
    client.cpp \
    commande.cpp \
    config.cpp \
    depense.cpp \
    excel.cpp \
    fournisseur.cpp \
    gestion_client.cpp \
    gestion_employe.cpp \
    gestion_livraison.cpp \
    gestion_produit.cpp \
    gestion_revenue.cpp \
    historique.cpp \
    historique1.cpp \
    ingredient.cpp \
    liv.cpp \
    livreur.cpp \
    login.cpp \
        main.cpp \
        mainwindow.cpp \
    connection.cpp \
    menu.cpp \
    notif.cpp \
    profils.cpp \
    reservation.cpp \
    revenue.cpp \
    src/emailaddress.cpp \
    src/mimeattachment.cpp \
    src/mimecontentformatter.cpp \
    src/mimefile.cpp \
    src/mimehtml.cpp \
    src/mimeinlinefile.cpp \
    src/mimemessage.cpp \
    src/mimemultipart.cpp \
    src/mimepart.cpp \
    src/mimetext.cpp \
    src/quotedprintable.cpp \
    src/smtpclient.cpp \
    statistiques.cpp

HEADERS += \
    Depense.h \
    Employe.h \
    client.h \
    commande.h \
    config.h \
    excel.h \
    fournisseur.h \
    gestion_client.h \
    gestion_employe.h \
    gestion_livraison.h \
    gestion_produit.h \
    gestion_revenue.h \
    historique.h \
    historique1.h \
    ingredient.h \
    liv.h \
    livreur.h \
    login.h \
        mainwindow.h \
    connection.h \
    menu.h \
    notif.h \
    profils.h \
    reservation.h \
    revenue.h \
    src/SmtpMime \
    src/emailaddress.h \
    src/mimeattachment.h \
    src/mimecontentformatter.h \
    src/mimefile.h \
    src/mimehtml.h \
    src/mimeinlinefile.h \
    src/mimemessage.h \
    src/mimemultipart.h \
    src/mimepart.h \
    src/mimetext.h \
    src/quotedprintable.h \
    src/smtpclient.h \
    src/smtpexports.h \
    statistiques.h

FORMS += \
        config.ui \
        gestion_client.ui \
        gestion_employe.ui \
        gestion_livraison.ui \
        gestion_produit.ui \
        gestion_revenue.ui \
        login.ui \
        mainwindow.ui \
        statistiques.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    Resources.qrc

DISTFILES +=
