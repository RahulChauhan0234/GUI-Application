#include "myrect.h"
#include <QApplication>
#include <QTimer>
#include "enemybullet.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    //add a scene
    QGraphicsScene *scene = new QGraphicsScene();

    //create an item to put in to the scene
    myrect *tank =new myrect();
    tank->setRect(0,0,100,100);
    //only one QGraphics Item can respond on kew press event at a time

    //make item focusable
    tank->setFlag(QGraphicsItem::ItemIsFocusable);
    tank->setFocus();

    //add item to scene
    scene->addItem(tank);

    QGraphicsView *view = new QGraphicsView(scene);
    //dirty solution because if we pressing space button bullet is
    //generating and moving upward and sceen is making bigger and bigger
    // to avoid this remove the scrollbar
    view->setFixedSize(800,600);
    scene->setSceneRect(0,0,800,600);
    tank->setPos(view->width()/2-50,view->height()-100);
    view->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    view->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);

    view->show();
    /* To spawn the enemy bullet every 5 second */
    QTimer *enemytimer = new QTimer();
    QObject::connect(enemytimer,SIGNAL(timeout()),tank,SLOT(spawn()));
    enemytimer->start(2000);
    /* end here*/
    return a.exec();
}
