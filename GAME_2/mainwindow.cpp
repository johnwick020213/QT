#include "mainwindow.h"
#include "ui_mainwindow.h"
#include<QPixmap>
#include<cstdlib>
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
    ,_clicked_times(0)
{
    ui->setupUi(this);

    mybtn=new MyPushButton(this);
    mybtn->resize(184,127);
    QPixmap pixmap(":/new/prefix1/Snipaste_2024-08-08_21-54-28.png");
    mybtn->setPixmap(pixmap);

    QObject::connect(mybtn,&MyPushButton::mySignal,this,&MainWindow::add_times);
}

void MainWindow::add_times()
{
    ++_clicked_times;
    this->setWindowTitle(QString("分数：%1").arg(_clicked_times));
    ui->label->setText(QString("分数：%1").arg(_clicked_times));
    int _x=rand()%416;
    int _y=rand()%273;
    mybtn->move(_x,_y);
}

MainWindow::~MainWindow()
{
    delete ui;
}
