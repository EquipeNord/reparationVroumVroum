#ifndef DIALOGMECANO_H
#define DIALOGMECANO_H

#include <QDialog>

namespace Ui {
class DialogMecano;
}

class DialogMecano : public QDialog
{
    Q_OBJECT

public:
    explicit DialogMecano(QWidget *parent = 0);
    ~DialogMecano();

private:
    Ui::DialogMecano *ui;
};

#endif // DIALOGMECANO_H
