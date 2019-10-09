#include "dialogmagasinier.h"
#include "ui_dialogmagasinier.h"

DialogMagasinier::DialogMagasinier(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DialogMagasinier)
{
    ui->setupUi(this);
}

DialogMagasinier::~DialogMagasinier()
{
    delete ui;
}
