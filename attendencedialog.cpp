#include "attendencedialog.h"
#include "ui_attendencedialog.h"
#include<QString>
#include<QDebug>
#include<QFile>
#include<QIODevice>
#include<QTextStream>
#include<fstream>
#include<QDateTime>
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
QString s = QString::number(b[0]);
ui->label->setText(s);

}

void attendenceDialog::on_checkBox_2_stateChanged(int arg1)
{
    if(arg1){
        a[1]++;
        b[1]=a[1];
    }
    QString s = QString::number(b[1]);
    ui->label_2->setText(s);

}
void attendenceDialog::on_checkBox_3_stateChanged(int arg1)
{
    if(arg1){
        a[2]++;
        b[2]=a[2];
    }
    QString s = QString::number(b[2]);
    ui->label_3->setText(s);
}
void attendenceDialog::on_checkBox_4_stateChanged(int arg1)
{
    if(arg1){
        a[3]++;
        b[3]=a[3];
    }
    QString s = QString::number(b[3]);
    ui->label_4->setText(s);
}
void attendenceDialog::on_checkBox_5_stateChanged(int arg1)
{
    if(arg1){
        a[4]++;
        b[4]=a[4];
    }
    QString s = QString::number(b[4]);
    ui->label_5->setText(s);
}
void attendenceDialog::on_checkBox_6_stateChanged(int arg1)
{
    if(arg1){
        a[5]++;
        b[5]=a[5];
    }
    QString s = QString::number(b[5]);
    ui->label_6->setText(s);
}
void attendenceDialog::on_checkBox_7_stateChanged(int arg1)
{
    if(arg1){
        a[6]++;
        b[6]=a[6];
    }
    QString s = QString::number(b[6]);
    ui->label_7->setText(s);
}
void attendenceDialog::on_checkBox_8_stateChanged(int arg1)
{
    if(arg1){
        a[7]++;
        b[7]=a[7];
    }
    QString s = QString::number(b[7]);
    ui->label_8->setText(s);
}
void attendenceDialog::on_checkBox_9_stateChanged(int arg1)
{
    if(arg1){
        a[8]++;
        b[8]=a[8];
    }
    QString s = QString::number(b[8]);
    ui->label_9->setText(s);
}
void attendenceDialog::on_checkBox_10_stateChanged(int arg1)
{
    if(arg1){
        a[9]++;
        b[9]=a[9];
    }
    QString s = QString::number(b[9]);
    ui->label_10->setText(s);
}
void attendenceDialog::on_checkBox_11_stateChanged(int arg1)
{
    if(arg1){
        a[10]++;
        b[10]=a[10];
    }
    QString s = QString::number(b[10]);
    ui->label_11->setText(s);
}
void attendenceDialog::on_checkBox_12_stateChanged(int arg1)
{
    if(arg1){
        a[11]++;
        b[11]=a[11];
    }
    QString s = QString::number(b[11]);
    ui->label_12->setText(s);
}
void attendenceDialog::on_checkBox_13_stateChanged(int arg1)
{
    if(arg1){
        a[12]++;
        b[12]=a[12];
    }
    QString s = QString::number(b[12]);
    ui->label_13->setText(s);
}
void attendenceDialog::on_checkBox_14_stateChanged(int arg1)
{
    if(arg1){
        a[13]++;
        b[13]=a[13];
    }
    QString s = QString::number(b[13]);
    ui->label_14->setText(s);
}
void attendenceDialog::on_checkBox_15_stateChanged(int arg1)
{
    if(arg1){
        a[14]++;
        b[14]=a[14];
    }
    QString s = QString::number(b[14]);
    ui->label_15->setText(s);
}
void attendenceDialog::on_checkBox_16_stateChanged(int arg1)
{
    if(arg1){
        a[15]++;
        b[15]=a[15];
    }
    QString s = QString::number(b[15]);
    ui->label_16->setText(s);

}
void attendenceDialog::on_checkBox_17_stateChanged(int arg1)
{
    if(arg1){
        a[0]++;
        b[0]=a[0];
    }
QString s = QString::number(b[0]);
ui->label->setText(s);

}

void attendenceDialog::on_checkBox_18_stateChanged(int arg1)
{
    if(arg1){
        a[1]++;
        b[1]=a[1];
    }
    QString s = QString::number(b[1]);
    ui->label_2->setText(s);

}
void attendenceDialog::on_checkBox_19_stateChanged(int arg1)
{
    if(arg1){
        a[2]++;
        b[2]=a[2];
    }
    QString s = QString::number(b[2]);
    ui->label_3->setText(s);
}
void attendenceDialog::on_checkBox_20_stateChanged(int arg1)
{
    if(arg1){
        a[3]++;
        b[3]=a[3];
    }
    QString s = QString::number(b[3]);
    ui->label_4->setText(s);
}
void attendenceDialog::on_checkBox_21_stateChanged(int arg1)
{
    if(arg1){
        a[4]++;
        b[4]=a[4];
    }
    QString s = QString::number(b[4]);
    ui->label_5->setText(s);
}
void attendenceDialog::on_checkBox_22_stateChanged(int arg1)
{
    if(arg1){
        a[5]++;
        b[5]=a[5];
    }
    QString s = QString::number(b[5]);
    ui->label_6->setText(s);
}
void attendenceDialog::on_checkBox_23_stateChanged(int arg1)
{
    if(arg1){
        a[6]++;
        b[6]=a[6];
    }
    QString s = QString::number(b[6]);
    ui->label_7->setText(s);
}
void attendenceDialog::on_checkBox_24_stateChanged(int arg1)
{
    if(arg1){
        a[7]++;
        b[7]=a[7];
    }
    QString s = QString::number(b[7]);
    ui->label_8->setText(s);
}
void attendenceDialog::on_checkBox_25_stateChanged(int arg1)
{
    if(arg1){
        a[8]++;
        b[8]=a[8];
    }
    QString s = QString::number(b[8]);
    ui->label_9->setText(s);
}
void attendenceDialog::on_checkBox_26_stateChanged(int arg1)
{
    if(arg1){
        a[9]++;
        b[9]=a[9];
    }
    QString s = QString::number(b[9]);
    ui->label_10->setText(s);
}
void attendenceDialog::on_checkBox_27_stateChanged(int arg1)
{
    if(arg1){
        a[10]++;
        b[10]=a[10];
    }
    QString s = QString::number(b[10]);
    ui->label_11->setText(s);
}
void attendenceDialog::on_checkBox_28_stateChanged(int arg1)
{
    if(arg1){
        a[11]++;
        b[11]=a[11];
    }
    QString s = QString::number(b[11]);
    ui->label_12->setText(s);
}
void attendenceDialog::on_checkBox_29_stateChanged(int arg1)
{
    if(arg1){
        a[12]++;
        b[12]=a[12];
    }
    QString s = QString::number(b[12]);
    ui->label_13->setText(s);
}
void attendenceDialog::on_checkBox_30_stateChanged(int arg1)
{
    if(arg1){
        a[13]++;
        b[13]=a[13];
    }
    QString s = QString::number(b[13]);
    ui->label_14->setText(s);
}
void attendenceDialog::on_checkBox_31_stateChanged(int arg1)
{
    if(arg1){
        a[14]++;
        b[14]=a[14];
    }
    QString s = QString::number(b[14]);
    ui->label_15->setText(s);
}
void attendenceDialog::on_checkBox_32_stateChanged(int arg1)
{
    if(arg1){
        a[15]++;
        b[15]=a[15];
    }
    QString s = QString::number(b[15]);
    ui->label_16->setText(s);

}
void attendenceDialog::on_checkBox_33_stateChanged(int arg1)
{
    if(arg1){
        a[0]++;
        b[0]=a[0];
    }
QString s = QString::number(b[0]);
ui->label->setText(s);

}

void attendenceDialog::on_checkBox_34_stateChanged(int arg1)
{
    if(arg1){
        a[1]++;
        b[1]=a[1];
    }
    QString s = QString::number(b[1]);
    ui->label_2->setText(s);

}
void attendenceDialog::on_checkBox_35_stateChanged(int arg1)
{
    if(arg1){
        a[2]++;
        b[2]=a[2];
    }
    QString s = QString::number(b[2]);
    ui->label_3->setText(s);
}
void attendenceDialog::on_checkBox_36_stateChanged(int arg1)
{
    if(arg1){
        a[3]++;
        b[3]=a[3];
    }
    QString s = QString::number(b[3]);
    ui->label_4->setText(s);
}
void attendenceDialog::on_checkBox_37_stateChanged(int arg1)
{
    if(arg1){
        a[4]++;
        b[4]=a[4];
    }
    QString s = QString::number(b[4]);
    ui->label_5->setText(s);
}
void attendenceDialog::on_checkBox_38_stateChanged(int arg1)
{
    if(arg1){
        a[5]++;
        b[5]=a[5];
    }
    QString s = QString::number(b[5]);
    ui->label_6->setText(s);
}
void attendenceDialog::on_checkBox_39_stateChanged(int arg1)
{
    if(arg1){
        a[6]++;
        b[6]=a[6];
    }
    QString s = QString::number(b[6]);
    ui->label_7->setText(s);
}
void attendenceDialog::on_checkBox_40_stateChanged(int arg1)
{
    if(arg1){
        a[7]++;
        b[7]=a[7];
    }
    QString s = QString::number(b[7]);
    ui->label_8->setText(s);
}
void attendenceDialog::on_checkBox_41_stateChanged(int arg1)
{
    if(arg1){
        a[8]++;
        b[8]=a[8];
    }
    QString s = QString::number(b[8]);
    ui->label_9->setText(s);
}
void attendenceDialog::on_checkBox_42_stateChanged(int arg1)
{
    if(arg1){
        a[9]++;
        b[9]=a[9];
    }
    QString s = QString::number(b[9]);
    ui->label_10->setText(s);
}
void attendenceDialog::on_checkBox_43_stateChanged(int arg1)
{
    if(arg1){
        a[10]++;
        b[10]=a[10];
    }
    QString s = QString::number(b[10]);
    ui->label_11->setText(s);
}
void attendenceDialog::on_checkBox_44_stateChanged(int arg1)
{
    if(arg1){
        a[11]++;
        b[11]=a[11];
    }
    QString s = QString::number(b[11]);
    ui->label_12->setText(s);
}
void attendenceDialog::on_checkBox_45_stateChanged(int arg1)
{
    if(arg1){
        a[12]++;
        b[12]=a[12];
    }
    QString s = QString::number(b[12]);
    ui->label_13->setText(s);
}
void attendenceDialog::on_checkBox_46_stateChanged(int arg1)
{
    if(arg1){
        a[13]++;
        b[13]=a[13];
    }
    QString s = QString::number(b[13]);
    ui->label_14->setText(s);
}
void attendenceDialog::on_checkBox_47_stateChanged(int arg1)
{
    if(arg1){
        a[14]++;
        b[14]=a[14];
    }
    QString s = QString::number(b[14]);
    ui->label_15->setText(s);
}
void attendenceDialog::on_checkBox_48_stateChanged(int arg1)
{
    if(arg1){
        a[15]++;
        b[15]=a[15];
    }
    QString s = QString::number(b[15]);
    ui->label_16->setText(s);

}

void attendenceDialog::on_ok_clicked()
{
    QTime time = QTime::currentTime();
    QString time_text= time.toString("hh : mm : ss");
    QDate date = QDate::currentDate();
    QString date_text=date.toString("dd : MM : yyyy");
    QString filename="H:/New folder/RS_project-master/attendence.csv";
    QFile file( filename );
    if ( file.open(QIODevice::ReadWrite | QIODevice::Text ) )
    {
        QTextStream stream( &file );
        stream << r[0]<<"," <<r[1]<<"," <<r[2] <<","<<r[3]<<"," <<r[4]<<"," <<r[5]<<"," <<r[6]<<"," <<r[7]<<","<<r[8]<<","<< r[9]<<","<<r[10]<<"," <<r[11]<<"," <<r[12] <<","<<r[13]<<"," <<r[14]<<"," <<r[15]<<","<<"Time"<<","<<"Date"<< endl;

    }
    file.close();
    if ( file.open(QIODevice::ReadWrite | QIODevice::Text | QIODevice::Append) )
    {
        QTextStream stream( &file );
        stream << b[0]<<"," <<b[1]<<"," <<b[2] <<","<<b[3]<<"," <<b[4]<<"," <<b[5]<<"," <<b[6]<<"," <<b[7]<<","<<b[8]<<","<< b[9]<<","<<b[10]<<"," <<b[11]<<"," <<b[12] <<","<<b[13]<<"," <<b[14]<<"," <<b[15]<<","<<time_text<<","<<date_text<< endl;
    }
    hide();
   /* if(file.exists()){
        ui->label->setText("mo");
        ofstream myfile;
          myfile.open ("H:/New folder/RS_project-master/attendence.txt");
          myfile << "Writing this to a file.\n";
          myfile.close();

    }*/


}
