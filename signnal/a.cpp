#include "a.h"
#include<QDebug>

A::A(QObject *parent) : QObject(parent)
{

}

B::B(QObject *parent) : QObject(parent)
{

}

C::C(QObject *parent) : QObject(parent)
{

}

void A::slotA()
{
    qDebug()<<"A";
}

void B::slotB()
{
    qDebug()<<"B";
}

void C::slotC()
{
    qDebug()<<"C";
}
