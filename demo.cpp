#include "demo.h"
#include "ui_demo.h"

Demo::Demo(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Demo)
{
    ui->setupUi(this);
}

Demo::~Demo()
{
    delete ui;
}
