#include "mainwindow.h"
#include "ui_mainwindow.h"
#include"thdialog.h"
#include<QMessageBox>
#include<QPixmap>
#include<QDesktopServices>
#include<QUrl>
#include "tutorialdialog.h"
#include "ui_tutorialdialog.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QPixmap pix(":/images/pic.png");
    int w= ui->label_3->width();
      int h=ui->label_3->height();
    ui->label_3->setPixmap(pix.scaled(w,h));

    QPixmap pixa(":/images/IMG_20180829_022253.jpg");
    int r= ui->label_4->width();
      int s=ui->label_4->height();
    ui->label_4->setPixmap(pixa.scaled(r,s));

    QPixmap pixb(":/images/IMG_20180825_133444.jpg");
    int p= ui->label_5->width();
      int q=ui->label_5->height();
    ui->label_5->setPixmap(pixb.scaled(p,q));


}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_login_clicked()
{
    QString username=ui->lineEdit_username->text();
    QString password=ui->lineEdit_password->text();


    if(username=="shuvo"&&password=="rakib"){
      // QMessageBox::information(this,"Login", "Username and password is correct");
        hide();
       secdialog= new SecDialog(this);
        secdialog -> show();
    }
     else if(username=="jamil"&&password=="asad")
    {
        hide();
            foDialog *aa=new foDialog;
             aa->show();
    }
    else if(username=="admin"&&password=="pass")
    {
        hide();
        addminDialog *aa= new addminDialog;
        aa->show();
    }
    else
    {
        QMessageBox::warning(this,"Login", "Username and password is not correct");
    }
}
void MainWindow::on_pushButton_close_clicked()
{
    hide();
}

void MainWindow::on_actionCSE1st_triggered()
{
    QString link= "https://drive.google.com/open?id=0B7yDCIssdvifaHpiWENPSGUtSDg";
            QDesktopServices::openUrl(QUrl(link));
}

void MainWindow::on_actionCSE2nd_triggered()
{

    QString link= "https://drive.google.com/open?id=0B7yDCIssdvifZjk4bTNReG1qS3M";
            QDesktopServices::openUrl(QUrl(link));
}

void MainWindow::on_actionCSE3rd_triggered()
{
    QString link= "https://drive.google.com/open?id=0B7yDCIssdvifNnFocXF6cldGMzg";
            QDesktopServices::openUrl(QUrl(link));
}

void MainWindow::on_actionCSE4th_triggered()
{
    QString link= "https://drive.google.com/open?id=1ntKmRyVaejl6lNggQHMqXlVBxzQHh-qL";
            QDesktopServices::openUrl(QUrl(link));
}

void MainWindow::on_actionCSE5th_triggered()
{
    QString link= "https://drive.google.com/open?id=1zVKV0gWoTIrYGcWHqMKk_xdfe_ZfuLG-";
            QDesktopServices::openUrl(QUrl(link));
}

void MainWindow::on_actionCSE6th_triggered()
{

    QString link= " https://drive.google.com/open?id=1TTC_FKn96yItew46_TabGE8LWB7sQP6k";
            QDesktopServices::openUrl(QUrl(link));
}


void MainWindow::on_actionAll_book_triggered()
{
    QString link= "https://drive.google.com/drive/folders/0B7yDCIssdvifTHczcnNYQXpqVlU";
            QDesktopServices::openUrl(QUrl(link));
}

void MainWindow::on_actiongo_to_developer_website_triggered()
{


    QString link= "https://www.facebook.com/profile.php?id=100008482234586";
            QDesktopServices::openUrl(QUrl(link));
}

void MainWindow::on_actiongoto_triggered()
{

    QString link= "https://www.facebook.com/mdkowsar.alam.3";

    QDesktopServices::openUrl(QUrl(link));
}

void MainWindow::on_tutorial_clicked()
{
   hide();
   tutorialDialog *ab= new tutorialDialog(this);
   ab ->show();
}
