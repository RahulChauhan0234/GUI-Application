#include<myrect.h>
#include<bullet.h>
#include<QGraphicsScene>
#include <QDebug>
void myrect::keyPressEvent(QKeyEvent *event)
{
    if(event->key()==Qt::Key_Left)
    {
        setPos(x()-10,y());
    }
    else if(event->key()==Qt::Key_Right)
    {
        setPos(x()+10,y());
    }
    else if(event->key() == Qt::Key_Space)
    {
        bullet *mybullet =new bullet();
        scene()->addItem(mybullet);

    }
}
