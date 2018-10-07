#ifndef ADDUSER_H
#define ADDUSER_H
#include<QString>

#include <QDialog>

namespace Ui {
class adduser;
}

class adduser : public QDialog
{
    Q_OBJECT

public:
    QString user;
    QString id;
    QString ad;
    int b=1;
    explicit adduser(QWidget *parent = nullptr,QString a="",QString b="",QString c="");
    ~adduser();

private slots:
    void on_pushButton_sign_up_clicked();

    void on_pushButton_back_clicked();

private:
    Ui::adduser *ui;
};

#endif // ADDUSER_H
