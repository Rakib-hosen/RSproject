#include "dialog.h"
#include "ui_dialog.h"
#include "mainwindow.h"
#include "ui_mainwindow.h"
#include<QPixmap>
#include<QDesktopServices>

Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);
    QPixmap pix(":/images/image/deer.jpg");
    int w= ui->label->width();
      int h=ui->label->height();
    ui->label->setPixmap(pix.scaled(w,h));
}

Dialog::~Dialog()
{
    delete ui;
}

void Dialog::on_next_clicked()
{
    hide();
    Dialog1 *bb= new Dialog1(this);
    bb ->show();
}

void Dialog::on_skip_clicked()
{
    hide();
   MainWindow *ac=new MainWindow();
   ac->show();
}
