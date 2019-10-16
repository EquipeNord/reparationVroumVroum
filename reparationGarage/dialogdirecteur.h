#ifndef DIALOGDIRECTEUR_H
#define DIALOGDIRECTEUR_H

#include <QDialog>

namespace Ui {
class DialogDirecteur;
}

class DialogDirecteur : public QDialog
{
    Q_OBJECT

public:
    explicit DialogDirecteur(QWidget *parent = 0);
    ~DialogDirecteur();

private:
    Ui::DialogDirecteur *ui;
};

#endif // DIALOGDIRECTEUR_H
