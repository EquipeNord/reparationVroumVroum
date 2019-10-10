#include "mainwindow.h"
#include "dialogmagasinier.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QSqlDatabase db = QSqlDatabase::addDatabase("QMYSQL");
    db.setDatabaseName("ReparationsGarage");
    db.setHostName("localhost");
    db.setUserName("yohans");
    db.setPassword("ini01");
    if(db.open()) {
        /*MainWindow w;
        w.show();*/
        DialogMagasinier dMagasinier;
        dMagasinier.show();
        return a.exec();
    } else {
        return -999;
    }
}
