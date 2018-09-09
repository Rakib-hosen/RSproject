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
    explicit addminDialog(QWidget *parent = nullptr);
    ~addminDialog();

private:
    Ui::addminDialog *ui;
};

#endif // ADDMINDIALOG_H
