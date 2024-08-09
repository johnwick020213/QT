#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    this->resize(800,600);
    c=new C(this);
    c->move(50,50);
    c->setObjectName("C");
    c->resize(700,500);
    c->setFrameStyle(QFrame::Plain|QFrame::Panel);
    c->setLineWidth(2);
    b = new B(c);
    b->move(50,50);
    b->setObjectName("B");
    b->resize(600,400);
    b->setFrameStyle(QFrame::Plain|QFrame::Panel);
    b->setLineWidth(2);
    a = new A(b);
    a->move(50,50);
    a->setObjectName("A");
    a->resize(500,300);
    a->setFrameStyle(QFrame::Plain|QFrame::Panel);
    a->setLineWidth(2);
    filter = new myfilter(this);
    a->installEventFilter(filter);
    b->installEventFilter(filter);
    c->installEventFilter(filter);
}

MainWindow::~MainWindow()
{
    delete ui;
}

