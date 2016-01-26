#include <QCoreApplication>
#include <QApplication>
#include <QDebug>

#include "World_of_Struct.h"
#include Direction_of_ContollerH

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Controller cont;
    cont.Time_to_Find_Answer();
    return a.exec();
}
