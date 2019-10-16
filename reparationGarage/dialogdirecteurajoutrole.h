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

private:
    Ui::DialogDirecteurAjoutRole *ui;
};

#endif // DIALOGDIRECTEURAJOUTROLE_H
