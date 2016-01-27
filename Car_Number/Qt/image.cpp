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
void Image::magic_cube()
{
    QImage image(1200,1200,QImage::Format_RGB32);
    //image.fill();
    int max;
    for(int k=0;k<=10;k++)
        for(int i=0;i<256;i++)
            for(int j=0;j<256;j++)
            {
                max=(i>j?i:j);
                max=max/(1+k*5)*(1+k*5);
                //qDebug()<<max;
                image.setPixel(i+256*(k%3),j+256*(k/3),QColor(max,max,max).rgb());
            }
   qDebug()<< image.save("magic_cube.jpg");
}
