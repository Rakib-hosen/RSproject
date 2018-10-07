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
    QString id;
    explicit foDialog(QWidget *parent = nullptr,QString a="");
    ~foDialog();

private slots:
    void on_pushButton_3_clicked();

    void on_attendence_clicked();

    void on_add_teacher_clicked();

    void on_watch_your_profile_clicked();

private:
    Ui::foDialog *ui;
};

#endif // FODIALOG_H
