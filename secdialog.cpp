#include "secdialog.h"
#include "ui_secdialog.h"
#include"thdialog.h"
#include<QDesktopServices>
#include<QUrl>
#include "mainwindow.h"
#include "ui_mainwindow.h"
#include<QMessageBox>

SecDialog::SecDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::SecDialog)
{
    ui->setupUi(this);
}

SecDialog::~SecDialog()
{
    delete ui;
}


void SecDialog::on_pushButton_sylabus_clicked()
{
    thDialog *dialod = new thDialog(this);
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
    QMessageBox::information(this,"SORRY", "Devoloper is working for this,stay with us!!");
}

void SecDialog::on_pushButton_classroutine_clicked()
{
    QMessageBox::information(this,"SORRY", "Devoloper is working for this,stay with us!!");
}

void SecDialog::on_tutorial_clicked()
{

    hide();
    Dialog *ab= new Dialog(this);
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
    QMessageBox::information(this,"SORRY", "Devoloper is working for this,stay with us!!");
}

void SecDialog::on_devolop_your_programming_skill_clicked()
{
    QMessageBox::information(this,"SORRY", "Devoloper is working for this,stay with us!!");
}

void SecDialog::on_talk_to_ypur_friend_clicked()
{
    QMessageBox::information(this,"SORRY", "Devoloper is working for this,stay with us!!");
}

void SecDialog::on_advice_us_clicked()
{
  QMessageBox::information(this,"SORRY", "Devoloper is working for this,stay with us!!");
}

void SecDialog::on_adviser_clicked()
{
    QMessageBox::information(this,"SORRY", "Devoloper is working for this,stay with us!!");
}
