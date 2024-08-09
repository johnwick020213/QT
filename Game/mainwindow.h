#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include<QPushButton>
#include<QStack>
#include<QPair>
#include<QDeBug>
QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();


private:
    void game_judge();
    bool win();
    void printWinner();
    void clear();
    void undo();
    void draw_O(QPushButton*Button);
    void draw_X(QPushButton*Button);
    void setButton(QPushButton* b);

private slots:
    void do_pushButton_clicked();

//    void on_pushButton_clicked();

    void on_pushButton_11_clicked();

//    void on_pushButton_2_clicked();

//    void on_pushButton_3_clicked();

//    void on_pushButton_5_clicked();

//    void on_pushButton_6_clicked();

//    void on_pushButton_4_clicked();

//    void on_pushButton_9_clicked();

//    void on_pushButton_7_clicked();

//    void on_pushButton_8_clicked();

    void on_pushButton_10_clicked();

private:
    Ui::MainWindow *ui;
    bool flag=true;
    QStack<QPushButton*> s;
    QList<QPushButton*>buttonList;
};
#endif // MAINWINDOW_H
