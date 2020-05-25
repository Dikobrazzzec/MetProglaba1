#include "myvector.h"
#include <QDebug>
#include <QTextStream>
#include <QString>
#include <QChar>
QTextStream cout(stdout);
QTextStream cin(stdin);

myvector::myvector() {}

myvector::myvector(int size) {
    array = new int[size];
    for (int i = 0; i < size; i++) {
        array[i] = i;
        qDebug()<<array[i];
    }
    m_size = size;
}



void myvector::WorkMode()     //это не нужно, просто недоделанный кусок моего кода
{
    myvector Aktivator();
    int indin, valint;
    qDebug()<<"Enter workmode: append - 1, remove - 2, at - 3, print - 4.";
//     qDebug()<<"rabotaet";
//     QString WMP;
//     WMP = cin.readLine();
    cin >>WMP;
    switch (WMP) {
    case 1:
        qDebug()<<"You selected work mode Append.";
        qDebug()<<"Enter index and value of new element.";
        qDebug()<<"The index of the old item in this position will be 1 more.";
        qDebug()<<"Enter index ";
        cout.flush();
        cin>>indin;
        qDebug()<<"Enter value ";
        cout.flush();
        cin>>valint;
        Append(indin, valint);
        break;
    case 2:
        qDebug()<<"You selected work mode Remove.";
        break;
    case 3:
        qDebug()<<"You selected work mode At.";
        break;
    case 4:
        qDebug()<<"You selected work mode Print.";
        break;
    }
    Print();
}

void myvector::Append(int index, int value)
{
    if (index>(m_size-1)) {
        Expansion();
    }
    qDebug()<<"The value of the last item will be lost.";
    for (int i=(m_size-2); i > index; i--) {
        array[i+1] = array[i];
    }
    array[index] = value;
}

void myvector::Remove(int index)
{
    for (int i = index; i < (m_size-2); i++) {
        array[i] = array[i+1];
    }
    array[m_size-1]=0;
}

int myvector::At(int index)
{
    return array[index];
}

void myvector::Print()
{
    for (int i = 0; i < m_size; i++) {
        qDebug()<<array[i];
    }
}

void myvector::Expansion()
{
    int  m_size2 = m_size*2;
    array2 = new int[m_size2];
    for(int i = 0; i < m_size; i++) {
        array2[i]=array[i];
    }
    array = new int [m_size2];
    for(int i = 0; i < m_size; i++) {
        array[i]=array2[i];
    }
    m_size = m_size2;
    for (int i = (m_size/2); i < m_size-1; i++) {
        array[i] = NULL;
    }
}

void myvector::Deletion()
{
    bool tester = false;
    for (int i = (m_size/2); i < m_size; i++) {
        if (array[i] == 0) {
            tester = false;
        } else {
            tester = true;
            break;}
    }
    if (tester == true) {
        qDebug()<<"Most of the array is full. Array size reduction isn't possible.";
    } else {
        array2 = new int[m_size/2];
        for (int i = 0; i< ((m_size/2)-1);i++){
            array2[i] = array[i];
        }
        m_size = m_size/2;
        array = new int[m_size];
        for (int i = 0; i < (m_size-1); i++) {
            array[i] = array2[i];
        }
    }
}
