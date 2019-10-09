#include "dialogsecretaire.h"
#include "ui_dialogsecretaire.h"

DialogSecretaire::DialogSecretaire(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DialogSecretaire)
{
    ui->setupUi(this);
}

DialogSecretaire::~DialogSecretaire()
{
    delete ui;
}
