#ifndef USERNAME_H
#define USERNAME_H

#include <QDialog>

namespace Ui {
class username;
}

class username : public QDialog
{
    Q_OBJECT

public:
    explicit username(QWidget *parent = nullptr);
    ~username();

private:
    Ui::username *ui;
};

#endif // USERNAME_H
