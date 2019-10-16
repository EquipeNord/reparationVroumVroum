#include "dialogmecano.h"
#include "ui_dialogmecano.h"
#include <QtSql/QSqlQuery>
#include <QTableWidgetItem>
#include <QTableWidget>
#include <QDebug>


DialogMecano::DialogMecano(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DialogMecano)
{
    ui->setupUi(this);

    this->setWindowTitle(tr("Réparation Garage - Mécanicien"));

    fillTableWidget(utilisateurId);
}

DialogMecano::~DialogMecano()
{
    delete ui;
}

void DialogMecano::fillTableWidget(QString utilisateurId)
{
    QSqlQuery user("select userNom, userPrenom from Utilisateur where userNum = "+utilisateurId);
    if(user.first())
    {
        qDebug() << "user query";
        QString userNom = user.value("userNom").toString();
        QString userPrenom = user.value("userPrenom").toString();

        qDebug() << "nom - prenom : "+userNom+" - "+userPrenom;

        QString nomEntier = userNom+" "+userPrenom;

        ui->label_prenom->setText(nomEntier);
    }



    //QSqlQuery client("select cliNum, cliNom, cliPrenom from Client inner join Reparation on Client.cliNum = Reparation.cliNum where vehiculeNum = "+);

    QSqlQuery fill("select reparNum, reparLib, reparDateDebut, reparDateFin, userNum, cliNom, Vehicule.vehiculeNum, Modele.modeleNom, marqueNom "
                   "from Reparation "
                   "inner join Vehicule on Reparation.vehiculeNum = Vehicule.vehiculeNum "
                   "inner join Modele on Vehicule.modeleNum = Modele.modeleNum "
                   "inner join Marque on Modele.marqueNum = Marque.marqueNum "
                   "inner join Client on Reparation.cliNum = Client.cliNum "
                   "where userNum = "+utilisateurId+" and reparDateFin = 0");

    ui->tableWidget->setRowCount(fill.size());

    int nbLigne = 0;

    while (fill.next())
    {
        qDebug() << "fill";


        reparId = fill.value("reparNum").toString();
        QString vehiculeId = fill.value("vehiculeNum").toString();
        QString nomModele = fill.value("modeleNom").toString();
        QString nomMarque = fill.value("marqueNom").toString();
        QString desc = fill.value("reparLib").toString();
        QString cliName = fill.value("cliNom").toString();
        QString dateDebut = fill.value("reparDateDebut").toString();
        QString dateFin = fill.value("reparDateFin").toString();
        QString userId = fill.value("userNum").toString();

        qDebug() << "reparId : "+reparId;

        dateDebut.resize(10);

        ui->tableWidget->setItem(nbLigne, 0, new QTableWidgetItem(reparId));
        ui->tableWidget->setItem(nbLigne, 1, new QTableWidgetItem(vehiculeId));
        ui->tableWidget->setItem(nbLigne, 2, new QTableWidgetItem(nomModele));
        ui->tableWidget->setItem(nbLigne, 3, new QTableWidgetItem(nomMarque));
        ui->tableWidget->setItem(nbLigne, 4, new QTableWidgetItem(cliName));
        ui->tableWidget->setItem(nbLigne, 5, new QTableWidgetItem(desc));
        ui->tableWidget->setItem(nbLigne, 6, new QTableWidgetItem(dateDebut));

        nbLigne++;
    }
}






void DialogMecano::on_pushButton_clicked()
{
    float nbHours = ui->doubleSpinBox->value();
    QString nbH = QString::number(nbHours);     // Concat impossible si c'est un float donc on le transforme en string
    QSqlQuery updateValid("update Reparation set reparDateFin = CURRENT_TIMESTAMP(), reparDuree = "+nbH+" where reparNum = "+reparId);

    fillTableWidget(utilisateurId);
    cancel();
}

void DialogMecano::on_pushButton_refresh_clicked()
{
    fillTableWidget(utilisateurId);
}

void DialogMecano::on_pushButton_modif_clicked()
{
    QString desc = ui->lineEdit_desc->text();
    qDebug() << "desc : "+desc;
    QSqlQuery updateDesc("update Reparation set reparLib = '"+desc+"' where reparNum = "+reparId);

    fillTableWidget(utilisateurId);
    cancel();
}

void DialogMecano::on_tableWidget_cellClicked(int row, int column)
{
    // On active tout quand une colonne est sélectionnée
    ui->label_nbHours->setEnabled(true);
    ui->pushButton->setEnabled(true);
    ui->doubleSpinBox->setEnabled(true);

    ui->pushButton_modif->setEnabled(true);
    ui->lineEdit_desc->setEnabled(true);
    ui->label_desc->setEnabled(true);
}

void DialogMecano::cancel()
{
    ui->tableWidget->clearSelection();
    ui->label_nbHours->setEnabled(false);
    ui->pushButton->setEnabled(false);
    ui->doubleSpinBox->setEnabled(false);

    ui->pushButton_modif->setEnabled(false);
    ui->lineEdit_desc->setEnabled(false);
    ui->label_desc->setEnabled(false);
}

void DialogMecano::on_pushButton_cancel_clicked()
{
    cancel();
}
