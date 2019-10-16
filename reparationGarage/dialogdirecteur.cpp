#include "dialogdirecteur.h"
#include "ui_dialogdirecteur.h"
#include "dialogdirecteurajout.h"
#include <QDebug>
#include <QSqlQuery>
#include <QMessageBox>
#include <QTranslator>

DialogDirecteur::DialogDirecteur(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DialogDirecteur)
{
    ui->setupUi(this);
    actualiser();
    ui->pushButtonDelRole->setEnabled(false);
    ui->pushButtonAddRole->setEnabled(false);
}

void DialogDirecteur::actualiser()
{
qDebug() << "void DialogDirecteur::actualiser()";
    QSqlQuery query("Select * from Utilisateur");
    int rowCount = 0;
    ui->tableWidgetUser->setRowCount(rowCount);
    while (query.next()) {
        ui->tableWidgetUser->setRowCount(rowCount+1);
        QString userNumValue =query.value("userNum").toString();
        QString userNomValue =query.value("userNom").toString();
        QString userPrenomValue=query.value("userPrenom").toString();
        QString userLoginValue =query.value("userLogin").toString();


        ui->tableWidgetUser->setItem(rowCount,0,new QTableWidgetItem(userNumValue));
        ui->tableWidgetUser->setItem(rowCount,1,new QTableWidgetItem(userNomValue));
        ui->tableWidgetUser->setItem(rowCount,2,new QTableWidgetItem(userPrenomValue));
        ui->tableWidgetUser->setItem(rowCount,3,new QTableWidgetItem(userLoginValue));
        rowCount++;


    }

    remplirLesRole();

    ui->tableWidgetRoles->setRowCount(0);


}

void DialogDirecteur::remplirLesRole()
{
qDebug("void DialogDirecteur::remplirLesRole()");
    QSqlQuery query("select * from Role");
    ui->comboBoxRoles->clear();
        while (query.next()) {
        QString nomRole = query.value("roleLib").toString();


        ui->comboBoxRoles->addItem(nomRole,query.value('roleNum'));

    }

}

void DialogDirecteur::remplirTableDeRoles()
{
qDebug() << "void DialogDirecteur::remplirTableDeRoles()";
    ui->pushButtonDelRole->setEnabled(false);
    QString stringQuery  ="Select roleLib from Role where  roleNum in (select roleNum from User_Role where userNum=";
            stringQuery +=ui->tableWidgetUser->item(ui->tableWidgetUser->currentRow(),0)->text();
            stringQuery +=")";
    qDebug() << stringQuery;

    QSqlQuery query(stringQuery);
    int rowCount = 0;
    ui->tableWidgetRoles->setRowCount(rowCount);
    while(query.next()){
        ui->tableWidgetRoles->setRowCount(rowCount+1);
        QString roleLibValue =query.value("roleLib").toString();
        ui->tableWidgetRoles->setItem(rowCount,0,new QTableWidgetItem(roleLibValue));
        rowCount++;
    }
}

void DialogDirecteur::clearData()
{
    ui->labelAddIdVal->clear();
    ui->lineEditNom->clear();
    ui->lineEditPrenom->clear();
    ui->lineEditLogin->clear();
    ui->pushButtonAddRole->setEnabled(false);
}

DialogDirecteur::~DialogDirecteur()
{
    delete ui;
}


void DialogDirecteur::on_pushButtonModCanc_clicked()
{
    close();
}



void DialogDirecteur::on_tableWidgetRoles_clicked(const QModelIndex &index)
{
        ui->pushButtonDelRole->setEnabled(true);
}



void DialogDirecteur::on_pushButton_5_clicked()
{
    actualiser();
}

void DialogDirecteur::on_pushButtonAddRole_clicked()
{

qDebug() << "void DialogDirecteur::on_pushButtonAddRole_clicked()";

    QString queryStringId  ="Select roleNum from Role where roleLib='";
            queryStringId +=ui->comboBoxRoles->currentText();
            queryStringId +="';";
    qDebug() << queryStringId;


    QSqlQuery queryId(queryStringId);
    queryId.next();

    QString queryString  = "insert into User_Role Values (";
            queryString += queryId.value(0).toString();
            queryString += ",";
            queryString += ui->tableWidgetUser->item(ui->tableWidgetUser->currentRow(),0)->text();
            queryString += ");";

    qDebug() << queryString;

    QSqlQuery query(queryString);
    remplirTableDeRoles();


}

void DialogDirecteur::on_pushButtonDelRole_clicked()
{
qDebug() << "void DialogDirecteur::on_pushButtonDelRole_clicked()";


    QString queryStringId  ="Select roleNum from Role where roleLib='";
            queryStringId +=ui->tableWidgetRoles->currentItem()->text();
            queryStringId +="';";
    qDebug() << queryStringId;


    QSqlQuery queryId(queryStringId);
    queryId.next();

    QString queryString  = "delete from  User_Role where roleNum=";
            queryString += queryId.value(0).toString();
            queryString += " and userNum=";
            queryString += ui->tableWidgetUser->item(ui->tableWidgetUser->currentRow(),0)->text();
            queryString += ";";

    qDebug() << queryString;

    QSqlQuery query(queryString);
    remplirTableDeRoles();



}


void DialogDirecteur::on_tableWidgetUser_cellClicked(int row, int column)
{
    ui->labelAddIdVal->setText(ui->tableWidgetUser->item(row,0)->text());
    ui->lineEditNom->setText(ui->tableWidgetUser->item(row,1)->text());
    ui->lineEditPrenom->setText(ui->tableWidgetUser->item(row,2)->text());
    ui->lineEditLogin->setText(ui->tableWidgetUser->item(row,3)->text());

    remplirTableDeRoles();
    ui->pushButtonAddRole->setEnabled(true);
}

void DialogDirecteur::on_pushButtonAddUser_clicked()
{
    qDebug() << "void DialogDirecteur::on_pushButton_clicked()";
        DialogDirecteurAjout dialogAjout;
        if(dialogAjout.exec()==DialogDirecteurAjout::Accepted){
            actualiser();
        }
}

void DialogDirecteur::on_pushButtonDelUSer_clicked()
{
    int rep= QMessageBox::warning(this,tr("Delete"),tr("do you really want to delete?"),QMessageBox::Yes,QMessageBox::No);
    if(rep==QMessageBox::Yes){

        QString queryString  ="Delete from User_Role where userNum=";
                queryString +=ui->tableWidgetUser->item(ui->tableWidgetUser->currentRow(),0)->text();
                queryString +=";";

                queryString +="Delete from Utilisateur where userNum=";
                queryString +=ui->tableWidgetUser->item(ui->tableWidgetUser->currentRow(),0)->text();
                queryString +=";";


        qDebug() << queryString;
        QSqlQuery query(queryString);
    }
    actualiser();
    clearData();
}

void DialogDirecteur::on_pushButtonModUSer_clicked()
{


        QString queryString  ="Update Utilisateur set ";
                queryString +="userNom='";
                queryString +=ui->lineEditNom->text();
                queryString +="',userPrenom='";
                queryString +=ui->lineEditPrenom->text();
                queryString +="',userLogin='";
                queryString +=ui->lineEditLogin->text();
                queryString +="' where userNum=";
                queryString +=ui->tableWidgetUser->item(ui->tableWidgetUser->currentRow(),0)->text();
                queryString +=";";

        qDebug() << queryString;
        QSqlQuery query(queryString);
        actualiser();
        clearData();


}



void DialogDirecteur::on_pushButtonAband_clicked()
{
    clearData();
}
