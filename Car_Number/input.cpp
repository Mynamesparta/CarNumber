#include "input.h"
#include <QDebug>
Input::Input()
{

    Load("AA0999IP");
}

void Input::Load(string name_of_image)
{
    Image image(Direction_of_ImageF+name_of_image);
    input.push_back(image);
}
