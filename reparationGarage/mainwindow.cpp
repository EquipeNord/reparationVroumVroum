#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QApplication>


#include "dialogtachedujour.h"
#include <QtDebug>
#include <QSqlQuery>


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    setup();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::setId(QString sonId)
{
    utilisateurId = sonId;
    qDebug() << "l'id recup est : "+ utilisateurId;
}

void MainWindow::setup()
{
    //on cache les boutons
    ui->pushButtonComptable->hide();
    ui->pushButtonDirecteur->hide();
    ui->pushButtonMagasinier->hide();
    ui->pushButtonMecanicien->hide();
    ui->pushButtonSecretaire->hide();

    //on recupere les infos de l'user
    QString reqRecupNom = "select UserNom, UserPrenom from Utilisateur where userNum="+utilisateurId;
qDebug() << "MainWindow.setup: "+reqRecupNom;
    QSqlQuery requeteRecupNom(reqRecupNom);
    if(requeteRecupNom.first())
    {
    QString nomUser = requeteRecupNom.value("userNom").toString();
    QString prenomUser = requeteRecupNom.value("userPrenom").toString();
    //on lui dit bonjour
    ui->labelUserId->setText((tr("Welcome ")+prenomUser+" "+nomUser));
    }

    //on recupere ses roles
    QString reqRole = "select Role.roleNum From Role inner join User_Role on Role.roleNum=User_Role.roleNum where userNum="+utilisateurId;
qDebug()<< "MainWindow.setup: "+reqRole;
    QSqlQuery requeteRole(reqRole);
    //pour chacun
    while(requeteRole.next())
    {
        //on affiche uniquement les boutons qui lui correspondent
        int roleNum = requeteRole.value("roleNum").toInt();
        switch (roleNum) {
        case 20:
            ui->pushButtonComptable->show();
            ui->pushButtonDirecteur->show();
            ui->pushButtonMagasinier->show();
            ui->pushButtonMecanicien->show();
            ui->pushButtonSecretaire->show();
            break;
        case 21:
            ui->pushButtonSecretaire->show();
            break;
        case 22:
            ui->pushButtonComptable->show();
            break;
        case 23:;
            ui->pushButtonMecanicien->show();
            break;
        case 24:
            ui->pushButtonMagasinier->show();
        default:
            break;
        }
    }
}

void MainWindow::on_calendarWidgetPlanning_clicked(const QDate &date)
{
    //on recupere la date cliquée
    QString jour = QString::number(date.day());
    QString mois = QString::number(date.month());
    QString annee = QString::number(date.year());
    QString laDate = annee+"-"+mois+"-"+jour;
    //on ouvre le dialog pour cette date
    DialogTacheDuJour d(laDate, this);
    d.exec();

}

//en fonction des boutons cliqués
//afficher les dialog

void MainWindow::on_pushButtonMecanicien_clicked()
{
//    dialogMecanicien a;
//    a.exec();
}

void MainWindow::on_pushButtonSecretaire_clicked()
{
//    dialogSecretaire a;
//    a.exec();
}

void MainWindow::on_pushButtonComptable_clicked()
{
//    dialogComptable a;
//    a.exec();
}

void MainWindow::on_pushButtonMagasinier_clicked()
{
//    dialogMagasinier a;
//    a.exec();
}

void MainWindow::on_pushButtonDirecteur_clicked()
{
//    dialogDirecteur a;
//    a.exec();
}


void MainWindow::on_actionFermer_la_fen_tre_triggered()
{
    this->close();
}
