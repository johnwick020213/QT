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

void MainWindow::undo()
{
    s.top()->setText("");
    s.pop();
    flag=!flag;
}

bool MainWindow::win()
{
    ;
}

void MainWindow::printWinner()
{
    ;
}

void MainWindow::clear()
{
    while(!s.isEmpty())
    {
        undo();
    }
}

void MainWindow::game_judge()
{
    if(win())
    {
        printWinner();
        clear();
    }
}



void MainWindow::setButton(QPushButton* b)
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

void MainWindow::on_pushButton_clicked()//按钮（1，1）
{
    setButton(ui->pushButton);
    //game_judge();

}

void MainWindow::on_pushButton_2_clicked()//按钮（1，2）
{
    setButton(ui->pushButton_2);
}

void MainWindow::on_pushButton_3_clicked()//按钮（1，3）
{
    setButton(ui->pushButton_3);
}

void MainWindow::on_pushButton_5_clicked()//按钮（2，1）
{
    setButton(ui->pushButton_5);
}

void MainWindow::on_pushButton_6_clicked()//按钮（2，2）
{
    setButton(ui->pushButton_6);
}

void MainWindow::on_pushButton_4_clicked()//按钮（2，3）
{
    setButton(ui->pushButton_4);
}

void MainWindow::on_pushButton_9_clicked()//按钮（3，1）
{
    setButton(ui->pushButton_9);
}

void MainWindow::on_pushButton_7_clicked()//按钮（3，2）
{
    setButton(ui->pushButton_7);
}

void MainWindow::on_pushButton_8_clicked()//按钮（3，3）
{
    setButton(ui->pushButton_8);
}

void MainWindow::on_pushButton_11_clicked()
{
    if(!s.isEmpty())
    {
       undo();
    }
}

void MainWindow::on_pushButton_10_clicked()
{
    clear();
}
