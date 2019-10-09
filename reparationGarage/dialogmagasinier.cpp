#include "dialogmagasinier.h"
#include "ui_dialogmagasinier.h"

DialogMagasinier::DialogMagasinier(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DialogMagasinier)
{
    ui->setupUi(this);
    fillStockTable();
}

DialogMagasinier::~DialogMagasinier()
{
    delete ui;
}

void DialogMagasinier::fillStockTable()
{
    ui->tableWidgetStock->clearContents();
    ui->tableWidgetStock->clearFocus();
    ui->tableWidgetStock->setRowCount(0);
    QString tReqFillStock = "select pieceRef, pieceLib, pieceQteDispo, piecePU_HT, piecePU_TTC from Piece";
    QSqlQuery reqFillStock(tReqFillStock);
    int noLigne = 0;
    while (reqFillStock.next()) {
        ui->tableWidgetStock->setRowCount(ui->tableWidgetStock->rowCount()+1);
        QString pieceRef = reqFillStock.value(0).toString();
        QString pieceLib = reqFillStock.value(1).toString();
        QString pieceQteDispo = reqFillStock.value(2).toString();
        QString piecePU_HT = reqFillStock.value(3).toString();
        QString piecePU_TTC = reqFillStock.value(4).toString();
        qDebug() << pieceRef << pieceLib << pieceQteDispo << piecePU_HT << piecePU_TTC;
        ui->tableWidgetStock->setItem(noLigne, 0, new QTableWidgetItem(pieceRef));
        ui->tableWidgetStock->setItem(noLigne, 1, new QTableWidgetItem(pieceLib));
        ui->tableWidgetStock->setItem(noLigne, 2, new QTableWidgetItem(pieceQteDispo));
        ui->tableWidgetStock->setItem(noLigne, 3, new QTableWidgetItem(piecePU_HT));
        ui->tableWidgetStock->setItem(noLigne, 4, new QTableWidgetItem(piecePU_TTC));
        noLigne++;
    }
    ui->tableWidgetStock->resizeColumnsToContents();
}

void DialogMagasinier::fillPartForm(int row)
{
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
}

void DialogMagasinier::on_tableWidgetStock_itemSelectionChanged()
{
    fillPartForm(ui->tableWidgetStock->currentRow());
}
