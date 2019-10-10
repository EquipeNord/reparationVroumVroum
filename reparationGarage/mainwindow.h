#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    QString utilisateurId = "10";

private slots:
    void on_calendarWidgetPlanning_clicked(const QDate &date);

    void on_pushButtonMecanicien_clicked();

    void on_pushButtonSecretaire_clicked();

    void on_pushButtonComptable_clicked();

    void on_pushButtonMagasinier_clicked();

    void on_pushButtonDirecteur_clicked();

    void on_actionFermer_la_fen_tre_triggered();

private:
    Ui::MainWindow *ui;
    void setup();
};

#endif // MAINWINDOW_H
