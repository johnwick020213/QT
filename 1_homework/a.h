#ifndef A_H
#define A_H

#include <QObject>
#include <QApplication>
#include <QPushButton>
#include <QEvent>
#include <QDebug>


class C : public QWidget {
    Q_OBJECT
public:
    C(QWidget *parent = nullptr) : QWidget(parent) {}
    // 可以在这里添加额外的处理逻辑
};

class B : public QWidget {
    Q_OBJECT
public:
    B(QWidget *parent = nullptr) : QWidget(parent) {}

    // 重写事件过滤器
    bool eventFilter(QObject *obj, QEvent *event) override {
        if (event->type() == QEvent::MouseButtonPress) {
            qDebug() << "B's eventFilter";
        }
        return QWidget::eventFilter(obj, event);
    }

    // 重写事件处理函数
    void mousePressEvent(QMouseEvent *event) override {
        qDebug() << "B's mousePressEvent";
        QWidget::mousePressEvent(event);
    }
};

class A : public QWidget {
    Q_OBJECT
public:
    A(QWidget *parent = nullptr) : QWidget(parent) {
        // 安装事件过滤器
        installEventFilter(this->parentWidget());
    }

    // 重写事件过滤器
    bool eventFilter(QObject *obj, QEvent *event) override {
        if (event->type() == QEvent::MouseButtonPress) {
            qDebug() << "A's eventFilter";
        }
        return QWidget::eventFilter(obj, event);
    }

    // 重写事件处理函数
    void mousePressEvent(QMouseEvent *event) override {
        qDebug() << "A's mousePressEvent";
        QWidget::mousePressEvent(event);
    }

    // 处理事件处理函数
    void eventHandler() {
        qDebug() << "A's eventHandler";
    }
};


#endif // A_H
