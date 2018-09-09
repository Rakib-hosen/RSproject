#include "mainwindow.h"
#include <QApplication>
#include<QSplashScreen>
#include<QTimer>
#include "demo.h"
int main(int argc, char *argv[])
{

    QApplication ab(argc, argv);
    QSplashScreen *r=new QSplashScreen;
    r->setPixmap(QPixmap(":/images/rsz_picsart_08-29-015850.jpg"));
    r->show();
    MainWindow w;
     QTimer::singleShot(5000,r,SLOT(close()));
    QTimer::singleShot(5000,&w,SLOT(show()));
    //w.show();

    return ab.exec();
}
