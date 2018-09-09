#include "thdialog.h"
#include "ui_thdialog.h"
#include "mainwindow.h"
#include "ui_mainwindow.h"
#include<QMessageBox>

thDialog::thDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::thDialog)
{
    ui->setupUi(this);
}

thDialog::~thDialog()
{
    delete ui;
}

void thDialog::on_pushButton_ok_clicked()
{
    QString semester=ui->lineEdit->text();
    QString section=ui->lineEdit_2->text();


    if(semester=="1st"||semester=="1ST"){
        if(section=="AM"||section=="BM"||section=="CM"||section=="DM"||section=="AF"||section=="BF"||section=="CF"||section=="am"||section=="bm"||section=="cm"||section=="dm"||section=="af"||section=="bf"||section=="cf"){

     QMessageBox::information(this,"Login", "first semester");
        }
    }


    else if(semester=="2ND"||semester=="2nd"){
        if(section=="AM"||section=="BM"||section=="CM"||section=="DM"||section=="AF"||section=="BF"||section=="CF"||section=="am"||section=="bm"||section=="cm"||section=="dm"||section=="af"||section=="bf"||section=="cf"){

     QMessageBox::information(this,"Login", "second semester");
        }
    }



   else if(semester=="3rd"||semester=="3RD"){
        if(section=="AM"||section=="BM"||section=="CM"||section=="DM"||section=="AF"||section=="BF"||section=="CF"||section=="am"||section=="bm"||section=="cm"||section=="dm"||section=="af"||section=="bf"||section=="cf"){

     QMessageBox::information(this,"Login", "third semester");
        }
    }



 else if(semester=="4th"||semester=="4TH"){
        if(section=="AM"||section=="BM"||section=="CM"||section=="DM"||section=="AF"||section=="BF"||section=="CF"||section=="am"||section=="bm"||section=="cm"||section=="dm"||section=="af"||section=="bf"||section=="cf"){

     QMessageBox::information(this,"Login", "four semester");
        }
    }



    else if(semester=="5th"||semester=="5TH"){
        if(section=="AM"||section=="BM"||section=="CM"||section=="DM"||section=="AF"||section=="BF"||section=="CF"||section=="am"||section=="bm"||section=="cm"||section=="dm"||section=="af"||section=="bf"||section=="cf"){

     QMessageBox::information(this,"Login", "fifth semester");
        }
    }



    else if(semester=="6th"||semester=="6TH"){
        if(section=="AM"||section=="BM"||section=="CM"||section=="DM"||section=="AF"||section=="BF"||section=="CF"||section=="am"||section=="bm"||section=="cm"||section=="dm"||section=="af"||section=="bf"||section=="cf"){

     QMessageBox::information(this,"Login", "sixth semester");
        }
    }



    else if(semester=="7th"||semester=="7TH"){
        if(section=="AM"||section=="BM"||section=="CM"||section=="DM"||section=="AF"||section=="BF"||section=="CF"||section=="am"||section=="bm"||section=="cm"||section=="dm"||section=="af"||section=="bf"||section=="cf"){

     QMessageBox::information(this,"Login", "seventh semester");
        }
    }


    else if(semester=="8th"||semester=="8TH"){
        if(section=="AM"||section=="BM"||section=="CM"||section=="DM"||section=="AF"||section=="BF"||section=="CF"||section=="am"||section=="bm"||section=="cm"||section=="dm"||section=="af"||section=="bf"||section=="cf"){

     QMessageBox::information(this,"Login", "eighth semester");
        }
    }

    else
     {
       QMessageBox::warning(this,"Login", "Error input");
    }
}

void thDialog::on_pushButton_logout_clicked()
{

      MainWindow *window = new MainWindow();
      window -> show();
}

void thDialog::on_pushButton_clicked()
{
    hide();
    Dialog *ab= new Dialog(this);
    ab ->show();
}
