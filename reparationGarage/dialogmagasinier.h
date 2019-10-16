#ifndef DIALOGMAGASINIER_H
#define DIALOGMAGASINIER_H

#include <QDialog>
#include <QSqlQuery>
#include <QDebug>

namespace Ui {
class DialogMagasinier;
}

class DialogMagasinier : public QDialog
{
    Q_OBJECT

public:
    explicit DialogMagasinier(QWidget *parent = 0);
    ~DialogMagasinier();
    void fillStockTable();
    void fillPartForm(int row);
    void editMode(bool state);

private slots:
    void on_tableWidgetStock_itemSelectionChanged();

    void on_toolButtonCancel_clicked();

private:
    Ui::DialogMagasinier *ui;
};

#endif // DIALOGMAGASINIER_H
