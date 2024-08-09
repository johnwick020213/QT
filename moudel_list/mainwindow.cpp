#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    model=new QStandardItemModel(0,1,this);

    QStringList names = {"张三", "李四", "王五", "赵六", "林七"};
    for (int i = 0; i < names.size(); ++i) {
        QStandardItem *item = new QStandardItem(names[i]);
        model->appendRow(item);
    }
    QStandardItem *item = new QStandardItem("我的好友");
    setWindowTitle(item->text());
    view=new QListView(this);
    view->setModel(model);

    layout=new QHBoxLayout;
    layout->addWidget(view);
    ui->centralwidget->setLayout(layout);

}

MainWindow::~MainWindow()
{
    delete ui;
}

