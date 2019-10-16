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

    QString utilisateurId = "10";
    QString reparId;

    void fillTableWidget(QString utilisateurId);
    void cancel();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_refresh_clicked();

    void on_pushButton_modif_clicked();

    void on_tableWidget_cellClicked(int row, int column);

    void on_pushButton_cancel_clicked();

private:

    Ui::DialogMecano *ui;
};

#endif // DIALOGMECANO_H
