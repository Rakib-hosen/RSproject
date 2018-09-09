#ifndef DIALOG3_H
#define DIALOG3_H

#include <QDialog>

namespace Ui {
class Dialog3;
}

class Dialog3 : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog3(QWidget *parent = nullptr);
    ~Dialog3();

private slots:
    void on_d3_previous_clicked();

    void on_d3_next_clicked();

    void on_d3_skip_clicked();

private:
    Ui::Dialog3 *ui;
};

#endif // DIALOG3_H
