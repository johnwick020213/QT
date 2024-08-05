#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::draw_O(QPushButton*Button)
{
    Button->setText("O");
}

void MainWindow::draw_X(QPushButton* Button)
{
    Button->setText("X");
}

static bool flag=true;
QStack<QPair<QPushButton*,int*>> s;

void MainWindow::setButton(QPushButton* b,int* state)
{
    if(*state==0)
    {
        if(flag==true)
        {
            draw_O(b);
            flag=0;
            *state=1;
            s.push(qMakePair(b,state));
        }
        else
        {
            draw_X(b);
            flag=1;
            *state=1;
            s.push(qMakePair(b,state));
        }
    }
}

void MainWindow::on_pushButton_clicked()
{
    static int state=0;
    setButton(ui->pushButton,&state);

}

void MainWindow::on_pushButton_11_clicked()
{
    if(!s.isEmpty())
    {
        s.top().first->setText(" ");
        *s.top().second=0;
        s.pop();
        flag=!flag;
    }
}

void MainWindow::on_pushButton_2_clicked()
{
    static int state2=0;
    setButton(ui->pushButton_2,&state2);
}

void MainWindow::on_pushButton_3_clicked()
{
     static int state3=0;
    setButton(ui->pushButton_3,&state3);
}

void MainWindow::on_pushButton_5_clicked()
{
     static int state5=0;
    setButton(ui->pushButton_5,&state5);
}

void MainWindow::on_pushButton_6_clicked()
{
     static int state6=0;
    setButton(ui->pushButton_6,&state6);
}

void MainWindow::on_pushButton_4_clicked()
{
     static int state4=0;
    setButton(ui->pushButton_4,&state4);
}

void MainWindow::on_pushButton_9_clicked()
{
     static int state9=0;
    setButton(ui->pushButton_9,&state9);
}

void MainWindow::on_pushButton_7_clicked()
{
     static int state7=0;
    setButton(ui->pushButton_7,&state7);
}

void MainWindow::on_pushButton_8_clicked()
{
     static int state8=0;
    setButton(ui->pushButton_8,&state8);
}

void MainWindow::on_pushButton_10_clicked()
{
    while(!s.isEmpty())
    {
        s.top().first->setText(" ");
        *s.top().second=0;
        s.pop();
        flag=!flag;
    }
}
