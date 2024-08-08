#ifndef MYPUSHBUTTON_H
#define MYPUSHBUTTON_H

#include<QLabel>

class MyPushButton:public QLabel
{
    Q_OBJECT
public:
    explicit MyPushButton(QWidget *parent=nullptr);
    void mouseReleaseEvent(QMouseEvent *ev) override{
        emit mySignal();
    }

signals:
    void mySignal();
};

#endif // MYPUSHBUTTON_H
