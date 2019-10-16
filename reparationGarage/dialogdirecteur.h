#ifndef DIALOGDIRECTEUR_H
#define DIALOGDIRECTEUR_H

#include <QDialog>

namespace Ui {
class DialogDirecteur;
}

class DialogDirecteur : public QDialog
{
    Q_OBJECT

public:
    explicit DialogDirecteur(QWidget *parent = 0);
    ~DialogDirecteur();
    void actualiser();
    void remplirLesRole();
    void remplirTableDeRoles();
    void clearData();

private slots:

    void on_pushButtonModCanc_clicked();

    void on_tableWidgetRoles_clicked(const QModelIndex &index);

    void on_pushButton_5_clicked();


    void on_pushButtonAddRole_clicked();

    void on_pushButtonDelRole_clicked();


    void on_tableWidgetUser_cellClicked(int row, int column);

    void on_pushButtonAddUser_clicked();

    void on_pushButtonDelUSer_clicked();

    void on_pushButtonModUSer_clicked();

    void on_pushButtonAband_clicked();

private:
    Ui::DialogDirecteur *ui;
};

#endif // DIALOGDIRECTEUR_H
