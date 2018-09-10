#include "sylabusdialog.h"
#include "ui_sylabusdialog.h"
#include <QString>
#include<QPixmap>
#include "thdialog.h"
#include "ui_thdialog.h"

sylabusDialog::sylabusDialog(QWidget *parent,QString d,QString p,QString t) :
    QDialog(parent),
    ui(new Ui::sylabusDialog)
{
    ui->setupUi(this);
    k=d;
    a=t;
    l=p;
ui->label_2->setText(k+" "+l+" "+a);
if(a=="syllabus"){
    if(k=="CSE"||k=="cse")
    {
        if(l=="1st"||l=="1ST")
        {
            s[0] =":/images/image/deer.jpg";
            s[1] =":/images/image/pic1.jpg";
            s[2] =":/images/image/pic2.jpg";
            QPixmap pix(s[0]);
            int w= ui->label->width();
              int h=ui->label->height();
            ui->label->setPixmap(pix.scaled(w,h));
        }
        if(l=="2ND"||l=="2nd")
        {
            s[0] =":/images/image/deer.jpg";
            s[1] =":/images/image/pic1.jpg";
            s[2] =":/images/image/pic2.jpg";
            QPixmap pix(s[0]);
            int w= ui->label->width();
              int h=ui->label->height();
            ui->label->setPixmap(pix.scaled(w,h));
        }
        if(l=="3RD"||l=="3rd")
        {
            s[0] =":/images/image/deer.jpg";
            s[1] =":/images/image/pic1.jpg";
            s[2] =":/images/image/pic2.jpg";
            QPixmap pix(s[0]);
            int w= ui->label->width();
              int h=ui->label->height();
            ui->label->setPixmap(pix.scaled(w,h));
        }
        if(l=="4TH"||l=="4th")
        {
            s[0] =":/images/image/deer.jpg";
            s[1] =":/images/image/pic1.jpg";
            s[2] =":/images/image/pic2.jpg";
            QPixmap pix(s[0]);
            int w= ui->label->width();
              int h=ui->label->height();
            ui->label->setPixmap(pix.scaled(w,h));
        }
        if(l=="5TH"||l=="5th")
        {
            s[0] =":/images/image/deer.jpg";
            s[1] =":/images/image/pic1.jpg";
            s[2] =":/images/image/pic2.jpg";
            QPixmap pix(s[0]);
            int w= ui->label->width();
              int h=ui->label->height();
            ui->label->setPixmap(pix.scaled(w,h));
        }
        if(l=="6th"||l=="6TH")
        {
            s[0] =":/images/image/deer.jpg";
            s[1] =":/images/image/pic1.jpg";
            s[2] =":/images/image/pic2.jpg";
            QPixmap pix(s[0]);
            int w= ui->label->width();
              int h=ui->label->height();
            ui->label->setPixmap(pix.scaled(w,h));
        }
        if(l=="7th"||l=="7TH")
        {
            s[0] =":/images/image/deer.jpg";
            s[1] =":/images/image/pic1.jpg";
            s[2] =":/images/image/pic2.jpg";
            QPixmap pix(s[0]);
            int w= ui->label->width();
              int h=ui->label->height();
            ui->label->setPixmap(pix.scaled(w,h));
        }
        if(l=="8th"||l=="8TH")
        {
            s[0] =":/images/image/deer.jpg";
            s[1] =":/images/image/pic1.jpg";
            s[2] =":/images/image/pic2.jpg";
            QPixmap pix(s[0]);
            int w= ui->label->width();
              int h=ui->label->height();
            ui->label->setPixmap(pix.scaled(w,h));
        }

    }
}
if(a=="notice"){
    if(k=="CSE"||k=="cse")
    {
        if(l=="1st"||l=="1ST")
        {
            s[0] =":/images/image/deer.jpg";
            s[1] =":/images/image/pic1.jpg";
            s[2] =":/images/image/pic2.jpg";
            QPixmap pix(s[0]);
            int w= ui->label->width();
              int h=ui->label->height();
            ui->label->setPixmap(pix.scaled(w,h));
        }
        if(l=="2ND"||l=="2nd")
        {
            s[0] =":/images/image/deer.jpg";
            s[1] =":/images/image/pic1.jpg";
            s[2] =":/images/image/pic2.jpg";
            QPixmap pix(s[0]);
            int w= ui->label->width();
              int h=ui->label->height();
            ui->label->setPixmap(pix.scaled(w,h));
        }
        if(l=="3RD"||l=="3rd")
        {
            s[0] =":/images/image/deer.jpg";
            s[1] =":/images/image/pic1.jpg";
            s[2] =":/images/image/pic2.jpg";
            QPixmap pix(s[0]);
            int w= ui->label->width();
              int h=ui->label->height();
            ui->label->setPixmap(pix.scaled(w,h));
        }
        if(l=="4TH"||l=="4th")
        {
            s[0] =":/images/image/deer.jpg";
            s[1] =":/images/image/pic1.jpg";
            s[2] =":/images/image/pic2.jpg";
            QPixmap pix(s[0]);
            int w= ui->label->width();
              int h=ui->label->height();
            ui->label->setPixmap(pix.scaled(w,h));
        }
        if(l=="5TH"||l=="5th")
        {
            s[0] =":/images/image/deer.jpg";
            s[1] =":/images/image/pic1.jpg";
            s[2] =":/images/image/pic2.jpg";
            QPixmap pix(s[0]);
            int w= ui->label->width();
              int h=ui->label->height();
            ui->label->setPixmap(pix.scaled(w,h));
        }
        if(l=="6th"||l=="6TH")
        {
            s[0] =":/images/image/deer.jpg";
            s[1] =":/images/image/pic1.jpg";
            s[2] =":/images/image/pic2.jpg";
            QPixmap pix(s[0]);
            int w= ui->label->width();
              int h=ui->label->height();
            ui->label->setPixmap(pix.scaled(w,h));
        }
        if(l=="7th"||l=="7TH")
        {
            s[0] =":/images/image/deer.jpg";
            s[1] =":/images/image/pic1.jpg";
            s[2] =":/images/image/pic2.jpg";
            QPixmap pix(s[0]);
            int w= ui->label->width();
              int h=ui->label->height();
            ui->label->setPixmap(pix.scaled(w,h));
        }
        if(l=="8th"||l=="8TH")
        {
            s[0] =":/images/image/deer.jpg";
            s[1] =":/images/image/pic1.jpg";
            s[2] =":/images/image/pic2.jpg";
            QPixmap pix(s[0]);
            int w= ui->label->width();
              int h=ui->label->height();
            ui->label->setPixmap(pix.scaled(w,h));
        }
}
}
}

sylabusDialog::~sylabusDialog()
{
    delete ui;
}

void sylabusDialog::on_pushButton_2_clicked()
{
    i=i+1;
    if(i>2)
    {
        i=0;
    }
    QPixmap pix(s[i]);
    int w= ui->label->width();
      int h=ui->label->height();
    ui->label->setPixmap(pix.scaled(w,h));
}

void sylabusDialog::on_pushButton_clicked()
{
    i=i-1;
    if(i==0)
    {
        i=2;
    }
    QPixmap pix(s[i]);
    int w= ui->label->width();
      int h=ui->label->height();
    ui->label->setPixmap(pix.scaled(w,h));
}

void sylabusDialog::on_pushButton_3_clicked()
{
    hide();
    thDialog *d=new thDialog;
    d->show();
}
