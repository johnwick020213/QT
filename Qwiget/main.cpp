#include "mainwindow.h"

#include <QApplication>
#include<QWidget>
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    QWidget window1(nullptr,Qt::Window);
    window1.setWindowTitle("蓝色背景窗口");
    window1.resize(300,200);
    window1.setStyleSheet("background-color:blue;");

    QWidget windows2(nullptr,Qt::FramelessWindowHint);
    windows2.setWindowTitle("透明背景窗口");
    windows2.resize(300,200);
    windows2.setStyleSheet("background-color:rgba(255,255,255,0);");

    window1.show();
    windows2.show();

    return a.exec();
}
