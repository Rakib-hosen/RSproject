#ifndef ADDMINDIALOG_H
#define ADDMINDIALOG_H

#include <QDialog>

namespace Ui {
class addminDialog;
}

class addminDialog : public QDialog
{
    Q_OBJECT

public:
    QString filename;
    explicit addminDialog(QWidget *parent = nullptr);
    ~addminDialog();

private slots:
    void on_pushButton_4_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_6_clicked();

    void on_pushButton_clicked();

    void on_pushButton_5_clicked();

private:
    Ui::addminDialog *ui;
};

#endif // ADDMINDIALOG_H
