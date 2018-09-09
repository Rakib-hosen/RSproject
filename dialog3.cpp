#include "dialog3.h"
#include "ui_dialog3.h"
#include "mainwindow.h"
#include "ui_mainwindow.h"
#include<QPixmap>
#include<QDesktopServices>


Dialog3::Dialog3(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog3)
{
    ui->setupUi(this);
    QPixmap pix(":/images/image/tiger.jpg");
    int w= ui->label->width();
      int h=ui->label->height();
    ui->label->setPixmap(pix.scaled(w,h));
}

Dialog3::~Dialog3()
{
    delete ui;
}

void Dialog3::on_d3_previous_clicked()
{
    hide();
    Dialog2 *ac =new Dialog2();
    ac-> show();
}

void Dialog3::on_d3_next_clicked()
{
    hide();
    Dialog4 *dd= new Dialog4(this);
    dd ->show();
}

void Dialog3::on_d3_skip_clicked()
{
    hide();
    MainWindow *ui=new MainWindow();
    ui->show();
}
