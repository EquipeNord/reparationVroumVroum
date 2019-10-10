#include "dialogauthentification.h"
#include "ui_dialogauthentification.h"
#include <QDebug>
#include <QString>
#include <QtSql/QSqlQuery>
#include <QByteArray>
#include <QCryptographicHash>


DialogAuthentification::DialogAuthentification(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DialogAuthentification)
{
    ui->setupUi(this);
}

DialogAuthentification::~DialogAuthentification()
{
    delete ui;
}

void DialogAuthentification::on_pushButtonValider_clicked()
{
qDebug() << "DialogAuthentification::on_pushButton_clicked()";
    //On check si les champs ne sont pas vide
    if (!(ui->lineEditLogin->text().isEmpty() && ui->lineEditPwd->text().isEmpty()))
    {
        QString login =  ui->lineEditLogin->text();
        QByteArray pwd = ui->lineEditPwd->text().toLocal8Bit(); // on créer le mdp en octet pour pouvoir le lire avec cryptographichash et ainsir le transformer en md5
        QSqlQuery reqRechercheInfo("select userNum,userLogin,userMDP from Utilisateur where userLogin='"+login+"'");
qDebug() << " select userNum,userLogin,userMDP from Utilisateur where userLogin='"+login+"'";
        reqRechercheInfo.first();
        idConnect = reqRechercheInfo.value("userNum").toString();

        QString loginSql = reqRechercheInfo.value("userLogin").toString();
        QString mdpSql = reqRechercheInfo.value("userMDP").toString();
        QString mdpEntreeMd5 = QString(QCryptographicHash::hash((pwd),QCryptographicHash::Md5).toHex()); //permet de transformer le mdp normal en md5 . toHex de convertir de binaiare en hexa.
qDebug() << mdpEntreeMd5;
qDebug() << loginSql << mdpSql;
            //On compare les login avec le mdp et si il sont bon alors on le fait entré
            if (login==loginSql && mdpEntreeMd5==mdpSql)
            {
                accept();
            }
            else
            {
                ui->labelInfo->setText("Password or login incorrect retry please ");
            }
    }
    else
    {
        ui->labelInfo->setText("Fill all field please");
    }


}

void DialogAuthentification::on_pushButtonQuit_clicked()
{
    //On quitte l'application
    reject();
}
