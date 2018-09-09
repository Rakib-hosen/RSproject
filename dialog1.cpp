#include "dialog1.h"
#include "ui_dialog1.h"
#include "mainwindow.h"
#include "ui_mainwindow.h"
#include<QPixmap>
#include<QDesktopServices>

Dialog1::Dialog1(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog1)
{
    ui->setupUi(this);
    QPixmap pix(":/images/image/pic1.jpg");
    int w= ui->label->width();
      int h=ui->label->height();
    ui->label->setPixmap(pix.scaled(w,h));
}

Dialog1::~Dialog1()
{
    delete ui;
}

void Dialog1::on_d1_previous_clicked()
{
    hide();
    Dialog *ac =new Dialog();
    ac-> show();
}

void Dialog1::on_d1_skip_clicked()
{
    hide();
    MainWindow *ui=new MainWindow();
    ui->show();
}

void Dialog1::on_d1_next_clicked()
{
    hide();
    Dialog2 *bb= new Dialog2(this);
    bb ->show();
}
