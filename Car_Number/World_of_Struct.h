#ifndef WORLD_OF_STRUCT_H
#define WORLD_OF_STRUCT_H

#define Direction_of_ImageH "Qt/image.h"
#define Direction_of_ContollerH "Qt/controller.h"
#define Direction_of_ImageF "Image/"

class RGB
{
public :
    RGB(int red,int green,int blue,int a):red(red),green(green),blue(blue),a(a){}
    int  red;
    int green;
    int  blue;
    int a;
};
class Point
{
public:
    Point(){}
    Point(float x,float y):x(x),y(y){}
    float x,y;
};

#endif // WORLD_OF_STRUCT_H
