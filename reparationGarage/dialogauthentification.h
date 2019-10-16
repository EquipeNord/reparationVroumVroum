#ifndef DIALOGAUTHENTIFICATION_H
#define DIALOGAUTHENTIFICATION_H

#include <QDialog>

namespace Ui {
class DialogAuthentification;
}

class DialogAuthentification : public QDialog
{
    Q_OBJECT

public:
    explicit DialogAuthentification(QWidget *parent = 0);
    ~DialogAuthentification();
    QString idConnect;

private slots:
    void on_pushButtonValider_clicked();

    void on_pushButtonQuit_clicked();

private:
    Ui::DialogAuthentification *ui;
};

#endif // DIALOGAUTHENTIFICATION_H
