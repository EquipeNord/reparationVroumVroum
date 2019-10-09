#ifndef DIALOGMAGASINIER_H
#define DIALOGMAGASINIER_H

#include <QDialog>

namespace Ui {
class DialogMagasinier;
}

class DialogMagasinier : public QDialog
{
    Q_OBJECT

public:
    explicit DialogMagasinier(QWidget *parent = 0);
    ~DialogMagasinier();

private:
    Ui::DialogMagasinier *ui;
};

#endif // DIALOGMAGASINIER_H
