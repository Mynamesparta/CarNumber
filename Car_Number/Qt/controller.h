#ifndef CONTROLLER_H
#define CONTROLLER_H

#include <QString>
#include <string>
#include <QDebug>
#include <vector>
#include "graphic.h"
#include "image.h"
#include "../algorithm.h"
#include "../input.h"
#include "../output.h"
#include "World_of_Struct.h"

class Controller
{
public:
    Controller();
    void Time_to_Find_Answer();
private:
    Graphic graphic;
    Algorithm algo;
    Input input;
    Output output;
};

#endif // CONTROLLER_H
