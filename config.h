#ifndef CONFIG_H
#define CONFIG_H

#include <QMediaPlayer>
#include <QSound>
#include <QMainWindow>

namespace Ui {
class config;
}

class config : public QMainWindow
{
    Q_OBJECT

public:
    explicit config(QWidget *parent = nullptr);
    ~config();


private slots:
    void digit_pressed();

    void on_pushButton_dot_released();
    void unary_operation_pressed();
    void on_pushButton_clear_released();
    void on_pushButton_equals_released();
    void binary_operation_pressed();

    void on_btnmodif_clicked();



    void on_muteSound_clicked();

    void on_actionSound_clicked();

    void on_ouvrir_media_clicked();

    void on_play_media_clicked();

    void on_pause_media_clicked();

    void on_stop_media_clicked();

    void on_mute_media_clicked();

    void on_volume_media_valueChanged(int value);

    void on_radioButton_jour_toggled(bool checked);

    void on_radioButton_nuit_toggled(bool checked);

    void on_logout_button_clicked();

    void on_toolButton_7_clicked();

    void on_newfile_clicked();

    void on_copier_clicked();

    void on_coller_clicked();

    void on_couper_clicked();

    void on_redo_clicked();

    void on_undo_clicked();

    void on_savefile_clicked();

    void on_openfile_clicked();

    void on_clear_clicked();

    void on_imprimer_clicked();


    void on_mute_media_2_clicked();

private:
    Ui::config *ui;

    QSound *sound;
    QMediaPlayer *player;


    QMediaPlayer *mMediaPlayer;
    QSound *son;

    QMediaPlayer musicAdd;
      QString currentFile="";
};

#endif // CONFIG_H

