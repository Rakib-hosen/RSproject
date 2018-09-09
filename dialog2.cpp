#include "dialog2.h"
#include "ui_dialog2.h"
#include "mainwindow.h"
#include "ui_mainwindow.h"
#include<QPixmap>
#include<QDesktopServices>

Dialog2::Dialog2(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog2)
{
    ui->setupUi(this);
    QPixmap pix(":/images/image/pic2.jpg");
    int w= ui->label->width();
      int h=ui->label->height();
    ui->label->setPixmap(pix.scaled(w,h));
}

Dialog2::~Dialog2()
{
    delete ui;
}

void Dialog2::on_d2_previous_clicked()
{
    hide();
    Dialog1 *ac =new Dialog1();
    ac-> show();
}

void Dialog2::on_d2_next_clicked()
{
    hide();
    Dialog3 *cc= new Dialog3(this);
    cc ->show();
}

void Dialog2::on_d2_skip_clicked()
{
    hide();
    MainWindow *ui=new MainWindow();
    ui->show();
}
