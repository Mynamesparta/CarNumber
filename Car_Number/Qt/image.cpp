#include "image.h"
#include <QDebug>
Image::Image(string name):image(QString::fromStdString(name))
{
    //image=new QImage(QString::fromStdString(name));
    _name=name;
}

Image::~Image()
{
    //qDebug()<<"Hello"<<QString::fromStdString(_name);
    //delete image;
}

QImage& Image::getImage()
{
    return image;
}

RGB Image::getPixel(int x, int y)
{
    QColor color=QColor(image.pixel(x,y));
    RGB rgb(color.red(),color.green(),color.blue(),color.alpha());
    return rgb;
}

string Image::getName()
{
    return _name;
}
