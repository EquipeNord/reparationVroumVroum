#include "dialogdirecteurajoutrole.h"
#include "ui_dialogdirecteurajoutrole.h"

DialogDirecteurAjoutRole::DialogDirecteurAjoutRole(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DialogDirecteurAjoutRole)
{
    ui->setupUi(this);
}

DialogDirecteurAjoutRole::~DialogDirecteurAjoutRole()
{
    delete ui;
}
