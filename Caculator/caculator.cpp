#include "caculator.h"
#include "ui_caculator.h"
#include<QString>

Caculator::Caculator(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Caculator)
{
    ui->setupUi(this);
}

Caculator::~Caculator()
{
    delete ui;
}


void Caculator::on_pushButton_2_clicked()
{
    QString text = ui->label->text();

    if(text=="output")
    {
         ui->label->setText(" ");
         QString buff=ui->label->text();
          buff.append("1");
           ui->label->setText(buff);
    }
    else
    {
        QString buff=ui->label->text();
         buff.append("1");
         ui->label->setText(buff);
    }
}

void Caculator::on_pushButton_3_clicked()
{
    QString text = ui->label->text();

    if(text=="output")
    {
         ui->label->setText(" ");
         QString buff=ui->label->text();
          buff.append("2");
           ui->label->setText(buff);
    }
    else
    {
        QString buff=ui->label->text();
         buff.append("2");
         ui->label->setText(buff);
    }
}

void Caculator::on_pushButton_4_clicked()
{
    QString text = ui->label->text();

    if(text=="output")
    {
         ui->label->setText(" ");
         QString buff=ui->label->text();
          buff.append("3");
           ui->label->setText(buff);
    }
    else
    {
        QString buff=ui->label->text();
         buff.append("3");
         ui->label->setText(buff);
    }
}

void Caculator::on_pushButton_6_clicked()
{
    QString text = ui->label->text();

    if(text=="output")
    {
         ui->label->setText(" ");
         QString buff=ui->label->text();
          buff.append("4");
           ui->label->setText(buff);
    }
    else
    {
        QString buff=ui->label->text();
         buff.append("4");
         ui->label->setText(buff);
    }
}

void Caculator::on_pushButton_8_clicked()
{
    QString text = ui->label->text();

    if(text=="output")
    {
         ui->label->setText(" ");
         QString buff=ui->label->text();
          buff.append("5");
           ui->label->setText(buff);
    }
    else
    {
        QString buff=ui->label->text();
         buff.append("5");
         ui->label->setText(buff);
    }
}

void Caculator::on_pushButton_5_clicked()
{
    QString text = ui->label->text();

    if(text=="output")
    {
         ui->label->setText(" ");
         QString buff=ui->label->text();
          buff.append("6");
           ui->label->setText(buff);
    }
    else
    {
        QString buff=ui->label->text();
         buff.append("6");
         ui->label->setText(buff);
    }
}

void Caculator::on_pushButton_12_clicked()
{
    QString text = ui->label->text();

    if(text=="output")
    {
         ui->label->setText(" ");
         QString buff=ui->label->text();
          buff.append("7");
           ui->label->setText(buff);
    }
    else
    {
        QString buff=ui->label->text();
         buff.append("7");
         ui->label->setText(buff);
    }
}

void Caculator::on_pushButton_9_clicked()
{
    QString text = ui->label->text();

    if(text=="output")
    {
         ui->label->setText(" ");
         QString buff=ui->label->text();
          buff.append("8");
           ui->label->setText(buff);
    }
    else
    {
        QString buff=ui->label->text();
         buff.append("8");
         ui->label->setText(buff);
    }
}

void Caculator::on_pushButton_11_clicked()
{
    QString text = ui->label->text();

    if(text=="output")
    {
         ui->label->setText(" ");
         QString buff=ui->label->text();
          buff.append("9");
           ui->label->setText(buff);
    }
    else
    {
        QString buff=ui->label->text();
         buff.append("9");
         ui->label->setText(buff);
    }
}

void Caculator::on_pushButton_15_clicked()
{
    QString text = ui->label->text();

    if(text=="output")
    {
         ui->label->setText(" ");
         QString buff=ui->label->text();
          buff.append("0");
           ui->label->setText(buff);
    }
    else
    {
        QString buff=ui->label->text();
         buff.append("0");
         ui->label->setText(buff);
    }
}

void Caculator::on_pushButton_clicked()
{
    QString text = ui->label->text();

    if(text=="output")
    {
         ui->label->setText(" ");
         QString buff=ui->label->text();
          buff.append("+");
           ui->label->setText(buff);
    }
    else
    {
        QString buff=ui->label->text();
         buff.append("+");
         ui->label->setText(buff);
    }
}

void Caculator::on_pushButton_7_clicked()
{
    QString text = ui->label->text();

    if(text=="output")
    {
         ui->label->setText(" ");
         QString buff=ui->label->text();
          buff.append("-");
           ui->label->setText(buff);
    }
    else
    {
        QString buff=ui->label->text();
         buff.append("-");
         ui->label->setText(buff);
    }
}

void Caculator::on_pushButton_10_clicked()
{
    QString text = ui->label->text();

    if(text=="output")
    {
         ui->label->setText(" ");
         QString buff=ui->label->text();
          buff.append("*");
           ui->label->setText(buff);
    }
    else
    {
        QString buff=ui->label->text();
         buff.append("*");
         ui->label->setText(buff);
    }
}

void Caculator::on_pushButton_16_clicked()
{
    QString text = ui->label->text();

    if(text=="output")
    {
         ui->label->setText(" ");
         QString buff=ui->label->text();
          buff.append("/");
           ui->label->setText(buff);
    }
    else
    {
        QString buff=ui->label->text();
         buff.append("/");
         ui->label->setText(buff);
    }
}

void Caculator::on_pushButton_13_clicked()
{
    QString text = ui->label->text();

    if(text=="output")
    {
         ;
    }
    else
    {
        QString buff=ui->label->text();
         buff.chop(1);
         ui->label->setText(buff);
    }
}
