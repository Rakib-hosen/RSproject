#include "addmindialog.h"
#include "ui_addmindialog.h"
#include<QDebug>
#include<QDateTime>



addminDialog::addminDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::addminDialog)
{
    ui->setupUi(this);
}

addminDialog::~addminDialog()
{
    delete ui;
}

