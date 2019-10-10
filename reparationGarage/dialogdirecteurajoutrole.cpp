#include "dialogdirecteurajoutrole.h"
#include "ui_dialogdirecteurajoutrole.h"
#include <QDebug>
#include <QSqlQuery>
#include <QTranslator>
DialogDirecteurAjoutRole::DialogDirecteurAjoutRole(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DialogDirecteurAjoutRole)
{
    ui->setupUi(this);
}

DialogDirecteurAjoutRole::~DialogDirecteurAjoutRole()
{
    delete ui;
}

void DialogDirecteurAjoutRole::on_pushButtonAddCanc_clicked()
{
    close();
}

void DialogDirecteurAjoutRole::on_pushButtonAddConf_clicked()
{
    QString stringQuery  ="insert into Role(roleLib) values('";
            stringQuery +=ui->lineEditAddRole->text();
            stringQuery +="');";
    qDebug() << stringQuery;
    QSqlQuery query(stringQuery);
    accept();
}
