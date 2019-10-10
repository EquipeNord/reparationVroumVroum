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

private slots:
    void on_tableWidgetUser_clicked(const QModelIndex &index);

    void on_pushButtonModCanc_clicked();

    void on_pushButton_clicked();

    void on_tableWidgetRoles_clicked(const QModelIndex &index);

    void on_pushButton_2_clicked();

    void on_pushButton_4_clicked();

    void on_tableWidgetUser_doubleClicked(const QModelIndex &index);

    void on_pushButton_5_clicked();

    void on_pushButton_3_clicked();

    void on_pushButtonAddRole_clicked();

private:
    Ui::DialogDirecteur *ui;
};

#endif // DIALOGDIRECTEUR_H
