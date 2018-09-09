#ifndef ATTENDENCEDIALOG_H
#define ATTENDENCEDIALOG_H

#include <QDialog>
#include<QString>

namespace Ui {
class attendenceDialog;
}

class attendenceDialog : public QDialog
{
    Q_OBJECT

public:
    explicit attendenceDialog(QWidget *parent = nullptr);
    ~attendenceDialog();
    QString  r[20]={"rakib",
            "sakil",
            "sakib",
            "shuvo",
            "halim",
            "robin",
            "seam",
            "mukul",
            "fahim",
            "munna",
            "tamim",
            "tanim",
            "abid",
            "habib",
            "tomal",
            "tanvir",
             "asif",
             "kaiser"
           };
    int a[20]={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
    int b[20]={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};

private slots:
    void on_checkBox_stateChanged(int arg1);

    void on_checkBox_2_stateChanged(int arg1);

    void on_checkBox_3_stateChanged(int arg1);

    void on_checkBox_4_stateChanged(int arg1);

    void on_checkBox_5_stateChanged(int arg1);

    void on_checkBox_6_stateChanged(int arg1);

    void on_checkBox_7_stateChanged(int arg1);

    void on_checkBox_8_stateChanged(int arg1);

    void on_checkBox_9_stateChanged(int arg1);

    void on_checkBox_10_stateChanged(int arg1);

    void on_checkBox_11_stateChanged(int arg1);

    void on_checkBox_12_stateChanged(int arg1);

    void on_checkBox_13_stateChanged(int arg1);

    void on_checkBox_14_stateChanged(int arg1);

    void on_checkBox_15_stateChanged(int arg1);

    void on_checkBox_16_stateChanged(int arg1);




private:
    Ui::attendenceDialog *ui;
};

#endif // ATTENDENCEDIALOG_H
