#ifndef GRAPHIC_H
#define GRAPHIC_H

#include <QWidget>
#include <QGraphicsScene>
#include <QGraphicsView>
#include <QDebug>
#include <vector>
#include "image.h"
#include "World_of_Struct.h"
using namespace std;
class Graphic : public QWidget
{
    Q_OBJECT
public:
     Graphic(QWidget *parent = 0);
    ~Graphic();
     void addImage(Image& image);
     void addRedInfinitySnake(vector<Point> vec);
     void addRedInfinitySnake(vector< vector<Point> > vec);

private:
    QGraphicsScene scene;
    QGraphicsView* view=new QGraphicsView(&scene);

signals:

public slots:

};

#endif // GRAPHIC_H
