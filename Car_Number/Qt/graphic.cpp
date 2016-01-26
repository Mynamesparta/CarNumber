#include "graphic.h"

Graphic::Graphic(QWidget *parent) :
    QWidget(parent)
{
    //view->QAbstractScrollArea::setViewport(this);
    view->show();
    view->resize(1000,1000);
    //scene.addPixmap(QPixmap())
    //scene.addPolygon()

}

Graphic::~Graphic()
{
    delete view;
}

void Graphic::addImage(Image &image)
{
    QPixmap pixmap(QString::fromStdString(image.getName()));
    scene.addPixmap(pixmap);
}
void Graphic::addRedInfinitySnake(vector<Point> vec)
{
    int i=0;
    for(;i<vec.size()-1;i++)
    {
        scene.addLine(vec[i].x,vec[i].y,vec[i+1].x,vec[i+1].y,QPen(Qt::red));
    }
    scene.addLine(vec[i].x,vec[i].y,vec[0].x,vec[0].y,QPen(Qt::red));
}
void Graphic::addRedInfinitySnake(vector<vector<Point> > vec)
{
    int i=0;
    for(;i<vec.size();i++)
    {
        addRedInfinitySnake(vec[i]);
    }
}
