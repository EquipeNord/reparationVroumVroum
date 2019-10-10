#include "mainwindow.h"
#include <QApplication>
#include <QSqlDatabase>
#include <QDebug>
#include <QTranslator>
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
qDebug() << "connection a la BDD";
    QSqlDatabase db = QSqlDatabase::addDatabase("QMYSQL");
    db.setHostName("LocalHost");
    db.setDatabaseName("GARAGE");
    db.setUserName("root");
    db.setPassword("vuqxyur");
    bool ok = db.open();
    if(ok){
        qDebug("Connection success");
    }
    else{
        qDebug("Connection failed");
    }

    return a.exec();
}
