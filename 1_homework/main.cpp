#include "mainwindow.h"
#include"a.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication aa(argc, argv);

    C *c = new C();
       B *b = new B(c);
       A *a = new A(b);

       // 设置布局
       b->setGeometry(0, 0, 400, 400);
       a->setGeometry(50, 50, 100, 100);
       b->show();
       a->show();

    return aa.exec();
}
