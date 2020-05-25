#include <QCoreApplication>
#include "myvector.h"
#include <QDebug>

int main()                //ТУТ ПРОСТО ОТЛАДКА
                           //МОЖЕШЬ В МЭЙНЕ ПИСАТЬ ЧТО УГОДНО
{
    myvector Vector(14);  //цифра = количество элементов
   // Vector.WorkMode();
    //    Vector.Append(7,12); //номер элемента с учетом 0, значение элемента
      //      Vector.Print();
    for (int a=7; a<14; a++) {
        Vector.Append(a,0);
            Vector.Print();
    }
    qDebug()<<"main";
    Vector.Deletion();
    Vector.Print();
 //   Vector.Append(7,12); //номер элемента с учетом 0, значение элемента
 //   Vector.Print();
    return 0;
}
