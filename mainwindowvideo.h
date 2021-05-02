#ifndef MAINWINDOWVIDEO_H
#define MAINWINDOWVIDEO_H

#include <QMainWindow>
#include <QMediaPlayer>
#include <QSound>
#include <QMediaPlayer>
#include<QVideoWidget>
#include <QFileDialog>
#include <QProgressBar>
#include <QSlider>
namespace Ui {
class MainWindowvideo;
}

class MainWindowvideo : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindowvideo(QWidget *parent = nullptr);
    ~MainWindowvideo();

private slots:
    void on_actionOpen_triggered();

    void on_actionPlay_triggered();

    void on_actionPause_triggered();

    void on_actionPause_2_triggered();

    void on_actionStop_triggered();

private:
    Ui::MainWindowvideo *ui;
    QMediaPlayer* player;
    QVideoWidget* vw;
    QProgressBar* bar;
    QSlider* slider;

};

#endif // MAINWINDOWVIDEO_H
