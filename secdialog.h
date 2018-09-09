#ifndef SECDIALOG_H
#define SECDIALOG_H

#include <QDialog>

namespace Ui {
class SecDialog;
}

class SecDialog : public QDialog
{
    Q_OBJECT

public:
    explicit SecDialog(QWidget *parent = nullptr);
    ~SecDialog();

private slots:
    void on_pushButton_cnote_clicked();

    void on_pushButton_lopgout_clicked();

    void on_pushButton_sylabus_clicked();

    void on_pushButton_clicked();

    void on_pushButton_notice_clicked();

    void on_pushButton_classroutine_clicked();

    void on_tutorial_clicked();

    void on_bus_schedule_clicked();

    void on_iiuc_campus_map_clicked();

    void on_share_your_assignment_clicked();

    void on_contact_your_teacher_clicked();

    void on_watch_your_student_profile_clicked();

    void on_devolop_your_programming_skill_clicked();

    void on_talk_to_ypur_friend_clicked();

    void on_advice_us_clicked();

    void on_adviser_clicked();

private:
    Ui::SecDialog *ui;
};

#endif // SECDIALOG_H
