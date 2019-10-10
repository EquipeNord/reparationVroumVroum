#include "mainwindow.h"
#include "dialogauthentification.h"
#include <QApplication>
#include <QDebug>
#include <QtSql/QSqlDatabase>

int main(int argc, char *argv[])
{
qDebug() << "main(int argc, char *argv[])";
    QApplication a(argc, argv);

    //Connection a la base de donnée
    //Création de la connection a la base de donnée
    QSqlDatabase maBase = QSqlDatabase::addDatabase("QMYSQL");
    maBase.setHostName("localhost");
    maBase.setDatabaseName("reparationVroumVroum");
    maBase.setUserName("jeremy");
    maBase.setPassword("elini01");
    bool bddOk = maBase.open();
    if(bddOk)
    {
qDebug() << "Ok";
        //Créer la condition d'ouverture de la main window
     }
     DialogAuthentification dAuth;

    if (dAuth.exec()==QDialog::Accepted)
    {

    MainWindow w;
    w.getId(dAuth.idConnect);
    w.show();
    return a.exec();
    }



}
