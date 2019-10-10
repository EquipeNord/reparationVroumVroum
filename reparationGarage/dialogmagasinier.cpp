#include "dialogmagasinier.h"
#include "ui_dialogmagasinier.h"

DialogMagasinier::DialogMagasinier(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DialogMagasinier)
{
    ui->setupUi(this);
    ui->tabWidget->setCurrentIndex(0);
    ui->toolButtonEditToRepair->hide();
}

DialogMagasinier::~DialogMagasinier()
{
    delete ui;
}

void DialogMagasinier::fillStockTable()
{
qDebug() << "void DialogMagasinier::fillStockTable()";
    ui->tableWidgetStock->clearContents();
    ui->tableWidgetStock->clearFocus();
    ui->tableWidgetStock->setRowCount(0);
    QString tReqFillStock = "select pieceRef, pieceLib, pieceQteDispo, piecePU_HT, piecePU_TTC from Piece";
qDebug() << tReqFillStock;
    QSqlQuery reqFillStock(tReqFillStock);
    int noLigne = 0;
    while (reqFillStock.next()) {
        ui->tableWidgetStock->setRowCount(ui->tableWidgetStock->rowCount()+1);
        QString pieceRef = reqFillStock.value(0).toString();
        QString pieceLib = reqFillStock.value(1).toString();
        QString pieceQteDispo = reqFillStock.value(2).toString();
        QString piecePU_HT = reqFillStock.value(3).toString();
        QString piecePU_TTC = reqFillStock.value(4).toString();
        ui->tableWidgetStock->setItem(noLigne, 0, new QTableWidgetItem(pieceRef));
        ui->tableWidgetStock->setItem(noLigne, 1, new QTableWidgetItem(pieceLib));
        ui->tableWidgetStock->setItem(noLigne, 2, new QTableWidgetItem(pieceQteDispo));
        ui->tableWidgetStock->setItem(noLigne, 3, new QTableWidgetItem(piecePU_HT));
        ui->tableWidgetStock->setItem(noLigne, 4, new QTableWidgetItem(piecePU_TTC));
        noLigne++;
    }
    ui->tableWidgetStock->resizeColumnsToContents();
    editMode(false);
}

void DialogMagasinier::fillPartForm(int row)
{
qDebug() << "void DialogMagasinier::fillPartForm(int row)";
    QString laRef = ui->tableWidgetStock->item(row, 0)->text();
    QString leLib = ui->tableWidgetStock->item(row, 1)->text();
    int laQteDispo = ui->tableWidgetStock->item(row, 2)->text().toInt();
    double lePU_HT = ui->tableWidgetStock->item(row, 3)->text().toDouble();
    double lePU_TTC = ui->tableWidgetStock->item(row, 4)->text().toDouble();
    ui->lineEditRef->setText(laRef);
    ui->lineEditLib->setText(leLib);
    ui->spinBoxQte->setValue(laQteDispo);
    ui->doubleSpinBoxPU_HT->setValue(lePU_HT);
    ui->doubleSpinBoxPU_TTC->setValue(lePU_TTC);
    editMode(true);
}

void DialogMagasinier::editMode(bool state)
{
qDebug() << "void DialogMagasinier::editMode(bool state)";
    if(state) {
        ui->toolButtonAdd->hide();
        ui->toolButtonEdit->show();
        ui->labelFormPart->setText(tr("Edit a part"));
    } else {
        ui->tableWidgetStock->clearSelection();
        ui->tableWidgetStock->clearFocus();
        ui->toolButtonAdd->show();
        ui->toolButtonEdit->hide();
        ui->lineEditRef->clear();
        ui->lineEditLib->clear();
        ui->spinBoxQte->setValue(0);
        ui->doubleSpinBoxPU_HT->setValue(0.00);
        ui->doubleSpinBoxPU_TTC->setValue(0.00);
        ui->labelFormPart->setText(tr("Add a part"));
    }
}

void DialogMagasinier::fillRepairsTable()
{
qDebug() << "void DialogMagasinier::fillRepairsTable()";
        ui->tableWidgetRepairsList->clearContents();
        ui->tableWidgetRepairsList->clearFocus();
        ui->tableWidgetRepairsList->setRowCount(0);
        QString tReqFillRepairs = "select reparNum, reparDateDebut, reparDateFin, reparLib, cliNom, cliPrenom, userNom, userPrenom, marqueNom, modeleNom, vehiculeImmat, reparDuree "
                                "from Reparation inner join Client on Reparation.cliNum=Client.cliNum "
                                "inner join Utilisateur on Reparation.userNum=Utilisateur.userNum "
                                "inner join Vehicule on Reparation.vehiculeNum=Vehicule.vehiculeNum "
                                "inner join Modele on Vehicule.modeleNum=Modele.modeleNum "
                                "inner join Marque on Modele.marqueNum=Marque.marqueNum "
                                "where reparDateFin != '0000-00-00 00:00:00'";
qDebug() << tReqFillRepairs;
        QSqlQuery reqFillRepairs(tReqFillRepairs);
        int noLigne = 0;
        while (reqFillRepairs.next()) {
            ui->tableWidgetRepairsList->setRowCount(ui->tableWidgetRepairsList->rowCount()+1);
            QString reparNum = reqFillRepairs.value("reparNum").toString();
            QString reparDateDebut = reqFillRepairs.value("reparDateDebut").toString().replace('T', ' ');
            QString reparDateFin = reqFillRepairs.value("reparDateFin").toString().replace('T', ' ');
            QString reparLib = reqFillRepairs.value("reparLib").toString();
            QString cliNomComplet = reqFillRepairs.value("cliNom").toString() + ' ' + reqFillRepairs.value("cliPrenom").toString();
            QString userNomComplet = reqFillRepairs.value("userNom").toString() + ' ' + reqFillRepairs.value("userPrenom").toString();
            QString marqueNom = reqFillRepairs.value("marqueNom").toString();
            QString modeleNom = reqFillRepairs.value("modeleNom").toString();
            QString vehiculeImmat = reqFillRepairs.value("vehiculeImmat").toString();
            QString reparDuree = reqFillRepairs.value("reparDuree").toString();
            ui->tableWidgetRepairsList->setItem(noLigne, 0, new QTableWidgetItem(reparNum));
            ui->tableWidgetRepairsList->setItem(noLigne, 1, new QTableWidgetItem(reparDateDebut));
            ui->tableWidgetRepairsList->setItem(noLigne, 2, new QTableWidgetItem(reparDateFin));
            ui->tableWidgetRepairsList->setItem(noLigne, 3, new QTableWidgetItem(reparLib));
            ui->tableWidgetRepairsList->setItem(noLigne, 4, new QTableWidgetItem(cliNomComplet));
            ui->tableWidgetRepairsList->setItem(noLigne, 5, new QTableWidgetItem(userNomComplet));
            ui->tableWidgetRepairsList->setItem(noLigne, 6, new QTableWidgetItem(marqueNom));
            ui->tableWidgetRepairsList->setItem(noLigne, 7, new QTableWidgetItem(modeleNom));
            ui->tableWidgetRepairsList->setItem(noLigne, 8, new QTableWidgetItem(vehiculeImmat));
            ui->tableWidgetRepairsList->setItem(noLigne, 9, new QTableWidgetItem(reparDuree));

            noLigne++;
        }
        ui->tableWidgetRepairsList->resizeColumnsToContents();
        editMode(false);
}

void DialogMagasinier::on_tableWidgetStock_itemSelectionChanged()
{
qDebug() << "void DialogMagasinier::on_tableWidgetStock_itemSelectionChanged()";
    fillPartForm(ui->tableWidgetStock->currentRow());
}

void DialogMagasinier::on_toolButtonCancel_clicked()
{
qDebug() << "void DialogMagasinier::on_toolButtonCancel_clicked()";
    editMode(false);
}

void DialogMagasinier::envoiRequetePiece(QString typeReq)
{
qDebug() << "void DialogMagasinier::envoiRequetePiece(QString typeReq)";
    QString laRef = ui->lineEditRef->text();
    QString leLib = ui->lineEditLib->text();
    QString laQte = QString::number(ui->spinBoxQte->value());
    QString lePU_HT = QString::number(ui->doubleSpinBoxPU_HT->value());
    QString lePU_TTC = QString::number(ui->doubleSpinBoxPU_TTC->value());
    QString tReqPiece;
    if(typeReq == "ajout") {
        tReqPiece = "insert into Piece values ('" + laRef + "', '" + leLib + "', " + laQte + ", " + lePU_HT + ", " + lePU_TTC + ")";

    } else if (typeReq == "modif") {
        tReqPiece = "update Piece set pieceRef='" + laRef + "', pieceLib='" + leLib + "', pieceQteDispo=" + laQte + ", piecePU_HT=" + lePU_HT + ", piecePU_TTC=" + lePU_TTC + " where pieceRef='" + laRef + "'";
    }
qDebug() << tReqPiece;
    QSqlQuery reqPiece(tReqPiece);
    fillStockTable();
}

void DialogMagasinier::on_toolButtonAdd_clicked()
{
qDebug() << "void DialogMagasinier::on_toolButtonAdd_clicked()";
    envoiRequetePiece("ajout");
}

void DialogMagasinier::on_toolButtonEdit_clicked()
{
qDebug() << "void DialogMagasinier::on_toolButtonEdit_clicked()";
    envoiRequetePiece("modif");
}

void DialogMagasinier::on_tabWidget_currentChanged(int index)
{
qDebug() << "void DialogMagasinier::on_tabWidget_currentChanged(int index)";
    switch(index) {
    case 0 : fillStockTable();
        break;
    case 1 : fillRepairsTable();
        ui->widgetPartsUsed->hide();
        break;
    case 2 : break;
    default : break;
    }
}

void DialogMagasinier::on_tableWidgetRepairsList_itemSelectionChanged()
{
qDebug() << "void DialogMagasinier::on_tableWidgetRepairsList_itemSelectionChanged()";
    ui->widgetPartsUsed->show();
    fillPartsList(ui->tableWidgetRepairsList->item(ui->tableWidgetRepairsList->currentRow(), 0)->text());
    fillPartsComboBox("");
    ui->spinBoxPartsQuantity->setMinimum(1);
}

void DialogMagasinier::fillPartsList(QString reparNum)
{
qDebug() << "void DialogMagasinier::fillPartsList(QString reparNum)";
ui->labelRepairNumber->setText(reparNum);
ui->tableWidgetPartsUsed->clearContents();
ui->tableWidgetPartsUsed->clearFocus();
ui->tableWidgetPartsUsed->setRowCount(0);
    QString tReqPartsList = "select Piece.pieceRef, pieceLib, quantite "
                            "from Piece inner join Besoin on Piece.pieceRef=Besoin.pieceRef "
                            "where reparNum=" + reparNum +
                            " and quantite>0";
qDebug() << tReqPartsList;
    QSqlQuery reqPartsList(tReqPartsList);
    int noLigne = 0;
    while(reqPartsList.next()) {
        ui->tableWidgetPartsUsed->setRowCount(ui->tableWidgetPartsUsed->rowCount()+1);
        QString pieceRef = reqPartsList.value("pieceRef").toString();
        QString pieceLib = reqPartsList.value("pieceLib").toString();
        QString quantite = reqPartsList.value("quantite").toString();
        ui->tableWidgetPartsUsed->setItem(noLigne, 0, new QTableWidgetItem(pieceRef));
        ui->tableWidgetPartsUsed->setItem(noLigne, 1, new QTableWidgetItem(pieceLib));
        ui->tableWidgetPartsUsed->setItem(noLigne, 2, new QTableWidgetItem(quantite));
        noLigne++;
    }
    ui->tableWidgetPartsUsed->resizeColumnsToContents();
}

void DialogMagasinier::fillPartsComboBox(QString refPiece)
{
qDebug() << "void DialogMagasinier::fillPartsComboBox(QString refPiece)";
    ui->comboBoxParts->clear();
    QString tReqPartsComboBox;
    if(refPiece == "") {
        tReqPartsComboBox = "select pieceRef, pieceLib, pieceQteDispo "
                                       "from Piece "
                                       "where pieceQteDispo>0 "
                                       "and pieceRef not in ( "
                                       "   select pieceRef"
                                       "   from Besoin inner join Reparation on Besoin.reparNum=Reparation.reparNum "
                                       "   where Besoin.reparNum=" + ui->labelRepairNumber->text() +
                                       ");";
    } else {
        tReqPartsComboBox = "select pieceRef, pieceLib, pieceQteDispo "
                                       "from Piece "
                                       "where pieceRef='" + refPiece + "'";
    }
qDebug() << tReqPartsComboBox;
    QSqlQuery reqPartsComboBox(tReqPartsComboBox);
    while(reqPartsComboBox.next()) {
        QString pieceRef = reqPartsComboBox.value("pieceRef").toString();
        QString pieceLib = reqPartsComboBox.value("pieceLib").toString();
        QString pieceQteDispo = reqPartsComboBox.value("pieceQteDispo").toString();
        ui->comboBoxParts->addItem('(' + pieceRef + ") " + pieceLib, pieceRef);
    }
}

void DialogMagasinier::on_comboBoxParts_currentIndexChanged(int index)
{
    QString pieceRef = ui->comboBoxParts->currentData().toString();
    QString tReqQteDispo = "select pieceQteDispo from Piece where pieceRef='" + pieceRef + "'";
    QSqlQuery reqQteDispo(tReqQteDispo);
    reqQteDispo.first();
    int qteDispo = reqQteDispo.value("pieceQteDispo").toInt();
qDebug() << pieceRef << qteDispo;
    ui->spinBoxPartsQuantity->setMaximum(qteDispo);
}

void DialogMagasinier::on_toolButtonAddToRepair_clicked()
{
qDebug() << "void DialogMagasinier::on_toolButtonAddToRepair_clicked()";
    QString pieceRef = ui->comboBoxParts->currentData().toString();
    QString quantite = QString::number(ui->spinBoxPartsQuantity->value());
    QString reparNum = ui->labelRepairNumber->text();
qDebug() << pieceRef << quantite;
    QString tReqAddToRepair = "insert into Besoin values (" + quantite + ", " + reparNum + ", '" + pieceRef + "')";
qDebug() << tReqAddToRepair;
    QSqlQuery reqAddToRepair(tReqAddToRepair);
    QString tReqSubstractPart = "update Piece set pieceQteDispo=pieceQteDispo-" + quantite + " where pieceRef='" + pieceRef + "'";
qDebug() << tReqSubstractPart;
    QSqlQuery reqSubstractPart(tReqSubstractPart);
    fillPartsList(reparNum);
    fillPartsComboBox("");
}

void DialogMagasinier::on_tableWidgetPartsUsed_itemSelectionChanged()
{
qDebug() << "void DialogMagasinier::on_tableWidgetPartsUsed_itemSelectionChanged()";
    QString pieceRef = ui->tableWidgetPartsUsed->item(ui->tableWidgetPartsUsed->currentRow(), 0)->text();
    QString pieceLib = ui->tableWidgetPartsUsed->item(ui->tableWidgetPartsUsed->currentRow(), 1)->text();
    int pieceQteUtilisee = ui->tableWidgetPartsUsed->item(ui->tableWidgetPartsUsed->currentRow(), 2)->text().toInt();
    ui->toolButtonAddToRepair->hide();
    ui->toolButtonEditToRepair->show();
    ui->spinBoxPartsQuantity->setMinimum(0);
    fillPartsComboBox(pieceRef);
    fillPartsToRepairForm(pieceRef, pieceLib, pieceQteUtilisee);
}

void DialogMagasinier::fillPartsToRepairForm(QString laRef, QString leLib, int laQteUtilisee)
{
qDebug() << "void DialogMagasinier::fillPartsToRepairForm(QString laRef, QString laQteUtilisee)";
    ui->comboBoxParts->setCurrentText('(' + laRef + ") " + leLib);
qDebug() << ui->spinBoxPartsQuantity->maximum() << laQteUtilisee;
    ui->spinBoxPartsQuantity->setMaximum(ui->spinBoxPartsQuantity->maximum() + laQteUtilisee);
    ui->spinBoxPartsQuantity->setValue(laQteUtilisee);
}

void DialogMagasinier::on_toolButtonEditToRepair_clicked()
{
    qDebug() << "void DialogMagasinier::on_toolButtonEditToRepair_clicked()";
    QString reparNum = ui->labelRepairNumber->text();
    QString pieceRef = ui->tableWidgetPartsUsed->item(ui->tableWidgetPartsUsed->currentRow(), 0)->text();
    int qteAvant = ui->tableWidgetPartsUsed->item(ui->tableWidgetPartsUsed->currentRow(), 2)->text().toInt();
    int qteApres = ui->spinBoxPartsQuantity->value();
    int diffQte = qteApres - qteAvant;
qDebug() << qteAvant << qteApres << diffQte;
    QString tReqEditToRepair;
    if(qteApres == 0) {
        tReqEditToRepair = "delete from Besoin where pieceRef='" + pieceRef + "' and reparNum=" + reparNum;
    } else {
        tReqEditToRepair = "update Besoin set quantite=quantite+" + QString::number(diffQte) + " where pieceRef='" + pieceRef + "' and reparNum=" + reparNum;
    }
qDebug() << tReqEditToRepair;
QSqlQuery reqEditToRepair(tReqEditToRepair);
    QString tReqUpdatePart = "update Piece set pieceQteDispo=pieceQteDispo-(" + QString::number(diffQte) + ") where pieceRef='" + pieceRef + "'";
qDebug() << tReqUpdatePart;
    QSqlQuery reqUpdatePart(tReqUpdatePart);
    fillPartsList(reparNum);
    fillPartsComboBox("");
}

void DialogMagasinier::on_toolButtonCancelToRepair_clicked()
{
    qDebug() << "void DialogMagasinier::on_toolButtonCancelToRepair_clicked()";
    ui->tableWidgetPartsUsed->clearSelection();
    ui->tableWidgetPartsUsed->clearFocus();
    ui->spinBoxPartsQuantity->setValue(0);
    ui->toolButtonAddToRepair->show();
    ui->toolButtonEditToRepair->hide();
    fillPartsComboBox("");
    ui->spinBoxPartsQuantity->setMinimum(1);
}
