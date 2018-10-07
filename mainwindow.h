#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include"secdialog.h"
#include"fodialog.h"
#include"addmindialog.h"
#include"advisedialog.h"
#include<QString>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    int k=1;
    int i=0;
    QString name[100];
    QString id[100];
    QString password[100];
    QString department[100];
    QString semester[100];
    QString section[100];
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:

   void on_pushButton_close_clicked();
    void on_pushButton_login_clicked();
    void on_actionCSE1st_triggered();

    void on_actionCSE2nd_triggered();

    void on_actionCSE3rd_triggered();

    void on_actionCSE4th_triggered();

    void on_actionCSE5th_triggered();

    void on_actionCSE6th_triggered();
    void on_actionAll_book_triggered();

    void on_actiongo_to_developer_website_triggered();

    void on_actiongoto_triggered();

    void on_tutorial_clicked();

    void on_add_student_clicked();

private:
    Ui::MainWindow *ui;
   SecDialog *secdialog;
};

#endif // MAINWINDOW_H
