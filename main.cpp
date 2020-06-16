#include <QCoreApplication>
#include "myvector.h"
#include <QDebug>

int main()
{
    myvector Vector(14);  //цифра = количество элементов
    qDebug()<<"main";
    Vector.WorkMode();
//    Vector.Append(0,1);
//    Vector.Append(1,2);
 //   Vector.Append(2,3);
//    Vector.Append(3,4);
//    Vector.Print();
    return 0;
}
