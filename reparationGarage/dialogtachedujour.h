#ifndef DIALOGTACHEDUJOUR_H
#define DIALOGTACHEDUJOUR_H

#include <QDialog>

namespace Ui {
class DialogTacheDuJour;
}

class DialogTacheDuJour : public QDialog
{
    Q_OBJECT

public:
    explicit DialogTacheDuJour(QString laDate, QWidget *parent = 0);
    ~DialogTacheDuJour();

private slots:
    void on_pushButton_clicked();

private:
    Ui::DialogTacheDuJour *ui;
    QString dateCliquee;
    void init();
};

#endif // DIALOGTACHEDUJOUR_H
