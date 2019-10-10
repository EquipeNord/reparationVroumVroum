#include "dialogdirecteurajout.h"
#include "ui_dialogdirecteurajout.h"
#include <QSqlQuery>
#include <QDebug>
#include <QTranslator>

DialogDirecteurAjout::DialogDirecteurAjout(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DialogDirecteurAjout)
{
    ui->setupUi(this);
}

DialogDirecteurAjout::~DialogDirecteurAjout()
{
    delete ui;
}

void DialogDirecteurAjout::on_pushButtonCancel_clicked()
{
    close();
}

void DialogDirecteurAjout::on_pushButtonValid_clicked()
{
qDebug() << "void DialogDirecteurAjout::on_pushButtonValid_clicked()";

    QString queryString  ="insert into Utilisateur(userNom,userPrenom,userLogin,userMDP)  values ('";
            queryString +=ui->lineEditAddNom->text();
            queryString +="','";
            queryString +=ui->lineEditAddPrenom->text();
            queryString +="','";
            queryString +=ui->lineEditAddLogin->text();
            queryString +="',password('";
            queryString +=ui->lineEditAddMdp->text();
            queryString +="'));";


    qDebug() << queryString;
    QSqlQuery query(queryString);
    accept();
    close();
}
