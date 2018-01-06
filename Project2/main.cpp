#include "myrect.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    //add a scene
    QGraphicsScene *scene = new QGraphicsScene();

    //create an item to put in to the scene
    myrect *rect =new myrect();
    rect->setRect(0,0,100,100);
    //only one QGraphics Item can respond on kew press event at a time

    //make item focusable
    rect->setFlag(QGraphicsItem::ItemIsFocusable);
    rect->setFocus();

    //add item to scene
    scene->addItem(rect);

    QGraphicsView *view = new QGraphicsView(scene);
    view->show();
    return a.exec();
}
