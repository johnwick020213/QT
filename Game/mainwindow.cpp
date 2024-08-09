#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    buttonList << ui->pushButton
               << ui->pushButton_2
               << ui->pushButton_3
               << ui->pushButton_4
               << ui->pushButton_5
               << ui->pushButton_6
               << ui->pushButton_7
               << ui->pushButton_8
               << ui->pushButton_9;

    QObject::connect(ui->pushButton,&QPushButton::clicked,this,&MainWindow::do_pushButton_clicked);
    QObject::connect(ui->pushButton_2,&QPushButton::clicked,this,&MainWindow::do_pushButton_clicked);
    QObject::connect(ui->pushButton_3,&QPushButton::clicked,this,&MainWindow::do_pushButton_clicked);
    QObject::connect(ui->pushButton_4,&QPushButton::clicked,this,&MainWindow::do_pushButton_clicked);
    QObject::connect(ui->pushButton_5,&QPushButton::clicked,this,&MainWindow::do_pushButton_clicked);
    QObject::connect(ui->pushButton_6,&QPushButton::clicked,this,&MainWindow::do_pushButton_clicked);
    QObject::connect(ui->pushButton_7,&QPushButton::clicked,this,&MainWindow::do_pushButton_clicked);
    QObject::connect(ui->pushButton_8,&QPushButton::clicked,this,&MainWindow::do_pushButton_clicked);
    QObject::connect(ui->pushButton_9,&QPushButton::clicked,this,&MainWindow::do_pushButton_clicked);

}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::draw_O(QPushButton*Button)//画O
{
    Button->setText("O");
}

void MainWindow::draw_X(QPushButton* Button)//画X
{
    Button->setText("X");
}

void MainWindow::undo()//撤销
{
    s.top()->setText("");
    s.pop();
    flag=!flag;
}

bool same(QPushButton* b1,QPushButton*b2,QPushButton*b3)//判断按钮文本是否相同
{
    if(b1->text()==b2->text()&&b1->text()==b3->text())
    {
        if(b1->text().isEmpty())
        {
            return false;
        }
        return true;
    }
    else
    {
        return false;
    }
}

bool MainWindow::win()//判断胜负
{
    if(same(ui->pushButton,ui->pushButton_2,ui->pushButton_3)|
       same(ui->pushButton_5,ui->pushButton_6,ui->pushButton_4)|
       same(ui->pushButton_9,ui->pushButton_7,ui->pushButton_8)|
       same(ui->pushButton,ui->pushButton_5,ui->pushButton_9)|
       same(ui->pushButton_2,ui->pushButton_6,ui->pushButton_7)|
       same(ui->pushButton_3,ui->pushButton_4,ui->pushButton_8)|
       same(ui->pushButton,ui->pushButton_6,ui->pushButton_8)|
       same(ui->pushButton_9,ui->pushButton_6,ui->pushButton_3))
    {
        return true;
    }
    return false;
}

void MainWindow::printWinner()//显示胜者
{
    char win;
    if(flag==true) win='X';
    else win='O';
    ui->label->setText(QString("winner:%1").arg(win));
}

void MainWindow::clear()//清除函数
{
    while(!s.isEmpty())
    {
        undo();
    }
}

void MainWindow::game_judge()//游戏裁判
{
    if(win())
    {
        printWinner();
        clear();
    }
}



void MainWindow::setButton(QPushButton* b)//九个格子的按钮操作
{
    if(b->text().isEmpty())
    {
        if(flag==true)
        {
            draw_O(b);
            flag=0;
            s.push(b);
        }
        else
        {
            draw_X(b);
            flag=1;
            s.push(b);
        }
    }
}

void MainWindow::do_pushButton_clicked()//九个格子共同的槽函数
{
     QPushButton * pushButton = qobject_cast<QPushButton *>(sender());
     setButton(pushButton);
     game_judge();

}

void MainWindow::on_pushButton_11_clicked()//撤销按钮
{
    if(!s.isEmpty())
    {
       undo();
    }
}

void MainWindow::on_pushButton_10_clicked()//清除按钮
{
    clear();
}
