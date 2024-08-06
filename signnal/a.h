#ifndef A_H
#define A_H

#include <QObject>

class A : public QObject
{
    Q_OBJECT
public:
    explicit A(QObject *parent = nullptr);

signals:
    void signalA();
public slots:
    void slotA();

};

class B : public QObject
{
    Q_OBJECT
public:
    explicit B(QObject *parent = nullptr);

signals:
    void signalB();

public slots:
    void slotB();
};

class C: public QObject
{
    Q_OBJECT
public:
    explicit C(QObject *parent = nullptr);

signals:
    void signalC();

public slots:
    void slotC();


};

#endif // A_H
