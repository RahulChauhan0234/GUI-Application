#include<bullet.h>
#include<QDebug>

bullet::bullet()
{
    // Drow the Rect
    setRect(0,0,10,10);
    timer = new QTimer(this);
    connect(timer,SIGNAL(timeout()),this,SLOT(move()));
    timer->start(50);
}

void bullet::move()
{
    //Move the Bullet up
    setPos(x(),y()-10);
    if(pos().y() < 110)
    {
        scene()->removeItem(this);
        delete this;
    }
}
