#include "secdialog.h"
#include "ui_secdialog.h"
#include<QDesktopServices>
#include<QUrl>
#include "tutorialdialog.h"
#include "ui_tutorialdialog.h"
#include "mainwindow.h"
#include "ui_mainwindow.h"
#include<QMessageBox>
#include "thdialog.h"
#include "ui_thdialog.h"
#include "message.h"
#include<QFile>
#include<QTextStream>

SecDialog::SecDialog(QWidget *parent,QString a) :
    QDialog(parent),
    ui(new Ui::SecDialog)
{
    ui->setupUi(this);
    id=a;

    QString filename="H:/New folder/RS_project-master/Student/"+id+".txt";
    QFile file( filename );
    if ( file.open(QIODevice::ReadOnly) )
    {
        QTextStream in(&file);
        line = in.readLine();

    }
    file.close();
    ui->label->setText("WELLCOME , "+line);
}

SecDialog::~SecDialog()
{

    delete ui;
}


void SecDialog::on_pushButton_sylabus_clicked()
{
    thDialog *dialod = new thDialog(this,"syllabus");
     dialod -> show();
}
void SecDialog::on_pushButton_lopgout_clicked()
{
  MainWindow *window = new MainWindow();
  window -> show();
}
void SecDialog::on_pushButton_cnote_clicked()
{
   QMessageBox::information(this,"SORRY", "Devoloper is working for this,give us full marks!please!!");
}

void SecDialog::on_pushButton_clicked()
{
    MainWindow *window = new MainWindow();
    window -> show();
}

void SecDialog::on_pushButton_notice_clicked()
{
   thDialog *d=new thDialog(this,"notice");
   d->show();
}

void SecDialog::on_pushButton_classroutine_clicked()
{
    QMessageBox::information(this,"SORRY", "Devoloper is working for this,stay with us!!");
}

void SecDialog::on_tutorial_clicked()
{

    hide();
    tutorialDialog *ab= new tutorialDialog(this);
    ab ->show();
}

void SecDialog::on_bus_schedule_clicked()
{
    QMessageBox::information(this,"SORRY", "Devoloper is working for this,stay with us!!");
}

void SecDialog::on_iiuc_campus_map_clicked()
{
    QMessageBox::information(this,"SORRY", "Devoloper is working for this,stay with us!!");
}

void SecDialog::on_share_your_assignment_clicked()
{
    QMessageBox::information(this,"SORRY", "Devoloper is working for this,stay with us!!");
}

void SecDialog::on_contact_your_teacher_clicked()
{
    QMessageBox::information(this,"SORRY", "Devoloper is working for this,stay with us!!");
}

void SecDialog::on_watch_your_student_profile_clicked()
{
    hide();
   message *a=new message(nullptr,id,"stdf");
   a->show();
}

void SecDialog::on_devolop_your_programming_skill_clicked()
{
    QMessageBox::information(this,"SORRY", "Devoloper is working for this,stay with us!!");
}

void SecDialog::on_talk_to_ypur_friend_clicked()
{
    hide();
    message *a =new message(nullptr,id,"Friend");
    a->show();
}

void SecDialog::on_advice_us_clicked()
{
    hide();
    message *a =new message(nullptr,id);
    a->show();

}

void SecDialog::on_adviser_clicked()
{
    QMessageBox::information(this,"SORRY", "Devoloper is working for this,stay with us!!");
}
