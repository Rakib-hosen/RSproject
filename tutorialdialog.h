#ifndef TUTORIALDIALOG_H
#define TUTORIALDIALOG_H

#include <QDialog>

namespace Ui {
class tutorialDialog;
}

class tutorialDialog : public QDialog
{
    Q_OBJECT

public:
    int i=0;
    explicit tutorialDialog(QWidget *parent = nullptr);
    ~tutorialDialog();


private slots:
    void on_pushButton_2_clicked();

    void on_pushButton_clicked();

    void on_pushButton_3_clicked();

private:
    Ui::tutorialDialog *ui;
};

#endif // TUTORIALDIALOG_H
