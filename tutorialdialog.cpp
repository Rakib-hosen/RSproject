#include "tutorialdialog.h"
#include "ui_tutorialdialog.h"
#include "mainwindow.h"
#include "ui_mainwindow.h"

tutorialDialog::tutorialDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::tutorialDialog)
{
    ui->setupUi(this);
    QPixmap pix(":/images/image/deer.jpg");
    int w= ui->label->width();
      int h=ui->label->height();
    ui->label->setPixmap(pix.scaled(w,h));
}

tutorialDialog::~tutorialDialog()
{
    delete ui;
}

void tutorialDialog::on_pushButton_2_clicked()
{
    i++;
    if(i==5){
    i=0;
    }
    if(i==0){
    QPixmap pix(":/images/image/deer.jpg");
    int w= ui->label->width();
      int h=ui->label->height();
    ui->label->setPixmap(pix.scaled(w,h));
    }
    if(i==1){
    QPixmap pix(":/images/image/pic1.jpg");
    int w= ui->label->width();
      int h=ui->label->height();
    ui->label->setPixmap(pix.scaled(w,h));
    }
    if(i==2){
    QPixmap pix(":/images/image/pic2.jpg");
    int w= ui->label->width();
      int h=ui->label->height();
    ui->label->setPixmap(pix.scaled(w,h));
    }
    if(i==3){
    QPixmap pix(":/images/image/tiger.jpg");
    int w= ui->label->width();
      int h=ui->label->height();
    ui->label->setPixmap(pix.scaled(w,h));
    }
    if(i==4){
    QPixmap pix(":/images/image/tiger2.jpg");
    int w= ui->label->width();
      int h=ui->label->height();
    ui->label->setPixmap(pix.scaled(w,h));
    }
}

void tutorialDialog::on_pushButton_clicked()
{
    i--;
    if(i==0||i<0){
    i=4;
    }
    if(i==0){
    QPixmap pix(":/images/image/deer.jpg");
    int w= ui->label->width();
      int h=ui->label->height();
    ui->label->setPixmap(pix.scaled(w,h));
    }
    if(i==1){
    QPixmap pix(":/images/image/pic1.jpg");
    int w= ui->label->width();
      int h=ui->label->height();
    ui->label->setPixmap(pix.scaled(w,h));
    }
    if(i==2){
    QPixmap pix(":/images/image/pic2.jpg");
    int w= ui->label->width();
      int h=ui->label->height();
    ui->label->setPixmap(pix.scaled(w,h));
    }
    if(i==3){
    QPixmap pix(":/images/image/tiger.jpg");
    int w= ui->label->width();
      int h=ui->label->height();
    ui->label->setPixmap(pix.scaled(w,h));
    }
    if(i==4){
    QPixmap pix(":/images/image/tiger2.jpg");
    int w= ui->label->width();
      int h=ui->label->height();
    ui->label->setPixmap(pix.scaled(w,h));
    }
}

void tutorialDialog::on_pushButton_3_clicked()
{
    hide();
    MainWindow *a =new MainWindow;
    a->show();
}
