#include "dialogtachedujour.h"
#include "ui_dialogtachedujour.h"
#include <QtDebug>
#include <QSqlQuery>

DialogTacheDuJour::DialogTacheDuJour(QString laDate, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DialogTacheDuJour)
{
    ui->setupUi(this);
    dateCliquee = laDate;
    init();
}

DialogTacheDuJour::~DialogTacheDuJour()
{
    delete ui;
}


void DialogTacheDuJour::init()
{
    ui->labelDate->setText(dateCliquee);
    //partie reparation
    // on vide le tablewidget
    ui->tableWidgetReparation->clearContents();
    ui->tableWidgetReparation->setRowCount(0);

    int noLigne = 0;

    // on recup les infos
    QString reqRepDuJour = "select Reparation.reparNum,vehiculeImmat,modeleNom,marqueNom,time(reparDateDebut) as arrivalTime from Reparation "
                           "inner join Vehicule on Vehicule.vehiculeNum=Reparation.vehiculeNum "
                            "inner join Modele on Modele.modeleNum=Vehicule.modeleNum "
                            "inner join Marque on Marque.marqueNum=Modele.marqueNum where date(reparDateDebut)='"+dateCliquee+"'";
qDebug() << "DialogTacheDuJour.init: reqRepDuJour: "+reqRepDuJour;
    QSqlQuery requeteRepDuJour(reqRepDuJour);
    //pour chaque valeur
    while(requeteRepDuJour.next())
    {
        //on crée une nouvelle ligne
        int nbLignes = ui->tableWidgetReparation->rowCount();
        ui->tableWidgetReparation->setRowCount(nbLignes+1);
        //on recupere les valeurs
        QString id = requeteRepDuJour.value("reparNum").toString();
        QString immat = requeteRepDuJour.value("vehiculeImmat").toString();
        QString marque = requeteRepDuJour.value("marqueNom").toString();
        QString modele = requeteRepDuJour.value("modeleNom").toString();
        QString heure = requeteRepDuJour.value("arrivalTime").toString();
        QString voiture = marque+" "+modele;
        //on les place dans le tableau
        ui->tableWidgetReparation->setItem(noLigne,0, new QTableWidgetItem(id));
        ui->tableWidgetReparation->setItem(noLigne,1, new QTableWidgetItem(immat));
        ui->tableWidgetReparation->setItem(noLigne,2, new QTableWidgetItem(voiture));
        ui->tableWidgetReparation->setItem(noLigne,3, new QTableWidgetItem(heure));

        noLigne++;
    }
qDebug() << "DialogTacheDuJour.init: "+reqRepDuJour;

    //partie livraison
    //on vide le tw
    ui->tableWidgetLivraison->clearContents();
    ui->tableWidgetLivraison->setRowCount(0);

    int noLigne2 = 0;
    // on recupere les livraisons du jour concerné
    QString reqLivDuJour = "select Commande.commandeNum,quantite,pieceLib from Commande "
                           "inner join Contenu on Commande.commandeNum=Contenu.commandeNum "
                           "inner join Piece on Piece.pieceRef=Contenu.pieceRef where dateLivraison='"+dateCliquee+"'";
    QSqlQuery requeteLivDuJour(reqLivDuJour);
qDebug() << "DialogTacheDuJour.init: reqLivDuJour :::: "+reqLivDuJour;
    //pour chaque libraison
    while(requeteLivDuJour.next())
    {
        //on crée une nouvelle ligne
        int nbLignes = ui->tableWidgetLivraison->rowCount();
        ui->tableWidgetLivraison->setRowCount(nbLignes+1);
        //on recupere les valeurs
        QString id = requeteLivDuJour.value("commandeNum").toString();
        QString qte = requeteLivDuJour.value("quantite").toString();
        QString piece = requeteLivDuJour.value("pieceLib").toString();
        //on les place dans le tableau
        ui->tableWidgetLivraison->setItem(noLigne2,0, new QTableWidgetItem(id));
        ui->tableWidgetLivraison->setItem(noLigne2,1, new QTableWidgetItem(piece));
        ui->tableWidgetLivraison->setItem(noLigne2,2, new QTableWidgetItem(qte));
        noLigne++;
    }
//on resize les colonnes.
ui->tableWidgetReparation->resizeColumnsToContents();
ui->tableWidgetLivraison->resizeColumnsToContents();

}

void DialogTacheDuJour::on_pushButton_clicked()
{
    this->accept();
}
