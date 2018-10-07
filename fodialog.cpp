#include "fodialog.h"
#include "ui_fodialog.h"
#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "attendencedialog.h"
#include "ui_attendencedialog.h"
#include "adduser.h"
#include "message.h"

foDialog::foDialog(QWidget *parent,QString a) :
    QDialog(parent),
    ui(new Ui::foDialog)
{
    ui->setupUi(this);
    id=a;
}

foDialog::~foDialog()
{
    delete ui;
}

void foDialog::on_pushButton_3_clicked()
{

    hide();
    MainWindow *window = new MainWindow();
    window -> show();
}

void foDialog::on_attendence_clicked()
{
    hide();
    attendenceDialog *attend = new attendenceDialog;
    attend->show();
}

void foDialog::on_add_teacher_clicked()
{
    adduser *a=new adduser(nullptr,id,"Teacher");
    a->show();
}

void foDialog::on_watch_your_profile_clicked()
{
    message *a=new message(nullptr,id,"teaf");
    a->show();
}
