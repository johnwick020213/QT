#ifndef MYFILTER_H
#define MYFILTER_H

#include <QObject>
#include<QEvent>
#include<QDebug>
class myfilter : public QObject
{
    Q_OBJECT
public:
    explicit myfilter(QObject *parent = nullptr);
    bool eventFilter(QObject *watched, QEvent *event) override{
        if(event->type()==QEvent::MouseButtonPress){
            qDebug()<<watched<<"filter";
        }
        return false;
    }

signals:

};

#endif // MYFILTER_H
