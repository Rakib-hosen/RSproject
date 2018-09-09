#ifndef FODIALOG_H
#define FODIALOG_H

#include <QDialog>

namespace Ui {
class foDialog;
}

class foDialog : public QDialog
{
    Q_OBJECT

public:
    explicit foDialog(QWidget *parent = nullptr);
    ~foDialog();

private slots:
    void on_pushButton_3_clicked();

    void on_attendence_clicked();

private:
    Ui::foDialog *ui;
};

#endif // FODIALOG_H
