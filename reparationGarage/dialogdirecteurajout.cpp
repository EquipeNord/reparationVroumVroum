#include "dialogdirecteurajout.h"
#include "ui_dialogdirecteurajout.h"

DialogDirecteurAjout::DialogDirecteurAjout(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DialogDirecteurAjout)
{
    ui->setupUi(this);
}

DialogDirecteurAjout::~DialogDirecteurAjout()
{
    delete ui;
}
