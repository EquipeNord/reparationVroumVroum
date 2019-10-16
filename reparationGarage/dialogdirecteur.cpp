#include "dialogdirecteur.h"
#include "ui_dialogdirecteur.h"

DialogDirecteur::DialogDirecteur(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DialogDirecteur)
{
    ui->setupUi(this);
}

DialogDirecteur::~DialogDirecteur()
{
    delete ui;
}
