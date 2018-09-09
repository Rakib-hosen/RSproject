#include "fodialog.h"
#include "ui_fodialog.h"
#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "attendencedialog.h"
#include "ui_attendencedialog.h"

foDialog::foDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::foDialog)
{
    ui->setupUi(this);
}

foDialog::~foDialog()
{
    delete ui;
}

void foDialog::on_pushButton_3_clicked()
{

    MainWindow *window = new MainWindow();
    window -> show();
}

void foDialog::on_attendence_clicked()
{
    attendenceDialog *attend = new attendenceDialog;
    attend->show();
}
