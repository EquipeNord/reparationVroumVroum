#ifndef DIALOGDIRECTEURAJOUT_H
#define DIALOGDIRECTEURAJOUT_H

#include <QDialog>

namespace Ui {
class DialogDirecteurAjout;
}

class DialogDirecteurAjout : public QDialog
{
    Q_OBJECT

public:
    explicit DialogDirecteurAjout(QWidget *parent = 0);
    ~DialogDirecteurAjout();

private slots:
    void on_pushButtonCancel_clicked();

    void on_pushButtonValid_clicked();

private:
    Ui::DialogDirecteurAjout *ui;
};

#endif // DIALOGDIRECTEURAJOUT_H
