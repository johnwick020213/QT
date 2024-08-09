#ifndef A_H
#define A_H

#include <QObject>
#include <QApplication>
#include <QPushButton>
#include <QEvent>
#include <QDebug>
#include<QLabel>
#include<QWidget>
#include<QMouseEvent>
class A:public QLabel
{
    Q_OBJECT
public:
    explicit A(QWidget *parent=nullptr);
    bool event(QEvent *ev) override{
        if(ev->type()==QEvent::MouseButtonPress){
            qDebug()<<"event"<<objectName();
        }
        return QLabel::event(ev);
    }

    void mousePressEvent(QMouseEvent *ev) override{
        qDebug()<<"event handler"<<objectName();
        ev->ignore();
    }
signals:
};
class B:public QLabel
{
    Q_OBJECT
public:
    explicit B(QWidget *parent=nullptr);
    bool event(QEvent *ev) override{
        if(ev->type()==QEvent::MouseButtonPress){
            qDebug()<<"event"<<objectName();
            return true;
        }
        return QLabel::event(ev);
    }

    void mousePressEvent(QMouseEvent *ev) override{
        qDebug()<<"event handler"<<objectName();
        ev->ignore();
    }
signals:
};
class C:public QLabel
{
    Q_OBJECT
public:
    explicit C(QWidget *parent=nullptr);
    bool event(QEvent *ev) override{
        if(ev->type()==QEvent::MouseButtonPress){
            qDebug()<<"event"<<objectName();
        }
        return QLabel::event(ev);
    }

    void mousePressEvent(QMouseEvent *ev) override{
        qDebug()<<"event handler"<<objectName();
        ev->ignore();
    }
signals:
};

#endif // A_H
