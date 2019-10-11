#ifndef DIALOGSECRETAIRE_H
#define DIALOGSECRETAIRE_H

#include <QDialog>

namespace Ui {
class DialogSecretaire;
}

class DialogSecretaire : public QDialog
{
    Q_OBJECT

public:
    explicit DialogSecretaire(QWidget *parent = nullptr);
    ~DialogSecretaire();

private:
    Ui::DialogSecretaire *ui;
};

#endif // DIALOGSECRETAIRE_H
