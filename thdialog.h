#ifndef THDIALOG_H
#define THDIALOG_H

#include <QDialog>
#include<QString>

namespace Ui {
class thDialog;
}

class thDialog : public QDialog
{
    Q_OBJECT

public:
    QString c;
    explicit thDialog(QWidget *parent = nullptr,QString t="");
    ~thDialog();

private slots:
    void on_pushButton_ok_clicked();

    void on_pushButton_logout_clicked();
    void on_pushButton_clicked();

private:
    Ui::thDialog *ui;
};

#endif // THDIALOG_H
