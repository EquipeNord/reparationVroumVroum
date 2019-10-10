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

private:
    Ui::DialogDirecteurAjout *ui;
};

#endif // DIALOGDIRECTEURAJOUT_H
