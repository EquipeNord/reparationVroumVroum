#ifndef DIALOGMAGASINIER_H
#define DIALOGMAGASINIER_H

#include <QDialog>
#include <QSqlQuery>
#include <QDebug>
#include <QArrayData>

namespace Ui {
class DialogMagasinier;
}

class DialogMagasinier : public QDialog
{
    Q_OBJECT

public:
    explicit DialogMagasinier(QWidget *parent = 0);
    ~DialogMagasinier();

private slots:
    void on_tableWidgetStock_itemSelectionChanged();

    void on_toolButtonCancel_clicked();

    void envoiRequetePiece(QString typeReq);

    void on_toolButtonAdd_clicked();

    void on_toolButtonEdit_clicked();

    void on_tabWidget_currentChanged(int index);

    void fillStockTable();
    void fillPartForm(int row);
    void editMode(bool state);
    void fillRepairsTable();

    void on_tableWidgetRepairsList_itemSelectionChanged();

    void fillPartsList(QString reparNum);
    void fillPartsComboBox(QString refPiece);

    void on_comboBoxParts_currentIndexChanged(int index);

    void on_toolButtonAddToRepair_clicked();

    void on_tableWidgetPartsUsed_itemSelectionChanged();

    void fillPartsToRepairForm(QString laRef, QString leLib, int laQteUtilisee);

    void on_toolButtonEditToRepair_clicked();

    void on_toolButtonCancelToRepair_clicked();

private:
    Ui::DialogMagasinier *ui;
};

#endif // DIALOGMAGASINIER_H
