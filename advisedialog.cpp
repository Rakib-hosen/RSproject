#include "advisedialog.h"
#include "ui_advisedialog.h"

adviseDialog::adviseDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::adviseDialog)
{
    ui->setupUi(this);
}

adviseDialog::~adviseDialog()
{
    delete ui;
}
