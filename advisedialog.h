#ifndef ADVISEDIALOG_H
#define ADVISEDIALOG_H

#include <QDialog>

namespace Ui {
class adviseDialog;
}

class adviseDialog : public QDialog
{
    Q_OBJECT

public:
    explicit adviseDialog(QWidget *parent = nullptr);
    ~adviseDialog();

private:
    Ui::adviseDialog *ui;
};

#endif // ADVISEDIALOG_H
