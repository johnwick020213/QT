#include "mainwindow.h"

#include <QApplication>
#include<QList>
#include<QSet>
#include<QMap>
#include<QStack>
#include<QString>
#include<QDebug>

QSet<int> MyIntersection(QList<int>& list,QSet<int>& set)
{
    QSet<int> temp;
    QSet<int>::iterator it=set.begin();
    while(it!=set.end())
    {
        if(list.contains(*it))
        {
            temp.insert(*it);
        }
        ++it;
    }

    return temp;
}

QList<int> MyOdd(QMap<int,int>& map)
{
       QList<int> templist;
       QMap<int,int>::iterator it=map.begin();
       while(it!=map.end())
       {
           if(it.key()%2)
           {
               templist.append(it.key());
           }
           if(it.value()%2)
           {
               templist.append(it.value());
           }
           ++it;
       }
       return templist;
}

QStack<QString> split_way(QString& string)
{
    QStack<QString> tempstack;
    QStringList list=string.split("/",QString::SkipEmptyParts);
    //qDebug()<<list;
    QStringList::iterator it=list.begin();
    while(it!=list.end())
    {
        tempstack.push(*it);
        ++it;
    }
    return tempstack;
}

void print_filepath(QStack<QString>& stack)
{
    QStack<QString>::iterator it=stack.begin();
    QString filepath;
    while(it!=stack.end())
    {
        filepath.append("/");
        filepath.append(*it);
        ++it;
    }
    qDebug()<<filepath;
}
QStack<QString> tempstack;
void my_cd(QStack<QString>& stack,int state)
{
    if(state==1)
    {
        if(!tempstack.isEmpty())
        {
            stack.push(tempstack.top());
            tempstack.pop();
        }
        print_filepath(stack);
    }
    else if(state==0)
    {
        if(!stack.isEmpty())
        {
            tempstack.push(stack.top());
            stack.pop();
        }
        print_filepath(stack);
    }
}

void test0()
{
    QSet<int> set;
    QList<int> list;
    set.insert(1);
    set.insert(2);
    set.insert(4);
    set.insert(5);
    set.insert(6);
    set.insert(7);
    set.insert(67);
    set.insert(9);
    set.insert(56);
    set.insert(10);
    set.insert(13);
    set.insert(15);

    list.append(1);
    list.append(13);
    list.append(15);
    list.append(56);
    list.append(1022);
    list.append(12232);
    list.append(9);
    list.append(4);
    list.append(4);
    list.append(5);
    list.append(10);

    qDebug()<<MyIntersection(list,set);
}

void test1()
{
    QMap<int,int> map;
    map.insert(0,1);
    map.insert(3,2);
    map.insert(4,5);
    map.insert(7,6);
    map.insert(8,9);
    map.insert(11,10);
    map.insert(12,13);

    qDebug()<<MyOdd(map);

}

void test2()
{
    QString filepath("/usr/include/dir1/dir2");
    QStack<QString> stack=split_way(filepath);
    qDebug()<<filepath;
    my_cd(stack,0);
    my_cd(stack,0);
    my_cd(stack,0);
    my_cd(stack,0);
    my_cd(stack,1);
    my_cd(stack,1);
    my_cd(stack,1);
    my_cd(stack,1);
}
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    test2();
    return a.exec();
}
