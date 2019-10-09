#include "dialogmecano.h"
#include "ui_dialogmecano.h"

DialogMecano::DialogMecano(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DialogMecano)
{
    ui->setupUi(this);
}

DialogMecano::~DialogMecano()
{
    delete ui;
}
