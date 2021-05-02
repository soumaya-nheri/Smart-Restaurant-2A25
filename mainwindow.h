#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include <QMainWindow>

#include <QMediaPlayer>
#include <QSound>
#include <QMediaPlayer>
#include<QVideoWidget>
#include <QFileDialog>
#include <QProgressBar>
#include <QSlider>
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

    void on_actionopen_triggered();

    void on_actionPlay_triggered();

    void on_actionPause_triggered();

    void on_actionStop_triggered();

    void on_toolButton_clicked();

private:
    Ui::MainWindow *ui;

};

#endif // MAINWINDOW_H
