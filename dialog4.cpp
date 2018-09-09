#include "dialog4.h"
#include "ui_dialog4.h"
#include "mainwindow.h"
#include "ui_mainwindow.h"
#include<QPixmap>
#include<QDesktopServices>

Dialog4::Dialog4(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog4)
{
    ui->setupUi(this);
    QPixmap pix(":/images/image/tiger2.jpg");
    int w= ui->label->width();
      int h=ui->label->height();
    ui->label->setPixmap(pix.scaled(w,h));
}

Dialog4::~Dialog4()
{
    delete ui;
}

void Dialog4::on_d4_previous_clicked()
{
    hide();
    Dialog3 *ac =new Dialog3();
    ac-> show();
}

void Dialog4::on_d4_skip_clicked()
{
    hide();
    MainWindow *ui=new MainWindow();
    ui->show();
}
