#include<myrect.h>
#include<bullet.h>
#include<QGraphicsScene>
#include <QDebug>
#include "enemybullet.h"
void myrect::keyPressEvent(QKeyEvent *event)
{
    if(event->key()==Qt::Key_Left)
    {
        if((pos().x())>-50)
            setPos(x()-10,y());
    }
    else if(event->key()==Qt::Key_Right)
    {

        if((pos().x())<750)
            setPos(x()+10,y());


    }
    else if(event->key() == Qt::Key_Space)
    {
        bullet *mybullet =new bullet();
        mybullet->setPos(x(),y());
        scene()->addItem(mybullet);

    }
}

void myrect::spawn()
{
    enemyBullet *ebullet;
    ebullet =new enemyBullet();
    scene()->addItem(ebullet);

}
