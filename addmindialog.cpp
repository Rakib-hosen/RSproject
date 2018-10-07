#include "addmindialog.h"
#include "ui_addmindialog.h"
#include<QFile>
#include<QDebug>
#include<QDateTime>
#include<QTextStream>
#include<QDir>
#include<QMessageBox>
#include "adduser.h"
#include "mainwindow.h"
#include<QDebug>



addminDialog::addminDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::addminDialog)
{
    ui->setupUi(this);
    filename="H:/New folder/RS_project-master/message.txt";
   QFile file2( filename );
   if ( file2.open(QIODevice::ReadOnly) )
   {
       QTextStream in(&file2);
       QString r=in.readAll();
       ui->plainTextEdit->setPlainText(r);

   }
   file2.close();
}

addminDialog::~addminDialog()
{
    delete ui;
}


void addminDialog::on_pushButton_4_clicked()
{
    filename="H:/New folder/RS_project-master/message.txt";
    QDir dir;
    dir.remove(filename);
    QFile file2( filename );
    if ( file2.open(QIODevice::WriteOnly | QIODevice::Text) )
    {
        QTextStream out(&file2);
        out<<"";

    }
    file2.close();
    hide();
    addminDialog *n=new addminDialog;
    n->show();
}

void addminDialog::on_pushButton_3_clicked()
{
    QString b=ui->lineEdit_2->text();
    QString a=ui->plainTextEdit_2->toPlainText();
    QString filename="H:/New folder/RS_project-master/Student/"+b+".txt";
    QFile file2( filename );
    if ( file2.open(QIODevice::WriteOnly | QIODevice::Text | QIODevice::Append ) )
    {

        QTextStream stream( &file2 );
        QTime time=QTime::currentTime();
        QString time_text=time.toString("hh:mm:ss a");
        QDate date=QDate::currentDate();
        QString date_text=date.toString("dd:MM:yy");
        stream <<date_text<<"->"<<endl<<time_text<<"->"<<endl<<"Admin"<<"->"<<endl<<a<<endl<<endl;
        QMessageBox::information(this,"Send","Message Was Successfully send to "+b+" !!!");
        ui->plainTextEdit_2->setPlainText("");



    }
    file2.close();
}

void addminDialog::on_pushButton_2_clicked()
{
    hide();
    adduser *a=new adduser(nullptr,"Teacher","","admin");
    a->show();
}

void addminDialog::on_pushButton_6_clicked()
{
    hide();
    adduser *a=new adduser(nullptr,"Student","","admin");
    a->show();
}

void addminDialog::on_pushButton_clicked()
{
    QString b=ui->lineEdit->text();
    QString id[100],password[100];
    int i=0;
    QString filename="H:/New folder/RS_project-master/Student/"+b+".txt";
    QDir dir;
    dir.remove(filename);
    QString filename2="H:/New folder/RS_project-master/Student.txt";
    QFile file(filename2);
    if ( file.open(QIODevice::ReadOnly|QIODevice::Text ) ){
    QTextStream in( &file);
    while (!in.atEnd()){

        in>>id[i]>>password[i];
        if(id[i]==b){
            id[i]="";
            password[i]="";
        }
        i++;
        qDebug()<<"reading";
    }
    }
    file.close();

      QString filename44="H:/New folder/RS_project-master/Student.txt";
    QFile file2(filename44);
    i=0;
    if ( file2.open(QIODevice::ReadWrite|QIODevice::Text|QIODevice::Append ) ){
    QTextStream out( &file);

        out<<"id[i]"<<"password[i]"<<endl;
qDebug()<<"reag";
        i++;
}
    file2.close();
     qDebug()<<id[0]<<id[1]<<id[2];
     filename="H:/New folder/RS_project-master/Teacher/"+b+".txt";
    QDir dir2;
    dir2.remove(filename);
     filename2="H:/New folder/RS_project-master/Teacher.txt";
    QFile file3(filename2);
    i=0;
    if ( file3.open(QIODevice::ReadOnly ) ){
    QTextStream in( &file);
    while (!in.atEnd()){

        in>>id[i]>>password[i];
        if(id[i]==b){
            id[i]="";
            password[i]="";
        }
        i++;
    }
    }
    QFile file4(filename2);
    if ( file4.open(QIODevice::WriteOnly|QIODevice::Text ) ){
    QTextStream out( &file);
    i=0;
    while (!out.atEnd()){

        out<<id[i]<<password[i];

        i++;
    }
}
}

void addminDialog::on_pushButton_5_clicked()
{
    hide();
    MainWindow *a=new MainWindow;
    a->show();
}
