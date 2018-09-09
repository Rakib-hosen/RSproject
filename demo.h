#ifndef DEMO_H
#define DEMO_H

#include <QDialog>

namespace Ui {
class Demo;
}

class Demo : public QDialog
{
    Q_OBJECT

public:
    explicit Demo(QWidget *parent = nullptr);
    ~Demo();

private:
    Ui::Demo *ui;
};

#endif // DEMO_H
