#include "adduser.h"
#include "ui_adduser.h"
#include<QString>
#include<QFile>
#include<QTextStream>
#include "mainwindow.h"
#include<QMessageBox>
#include<QDebug>


adduser::adduser(QWidget *parent,QString a,QString b,QString c) :
    QDialog(parent),
    ui(new Ui::adduser)
{
    ui->setupUi(this);
    user=a;
    id=b;
    ad=c;
    if(user=="Teacher"){
    ui->label_6->setText("Subject");
    ui->label_5->setText("Position");
    }
}

adduser::~adduser()
{
    delete ui;
}

void adduser::on_pushButton_sign_up_clicked()
{
if(user=="Student"){
    QString name=ui->lineEdit->text();
    QString id=ui->lineEdit_2->text();
    QString password=ui->lineEdit_3->text();
    QString department=ui->lineEdit_4->text();
    QString semester=ui->lineEdit_5->text();
    QString section=ui->lineEdit_6->text();
    b=1;
    if(password.length()<8)
    {

        QMessageBox::warning(this,"Weak Password","This password is too short.\nPlease give password more than 8 charecter");
        b=0;
    }
    if(id.length()!=7)
    {
        QMessageBox::warning(this,"Invalid Id","Give the correct Id");
        b=0;
    }
    if(name.length()==0||department.length()==0||semester.length()==0||section.length()==0)
    {
        QMessageBox::warning(this,"Invalid input","You have to fill all the box");
        b=0;
    }
    if(b==1)
    {
        hide();
    QString filename="H:/New folder/RS_project-master/student.txt";
    QFile file( filename );
    if ( file.open(QIODevice::ReadWrite | QIODevice::Text | QIODevice::Append) )
    {
        QTextStream stream( &file );
        stream <<id<<" "<<password<<endl<<endl;
    }
    file.close();
    filename="H:/New folder/RS_project-master/Student/"+id+".txt";
    QFile file2( filename );
    if ( file2.open(QIODevice::WriteOnly | QIODevice::Text ) )
    {
        QTextStream stream( &file2 );
        stream  <<name<<endl<<id<<endl<<department<<endl<<semester<<endl<<section<<endl<<endl;
    }
    file2.close();
    MainWindow *n=new MainWindow;
    n->show();
}
}
if(user=="Teacher"){
    QString name=ui->lineEdit->text();
    QString id=ui->lineEdit_2->text();
    QString password=ui->lineEdit_3->text();
    QString department=ui->lineEdit_4->text();
    QString position=ui->lineEdit_5->text();
    QString subject=ui->lineEdit_6->text();

    b=1;
    if(password.length()<8)
    {

        QMessageBox::warning(this,"Weak Password","This password is too short.\nPlease give password more than 8 charecter");
        b=0;
    }
    if(id.length()!=7)
    {
        QMessageBox::warning(this,"Invalid Id","Give the correct Id");
        b=0;
    }
    if(name.length()==0||department.length()==0||position.length()==0||subject.length())
    {
        QMessageBox::warning(this,"Invalid input","You have to fill all the box");
        b=0;
    }
    if(b==1)
    {
        hide();
    QString filename="H:/New folder/RS_project-master/teacher.txt";
    QFile file( filename );
    if ( file.open(QIODevice::ReadWrite | QIODevice::Text | QIODevice::Append) )
    {
        QTextStream stream( &file );
       stream <<id<<" "<<password<<endl<<endl;
    }
    file.close();
    filename="H:/New folder/RS_project-master/Teacher/"+id+".txt";
    QFile file2( filename );
    if ( file2.open(QIODevice::WriteOnly | QIODevice::Text ) )
    {
        QTextStream stream( &file2 );
         stream <<id<<" "<<password<<" "<<department<<" "<<position<<" "<<subject<<" "<<name<<endl<<endl;
    }
    file2.close();
    MainWindow *n=new MainWindow;
    n->show();
}
}

}

void adduser::on_pushButton_back_clicked()
{
    if(ad=="admin"){
        hide();
        addminDialog *a=new addminDialog;
        a->show();
    }
    else{

        if(user=="Teacher"){
            hide();
    foDialog *a=new foDialog(nullptr,id);
    a->show();
        }
        else{
            hide();
            MainWindow *a=new MainWindow;
            a->show();
        }
    }
}
