#include "mainwindow.h"
#include "ui_mainwindow.h"
#include"thdialog.h"
#include<QMessageBox>
#include<QPixmap>
#include<QDesktopServices>
#include<QUrl>
#include "tutorialdialog.h"
#include "ui_tutorialdialog.h"
#include "adduser.h"
#include "ui_adduser.h"
#include<QFile>
#include<QTextStream>
#include "addmindialog.h"
#include<QFrame>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    ui->label_6->setVisible(false);

    //........setting up the logo of institution.......
    
    QPixmap pix(":/images/pic.png");
    int w= ui->label_3->width();
      int h=ui->label_3->height();
    ui->label_3->setPixmap(pix.scaled(w,h));
    
    //........setting up the institution name........

    QPixmap pixa(":/images/IMG_20180829_022253.jpg");
    int r= ui->label_4->width();
      int s=ui->label_4->height();
    ui->label_4->setPixmap(pixa.scaled(r,s));
    
    //..........setting up the programmers logo.........

    QPixmap pixb(":/images/IMG_20180825_133444.jpg");
    int p= ui->label_5->width();
      int q=ui->label_5->height();
    ui->label_5->setPixmap(pixb.scaled(p,q));


}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_login_clicked()
{
    //..........Reading the file........

    QString filename="H:/New folder/RS_project-master/student.txt";
    QFile file( filename );
    if ( file.open(QIODevice::ReadOnly) )
    {

        QTextStream in( &file );
        while (!in.atEnd())
          {
             in>>id[i]>>password[i];

             QString userid=ui->lineEdit_username->text();
             QString userpassword=ui->lineEdit_password->text();

             if(userid==id[i]&&userpassword==password[i]){
                 hide();

                 //.........student panel launch.........

                secdialog= new SecDialog(this,id[i]);
                 secdialog -> show();
                  k=0;
                  break;
             }
             i++;

          }
    }
         filename="H:/New folder/RS_project-master/teacher.txt";
        QFile file2( filename );
        if ( file2.open(QIODevice::ReadOnly) )
        {
    i=0;
            QTextStream in( &file2);
            while (!in.atEnd())
              {
                 in>>id[i]>>password[i];

                 QString userid=ui->lineEdit_username->text();
                 QString userpassword=ui->lineEdit_password->text();

                 if(userid==id[i]&&userpassword==password[i]){
                     hide();

                     //........Teacher panel launch.........
                     foDialog *a=new foDialog(nullptr,id[i]);
                     a->show();


                      k=0;
                      break;
                 }
                 i++;

              }
            QString userid=ui->lineEdit_username->text();
            QString userpassword=ui->lineEdit_password->text();

            if(userid=="admin"&&userpassword=="admin")
            {
                hide();
                addminDialog *a=new addminDialog;
                a->show();
                k=0;
            }
        if(k==1)
        {
            //...........login error messagebox..........

            QMessageBox::warning(this,"Login","Invalid Id or password");
        }

    }
    file.close();
    
}

//..........close button......... 

void MainWindow::on_pushButton_close_clicked()
{
    hide();
}

//.........CSE 1st semester book link........

void MainWindow::on_actionCSE1st_triggered()
{
    QString link= "https://drive.google.com/open?id=0B7yDCIssdvifaHpiWENPSGUtSDg";
            QDesktopServices::openUrl(QUrl(link));
}

//.........CSE 2nd semester book link........

void MainWindow::on_actionCSE2nd_triggered()
{

    QString link= "https://drive.google.com/open?id=0B7yDCIssdvifZjk4bTNReG1qS3M";
            QDesktopServices::openUrl(QUrl(link));
}

//.........CSE 3rd semester book link........

void MainWindow::on_actionCSE3rd_triggered()
{
    QString link= "https://drive.google.com/open?id=0B7yDCIssdvifNnFocXF6cldGMzg";
            QDesktopServices::openUrl(QUrl(link));
}

//.........CSE 4th semester book link........

void MainWindow::on_actionCSE4th_triggered()
{
    QString link= "https://drive.google.com/open?id=1ntKmRyVaejl6lNggQHMqXlVBxzQHh-qL";
            QDesktopServices::openUrl(QUrl(link));
}

//.........CSE 5th semester book link........

void MainWindow::on_actionCSE5th_triggered()
{
    QString link= "https://drive.google.com/open?id=1zVKV0gWoTIrYGcWHqMKk_xdfe_ZfuLG-";
            QDesktopServices::openUrl(QUrl(link));
}

//.........CSE 6th semester book link........

void MainWindow::on_actionCSE6th_triggered()
{

    QString link= " https://drive.google.com/open?id=1TTC_FKn96yItew46_TabGE8LWB7sQP6k";
            QDesktopServices::openUrl(QUrl(link));
}

//.........CSE all book link........

void MainWindow::on_actionAll_book_triggered()
{
    QString link= "https://drive.google.com/drive/folders/0B7yDCIssdvifTHczcnNYQXpqVlU";
            QDesktopServices::openUrl(QUrl(link));
}

//.........Go To devoloper website........

void MainWindow::on_actiongo_to_developer_website_triggered()
{


    QString link= "https://www.facebook.com/profile.php?id=100008482234586";
            QDesktopServices::openUrl(QUrl(link));
}

//.........talk to developer........

void MainWindow::on_actiongoto_triggered()
{

    QString link= "https://www.facebook.com/mdkowsar.alam.3";

    QDesktopServices::openUrl(QUrl(link));
}

//.........lunch help page..........

void MainWindow::on_tutorial_clicked()
{
   hide();
   tutorialDialog *ab= new tutorialDialog(this);
   ab ->show();
}

//.......add student page............

void MainWindow::on_add_student_clicked()
{
    hide();
    adduser *a=new adduser(nullptr,"Student");
    a->show();
}
