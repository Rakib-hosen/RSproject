#include "message.h"
#include "ui_message.h"
#include<QFile>
#include<QTextStream>
#include<QDateTime>
#include<QMessageBox>
#include "secdialog.h"
#include "fodialog.h"

message::message(QWidget *parent,QString a,QString b) :
    QDialog(parent),
    ui(new Ui::message)
{
    ui->setupUi(this);
    r=b;
    id=a;
    if(r=="admin"||r=="stdf"||r=="tecf")
    {
        ui->label->setVisible(false);
        ui->lineEdit->setVisible(false);
    }
    if(r=="stdf"||r=="tecf")
    {
        ui->pushButton_2->setVisible(false);
        if(r=="stdf"){

       QString  filename="H:/New folder/RS_project-master/Student/"+id+".txt";
       QFile file2( filename );
       if ( file2.open(QIODevice::ReadOnly) )
       {
           QTextStream in(&file2);
           QString r=in.readAll();
           ui->plainTextEdit->setPlainText(r);

       }
       file2.close();
        }
        else{

       QString  filename="H:/New folder/RS_project-master/Teacher/"+id+".txt";
       QFile file2( filename );
       if ( file2.open(QIODevice::ReadOnly) )
       {
           QTextStream in(&file2);
           QString r=in.readAll();
           ui->plainTextEdit->setPlainText(r);

       }
       file2.close();
        }
    }
}

message::~message()
{
    delete ui;
}

void message::on_pushButton_2_clicked()
{
    if(r=="admin"){
    QString a=ui->plainTextEdit->toPlainText();
    QString filename="H:/New folder/RS_project-master/message.txt";
    QFile file2( filename );
    if ( file2.open(QIODevice::WriteOnly | QIODevice::Text | QIODevice::Append ) )
    {

        QTextStream stream( &file2 );
        QTime time=QTime::currentTime();
        QString time_text=time.toString("hh:mm:ss a");
        QDate date=QDate::currentDate();
        QString date_text=date.toString("dd:MM:yy");
        stream <<date_text<<"->"<<endl<<time_text<<"->"<<endl<<id<<"->"<<endl<<a<<endl<<endl;
        QMessageBox::information(this,"Send","Message Was Successfully send!!!");


    }
    file2.close();
    hide();
    SecDialog *n=new SecDialog(nullptr,id);
    n->show();
    }
    if(r=="Friend"){
    QString a=ui->plainTextEdit->toPlainText();
    QString b=ui->lineEdit->text();
    QString filename="H:/New folder/RS_project-master/Student/"+b+".txt";
    QFile file2( filename );
    if ( file2.open(QIODevice::WriteOnly | QIODevice::Text | QIODevice::Append ) )
    {

        QTextStream stream( &file2 );
        QTime time=QTime::currentTime();
        QString time_text=time.toString("hh:mm:ss a");
        QDate date=QDate::currentDate();
        QString date_text=date.toString("dd:MM:yy");
        stream <<date_text<<"->"<<endl<<time_text<<"->"<<endl<<id<<"->"<<endl<<a<<endl<<endl;
        QMessageBox::information(this,"Send","Message Was Successfully send!!!");


    }
    file2.close();
    hide();
    SecDialog *n=new SecDialog(nullptr,id);
    n->show();
    }
    if(r=="Teacher"){
    QString a=ui->plainTextEdit->toPlainText();
    QString b=ui->lineEdit->text();
    QString filename="H:/New folder/RS_project-master/Teacher/"+b+".txt";
    QFile file2( filename );
    if ( file2.open(QIODevice::WriteOnly | QIODevice::Text | QIODevice::Append ) )
    {

        QTextStream stream( &file2 );
        QTime time=QTime::currentTime();
        QString time_text=time.toString("hh:mm:ss a");
        QDate date=QDate::currentDate();
        QString date_text=date.toString("dd:MM:yy");
        stream <<date_text<<"->"<<endl<<time_text<<"->"<<endl<<id<<"->"<<endl<<a<<endl<<endl;
        QMessageBox::information(this,"Send","Message Was Successfully send!!!");


    }
    file2.close();
    hide();
    SecDialog *n=new SecDialog(nullptr,id);
    n->show();
    }

}

void message::on_pushButton_3_clicked()
{
    if(r=="stdf"||r=="admin"||r=="Friend"){
    hide();
    SecDialog *n=new SecDialog(nullptr,id);
    n->show();

}
    if(r=="teaf")
    {
        hide();
        foDialog *a=new foDialog(nullptr,id);
        a->show();
    }
}
