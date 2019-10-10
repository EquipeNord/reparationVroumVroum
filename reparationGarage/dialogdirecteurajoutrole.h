#ifndef DIALOGDIRECTEURAJOUTROLE_H
#define DIALOGDIRECTEURAJOUTROLE_H

#include <QDialog>

namespace Ui {
class DialogDirecteurAjoutRole;
}

class DialogDirecteurAjoutRole : public QDialog
{
    Q_OBJECT

public:
    explicit DialogDirecteurAjoutRole(QWidget *parent = 0);
    ~DialogDirecteurAjoutRole();

private slots:
    void on_pushButtonAddCanc_clicked();

    void on_pushButtonAddConf_clicked();

private:
    Ui::DialogDirecteurAjoutRole *ui;
};

#endif // DIALOGDIRECTEURAJOUTROLE_H
