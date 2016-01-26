#ifndef IMAGE_H
#define IMAGE_H
#include <QImage>
#include <QString>
#include <QColor>
#include <string>
#include "World_of_Struct.h"
using namespace std;
class Image
{
public:
    Image(string name);
    ~Image();
    QImage& getImage();
    RGB getPixel(int x,int y);
    string getName();
private:
    QImage image;
    string    _name;
};


#endif // IMAGE_H
