#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include <QMainWindow>
#include<gestion_employe.h>
#include <QMediaPlayer>
#include <QSound>
namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:

    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_Gestion_event_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_5_clicked();

private:
    Ui::MainWindow *ui;
 gestion_employe * gestionemploye;
};

#endif // MAINWINDOW_H
