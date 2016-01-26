#ifndef INPUT_H
#define INPUT_H

#include <vector>
#include <string>
#include "World_of_Struct.h"
#include Direction_of_ImageH
using namespace std;
class Input
{
public:
    Input();
    vector<Image> input;
private:
    void Load(string name_of_image);
};

#endif // INPUT_H
