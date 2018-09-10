#include "thdialog.h"
#include "ui_thdialog.h"
#include "mainwindow.h"
#include "ui_mainwindow.h"
#include<QMessageBox>
#include "sylabusdialog.h"
#include "ui_sylabusdialog.h"
#include "secdialog.h"
#include "ui_secdialog.h"


thDialog::thDialog(QWidget *parent,QString t) :
    QDialog(parent),
    ui(new Ui::thDialog)
{
    ui->setupUi(this);
    c=t;
}

thDialog::~thDialog()
{
    delete ui;
}

void thDialog::on_pushButton_ok_clicked()
{
    QString department=ui->lineEdit->text();
    QString semester=ui->lineEdit_2->text();

    sylabusDialog *sly =new sylabusDialog(nullptr,department,semester,c);
    sly->show();

}

void thDialog::on_pushButton_logout_clicked()
{

      MainWindow *window = new MainWindow();
      window -> show();
}

void thDialog::on_pushButton_clicked()
{

    hide();
    SecDialog *ab= new SecDialog(this);
    ab ->show();
}
