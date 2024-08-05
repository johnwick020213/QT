/********************************************************************************
** Form generated from reading UI file 'caculator.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CACULATOR_H
#define UI_CACULATOR_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Caculator
{
public:
    QWidget *centralwidget;
    QLabel *label;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QPushButton *pushButton_5;
    QPushButton *pushButton_6;
    QPushButton *pushButton_7;
    QPushButton *pushButton_8;
    QPushButton *pushButton_9;
    QPushButton *pushButton_10;
    QPushButton *pushButton_11;
    QPushButton *pushButton_12;
    QPushButton *pushButton_13;
    QPushButton *pushButton_14;
    QPushButton *pushButton_15;
    QPushButton *pushButton_16;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Caculator)
    {
        if (Caculator->objectName().isEmpty())
            Caculator->setObjectName(QString::fromUtf8("Caculator"));
        Caculator->resize(800, 600);
        centralwidget = new QWidget(Caculator);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(100, 120, 661, 51));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(200, 180, 91, 41));
        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(310, 180, 91, 41));
        pushButton_3 = new QPushButton(centralwidget);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(410, 180, 91, 41));
        pushButton_4 = new QPushButton(centralwidget);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setGeometry(QRect(520, 180, 91, 41));
        pushButton_5 = new QPushButton(centralwidget);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));
        pushButton_5->setGeometry(QRect(520, 240, 91, 41));
        pushButton_6 = new QPushButton(centralwidget);
        pushButton_6->setObjectName(QString::fromUtf8("pushButton_6"));
        pushButton_6->setGeometry(QRect(310, 240, 91, 41));
        pushButton_7 = new QPushButton(centralwidget);
        pushButton_7->setObjectName(QString::fromUtf8("pushButton_7"));
        pushButton_7->setGeometry(QRect(200, 240, 91, 41));
        pushButton_8 = new QPushButton(centralwidget);
        pushButton_8->setObjectName(QString::fromUtf8("pushButton_8"));
        pushButton_8->setGeometry(QRect(410, 240, 91, 41));
        pushButton_9 = new QPushButton(centralwidget);
        pushButton_9->setObjectName(QString::fromUtf8("pushButton_9"));
        pushButton_9->setGeometry(QRect(410, 300, 91, 41));
        pushButton_10 = new QPushButton(centralwidget);
        pushButton_10->setObjectName(QString::fromUtf8("pushButton_10"));
        pushButton_10->setGeometry(QRect(200, 300, 91, 41));
        pushButton_11 = new QPushButton(centralwidget);
        pushButton_11->setObjectName(QString::fromUtf8("pushButton_11"));
        pushButton_11->setGeometry(QRect(520, 300, 91, 41));
        pushButton_12 = new QPushButton(centralwidget);
        pushButton_12->setObjectName(QString::fromUtf8("pushButton_12"));
        pushButton_12->setGeometry(QRect(310, 300, 91, 41));
        pushButton_13 = new QPushButton(centralwidget);
        pushButton_13->setObjectName(QString::fromUtf8("pushButton_13"));
        pushButton_13->setGeometry(QRect(310, 350, 91, 41));
        pushButton_14 = new QPushButton(centralwidget);
        pushButton_14->setObjectName(QString::fromUtf8("pushButton_14"));
        pushButton_14->setGeometry(QRect(520, 350, 91, 41));
        pushButton_15 = new QPushButton(centralwidget);
        pushButton_15->setObjectName(QString::fromUtf8("pushButton_15"));
        pushButton_15->setGeometry(QRect(410, 350, 91, 41));
        pushButton_16 = new QPushButton(centralwidget);
        pushButton_16->setObjectName(QString::fromUtf8("pushButton_16"));
        pushButton_16->setGeometry(QRect(200, 350, 91, 41));
        Caculator->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Caculator);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 21));
        Caculator->setMenuBar(menubar);
        statusbar = new QStatusBar(Caculator);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        Caculator->setStatusBar(statusbar);

        retranslateUi(Caculator);

        QMetaObject::connectSlotsByName(Caculator);
    } // setupUi

    void retranslateUi(QMainWindow *Caculator)
    {
        Caculator->setWindowTitle(QCoreApplication::translate("Caculator", "Caculator", nullptr));
        label->setText(QCoreApplication::translate("Caculator", "output", nullptr));
        pushButton->setText(QCoreApplication::translate("Caculator", "+", nullptr));
        pushButton_2->setText(QCoreApplication::translate("Caculator", "1", nullptr));
        pushButton_3->setText(QCoreApplication::translate("Caculator", "2", nullptr));
        pushButton_4->setText(QCoreApplication::translate("Caculator", "3", nullptr));
        pushButton_5->setText(QCoreApplication::translate("Caculator", "6", nullptr));
        pushButton_6->setText(QCoreApplication::translate("Caculator", "4", nullptr));
        pushButton_7->setText(QCoreApplication::translate("Caculator", "-", nullptr));
        pushButton_8->setText(QCoreApplication::translate("Caculator", "5", nullptr));
        pushButton_9->setText(QCoreApplication::translate("Caculator", "8", nullptr));
        pushButton_10->setText(QCoreApplication::translate("Caculator", "*", nullptr));
        pushButton_11->setText(QCoreApplication::translate("Caculator", "9", nullptr));
        pushButton_12->setText(QCoreApplication::translate("Caculator", "7", nullptr));
        pushButton_13->setText(QCoreApplication::translate("Caculator", "del", nullptr));
        pushButton_14->setText(QCoreApplication::translate("Caculator", "=", nullptr));
        pushButton_15->setText(QCoreApplication::translate("Caculator", "0", nullptr));
        pushButton_16->setText(QCoreApplication::translate("Caculator", "/", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Caculator: public Ui_Caculator {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CACULATOR_H
