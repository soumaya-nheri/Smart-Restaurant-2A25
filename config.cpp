#include "config.h"
#include "ui_config.h"
#include <QMessageBox>
#include <QComboBox>
#include<QStringList>
#include<QDate>
#include <QSqlQuery>
#include <QPrintDialog>
#include <QTextStream>
#include <QPrinter>
#include<QtDebug>
#include <QTextDocument>
#include <QProcess>

#include <QSound>
#include <QMediaPlayer>
#include <QSound>
#include <QFileDialog>
#include <QList>
double firstNum;
bool user_is_typing_secondNumber=false;
config::config(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::config)
{
    ui->setupUi(this);
    connect(ui->pushButton_0,SIGNAL(released()),this,SLOT(digit_pressed()));
    connect(ui->pushButton_1,SIGNAL(released()),this,SLOT(digit_pressed()));
    connect(ui->pushButton_2,SIGNAL(released()),this,SLOT(digit_pressed()));
    connect(ui->pushButton_3,SIGNAL(released()),this,SLOT(digit_pressed()));
    connect(ui->pushButton_4,SIGNAL(released()),this,SLOT(digit_pressed()));
    connect(ui->pushButton_5,SIGNAL(released()),this,SLOT(digit_pressed()));
    connect(ui->pushButton_6,SIGNAL(released()),this,SLOT(digit_pressed()));
    connect(ui->pushButton_7,SIGNAL(released()),this,SLOT(digit_pressed()));
    connect(ui->pushButton_8,SIGNAL(released()),this,SLOT(digit_pressed()));
    connect(ui->pushButton_9,SIGNAL(released()),this,SLOT(digit_pressed()));

    connect(ui->pushButton_plusMinus,SIGNAL(released()),this,SLOT(unary_operation_pressed()));
    connect(ui->pushButton_percent,SIGNAL(released()),this,SLOT(unary_operation_pressed()));

    connect(ui->pushButton_multiply,SIGNAL(released()),this,SLOT(binary_operation_pressed()));
    connect(ui->pushButton_add,SIGNAL(released()),this,SLOT(binary_operation_pressed()));
    connect(ui->pushButton_minus,SIGNAL(released()),this,SLOT(binary_operation_pressed()));
    connect(ui->pushButton_divide,SIGNAL(released()),this,SLOT(binary_operation_pressed()));

    ui->pushButton_add->setCheckable(true);
    ui->pushButton_multiply->setCheckable(true);
    ui->pushButton_divide->setCheckable(true);
    ui->pushButton_minus->setCheckable(true);
    //setFixedSize( 241,366);


//configuration

     mMediaPlayer = new QMediaPlayer(this);

     connect(mMediaPlayer , &QMediaPlayer::positionChanged, [&](qint64 pos){

         ui->avancement_media->setValue(pos);

     });

     connect(mMediaPlayer , &QMediaPlayer::durationChanged, [&](qint64 dur){

         ui->avancement_media->setMaximum(dur);

     });


     player = new QMediaPlayer(this);
     player->setMedia(QUrl::fromLocalFile("D:/Users/dhiaa/Desktop/Wedding_planner_2A1/INTEGRATION/cant.wav"));

     player->setVolume(50);
}

config::~config()
{
    delete ui;
}
void config::digit_pressed()
{

    qDebug() << "test";
    QPushButton * button = (QPushButton *)sender();
    QString input;
    double labelnumber;

    if((ui->pushButton_add->isChecked() || ui->pushButton_divide->isChecked() || ui->pushButton_minus->isChecked() || ui->pushButton_multiply->isChecked()) && (!user_is_typing_secondNumber))
    {
        user_is_typing_secondNumber=true;
        labelnumber = button->text().toDouble();
        input = QString::number(labelnumber,'g',15);
    }

    else
    {
        if(ui->label_19->text().contains(".") && button->text() == "0")
        {
            input=ui->label_19->text() + button->text();
        }
        else
        {
            labelnumber = (ui->label_19->text() + button->text()).toDouble();
            input = QString::number(labelnumber,'g',15);
        }
        labelnumber = (ui->label_19->text() + button->text()).toDouble();
    }
    ui->label_19->setText(input);
 user_is_typing_secondNumber=false;
}

void config::on_pushButton_dot_released()
{
    // check for appearance of decimal, exit function if there is one
         if(ui->label_19->text().contains(".")){

                 return;
         }
    ui->label_19->setText(ui->label_19->text() + ".");
    //check for extra decimal
    user_is_typing_secondNumber=false;
}

void config::unary_operation_pressed()
{
    QPushButton* button = (QPushButton *)sender();
    double labelnumber;
    QString input;

    if(button->text() == "+/-")
    {
        labelnumber = (ui->label_19->text()).toDouble();
        labelnumber *= -1;
        input = QString::number(labelnumber,'g',15);
        ui->label_19->setText(input);
    }

    else if(button->text() == "%")
    {
        labelnumber = (ui->label_19->text()).toDouble();
        labelnumber *= 0.01;
        input = QString::number(labelnumber,'g',15);
        ui->label_19->setText(input);
    }

    //error correction codse is still missing
   user_is_typing_secondNumber=false;
}

void config::on_pushButton_clear_released()
{
    ui->pushButton_add->setChecked(false);
    ui->pushButton_minus->setChecked(false);
    ui->pushButton_multiply->setChecked(false);
    ui->pushButton_divide->setChecked(false);
    user_is_typing_secondNumber=false;

    ui->label_19->setText("0");
}

void config::on_pushButton_equals_released()
{
    double labelnumber,secondNum;
    QString input;
    labelnumber=0;

    secondNum = ui->label_19->text().toDouble();

    if(ui->pushButton_add->isChecked())
    {
        labelnumber = firstNum + secondNum;
        ui->pushButton_add->setChecked(false);
    }

    else if(ui->pushButton_minus->isChecked())
    {
        labelnumber = firstNum - secondNum;
        ui->pushButton_minus->setChecked(false);
    }

    else if(ui->pushButton_multiply->isChecked())
    {
        labelnumber = firstNum * secondNum;
        ui->pushButton_multiply->setChecked(false);
    }

    else if(ui->pushButton_divide->isChecked())
    {
        labelnumber = firstNum / secondNum;
        ui->pushButton_divide->setChecked(false);
    }

    input = QString::number(labelnumber,'g',15);
    ui->label_19->setText(input);

    user_is_typing_secondNumber=false;
}

void config::binary_operation_pressed()
{
    QPushButton* button = (QPushButton *)sender();
    //double labelnumber;
    //QString input;

    firstNum = ui->label_19->text().toDouble();
    button->setChecked(true);
 user_is_typing_secondNumber=false;
}



void config::on_muteSound_clicked()
{
   sound->stop();
}
void config::on_actionSound_clicked()

   {
     sound->play();
   }
//configuration code

void config::on_ouvrir_media_clicked()
{


    QString filename = QFileDialog::getOpenFileName(this, "ouvrir");
    qDebug() << "Loading File"<< filename;

    if (filename.isEmpty())

    {

        return;

    }

    mMediaPlayer->setMedia(QUrl::fromLocalFile(filename));

    mMediaPlayer->setVolume(ui->volume_media->value());

    on_play_media_clicked();
}



void config::on_play_media_clicked()
{
    mMediaPlayer->play();
}

void config::on_pause_media_clicked()
{
    mMediaPlayer->pause();
}

void config::on_stop_media_clicked()
{
    mMediaPlayer->stop();
}

void config::on_mute_media_clicked()
{
    if (ui->mute_media->text() == "Mute")

    {

        mMediaPlayer->setMuted(true);

        ui->mute_media->setText("Unmute");

    }

    else {

        mMediaPlayer->setMuted(false);

        ui->mute_media->setText("Mute");

    }
}

void config::on_volume_media_valueChanged(int value)
{
    mMediaPlayer->setVolume(value);
}





//texteditor




void config::on_newfile_clicked()
{
    // Global referencing the current file that we are clearing
       currentFile.clear();

       // Clear the textEdit widget buffer
       ui->textEdit->setText(QString());
}

void config::on_copier_clicked()
{
      ui->textEdit->copy();
}

void config::on_coller_clicked()
{
    ui->textEdit->paste();
}

void config::on_couper_clicked()
{
    ui->textEdit->cut();

}

void config::on_redo_clicked()
{ ui->textEdit->redo();

}

void config::on_undo_clicked()
{
     ui->textEdit->undo();
}

void config::on_savefile_clicked()
{
    // Opens a dialog for saving a file
      QString fileName = QFileDialog::getSaveFileName(this, "Save as");

      // An object for reading and writing files
      QFile file(fileName);

      // Try to open a file with write only options
      if (!file.open(QFile::WriteOnly | QFile::Text)) {
          QMessageBox::warning(this, "Warning", "Cannot save file: " + file.errorString());
          return;
      }

      // Store the currentFile name
      currentFile = fileName;

      // Set the title for the window to the file name
      setWindowTitle(fileName);

      // Interface for writing text
      QTextStream out(&file);

      // Copy text in the textEdit widget and convert to plain text
      QString text = ui->textEdit->toPlainText();

      // Output to file
      out << text;

      // Close the file
      file.close();
}

void config::on_openfile_clicked()
{
    QString fileName = QFileDialog::getOpenFileName(this, "Open the file");

       // An object for reading and writing files
       QFile file(fileName);

       // Store the currentFile name
       currentFile = fileName;

       // Try to open the file as a read only file if possible or display a
       // warning dialog box
       if (!file.open(QIODevice::ReadOnly | QFile::Text)) {
           QMessageBox::warning(this, "Warning", "Cannot open file: " + file.errorString());
           return;
       }

       // Set the title for the window to the file name
       setWindowTitle(fileName);

       // Interface for reading text
       QTextStream in(&file);

       // Copy text in the string
       QString text = in.readAll();

       // Put the text in the textEdit widget
       ui->textEdit->setText(text);

       // Close the file
       file.close();
}

void config::on_clear_clicked()
{
    currentFile.clear();

    // Clear the textEdit widget buffer
    ui->textEdit->setText(QString());
}

void config::on_imprimer_clicked()
{
    QPrinter printer;

        // You'll put your printer name here
        printer.setPrinterName("Printer Name");

        // Create the print dialog and pass the name and parent
        QPrintDialog pDialog(&printer, this);

        if(pDialog.exec() == QDialog::Rejected){
            QMessageBox::warning(this, "Warning", "Cannot Access Printer");
            return;
        }

        // Send the text to the printer
        ui->textEdit->print(&printer);
}

void config::on_logout_button_clicked()
{

   // QApplication::quit();

}


