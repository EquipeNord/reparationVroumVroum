#include "mainwindow.h"
#include "dialogmecano.h"
#include <QApplication>
#include <QString>
#include <QtSql/QSqlDatabase>
#include <QDebug>


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    QSqlDatabase db = QSqlDatabase::addDatabase("QMYSQL");
    db.setHostName("localhost");
    db.setDatabaseName("reparationVroumVroum");
    db.setUserName("adminUserTaf");
    db.setPassword("marmotte");
    db.open();





    DialogMecano test;
    test.show();

    //MainWindow w;
    //w.show();

    return a.exec();



}
