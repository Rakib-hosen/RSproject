#ifndef SYLABUSDIALOG_H
#define SYLABUSDIALOG_H

#include <QDialog>
#include<QString>

namespace Ui {
class sylabusDialog;
}

class sylabusDialog : public QDialog
{
    Q_OBJECT

public:
    QString k;
    QString l;

    int i=0;
    QString a;
    QString s[3]={":/images/IMG_20180825_133444.jpg",":/images/IMG_20180829_022253.jpg",":/images/rsz_picsart_08-29-015850.jpg"};

    explicit sylabusDialog(QWidget *parent = nullptr,QString d="",QString p="",QString t="");

    ~sylabusDialog();

private slots:
    void on_pushButton_2_clicked();

    void on_pushButton_clicked();

    void on_pushButton_3_clicked();

private:
    Ui::sylabusDialog *ui;
};

#endif // SYLABUSDIALOG_H
