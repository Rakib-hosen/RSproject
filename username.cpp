#include "username.h"
#include "ui_username.h"

username::username(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::username)
{
    ui->setupUi(this);
}

username::~username()
{
    delete ui;
}
