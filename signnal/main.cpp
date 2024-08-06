#include "mainwindow.h"
#include "a.h"
#include <QApplication>
#include<QObject>
#include<QDebug>
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    A aa;
    B bb;
    C cc;
    QObject::connect(&aa,SIGNAL(signalA()),&bb,SLOT(slotB()));
    QObject::connect(&aa,SIGNAL(signalA()),&cc,SLOT(slotC()));
    QObject::connect(&bb,SIGNAL(signalB()),&cc,SLOT(slotC()));
    QObject::connect(&cc,SIGNAL(signalC()),&aa,SIGNAL(signalA()));

    emit aa.signalA();
    qDebug()<<"__________";
    emit bb.signalB();
    qDebug()<<"__________";
    emit cc.signalC();
    qDebug()<<"__________";
    return a.exec();
}
