#include "attendencedialog.h"
#include "ui_attendencedialog.h"
#include<QString>
#include<QDebug>
#include<bits/stdc++.h>
using namespace std;

attendenceDialog::attendenceDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::attendenceDialog)
{
    ui->setupUi(this);

    ui->checkBox->setText(r[0]);
    ui->checkBox_2->setText(r[1]);
    ui->checkBox_3->setText(r[2]);
    ui->checkBox_4->setText(r[3]);
    ui->checkBox_5->setText(r[4]);
    ui->checkBox_6->setText(r[5]);
    ui->checkBox_7->setText(r[6]);
    ui->checkBox_8->setText(r[7]);
    ui->checkBox_9->setText(r[8]);
    ui->checkBox_10->setText(r[9]);
    ui->checkBox_11->setText(r[10]);
    ui->checkBox_12->setText(r[11]);
    ui->checkBox_13->setText(r[12]);
    ui->checkBox_14->setText(r[13]);
    ui->checkBox_15->setText(r[14]);
    ui->checkBox_16->setText(r[15]);

}

attendenceDialog::~attendenceDialog()
{
    delete ui;
}

void attendenceDialog::on_checkBox_stateChanged(int arg1)
{
    if(arg1){
        a[0]++;
        b[0]=a[0];
    }
   /* QString r;

    ostringstream convert;

    convert << b[0];

    //r = convert.str();
    ui->lineEdit->setText('r');
    ui->label->setText('r');*/

}

void attendenceDialog::on_checkBox_2_stateChanged(int arg1)
{
    if(arg1){
        a[1]++;
        b[1]=a[1];
    }

}
void attendenceDialog::on_checkBox_3_stateChanged(int arg1)
{
    if(arg1){
        a[2]++;
        b[2]=a[2];
    }
}
void attendenceDialog::on_checkBox_4_stateChanged(int arg1)
{
    if(arg1){
        a[3]++;
        b[3]=a[3];
    }
}void attendenceDialog::on_checkBox_5_stateChanged(int arg1)
{
    if(arg1){
        a[4]++;
        b[4]=a[4];
    }
}void attendenceDialog::on_checkBox_6_stateChanged(int arg1)
{
    if(arg1){
        a[5]++;
        b[5]=a[5];
    }
}void attendenceDialog::on_checkBox_7_stateChanged(int arg1)
{
    if(arg1){
        a[6]++;
        b[6]=a[6];
    }
}void attendenceDialog::on_checkBox_8_stateChanged(int arg1)
{
    if(arg1){
        a[7]++;
        b[7]=a[7];
    }
}void attendenceDialog::on_checkBox_9_stateChanged(int arg1)
{
    if(arg1){
        a[8]++;
        b[8]=a[8];
    }
}void attendenceDialog::on_checkBox_10_stateChanged(int arg1)
{
    if(arg1){
        a[9]++;
        b[9]=a[9];
    }
}void attendenceDialog::on_checkBox_11_stateChanged(int arg1)
{
    if(arg1){
        a[10]++;
        b[10]=a[10];
    }
}void attendenceDialog::on_checkBox_12_stateChanged(int arg1)
{
    if(arg1){
        a[11]++;
        b[11]=a[11];
    }
}void attendenceDialog::on_checkBox_13_stateChanged(int arg1)
{
    if(arg1){
        a[12]++;
        b[12]=a[12];
    }
}void attendenceDialog::on_checkBox_14_stateChanged(int arg1)
{
    if(arg1){
        a[13]++;
        b[13]=a[13];
    }
}void attendenceDialog::on_checkBox_15_stateChanged(int arg1)
{
    if(arg1){
        a[14]++;
        b[14]=a[14];
    }
}void attendenceDialog::on_checkBox_16_stateChanged(int arg1)
{
    if(arg1){
        a[15]++;
        b[15]=a[15];
    }

}
//qDebug() <<b[0]<<b[1]<<b[2];
