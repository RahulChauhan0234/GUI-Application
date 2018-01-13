#include<enemybullet.h>
#include<stdlib.h> //for randam intigar value rand()

enemyBullet::enemyBullet()
{
    rendam_xpos= rand()%700;
    setPos(rendam_xpos,0);
    setRect(0,0,10,10);
    enemyTimer =new QTimer();

    connect(enemyTimer,SIGNAL(timeout()),this,SLOT(enemyBulletMove()));
    enemyTimer->start(100);

}
void enemyBullet::enemyBulletMove()
{
    setPos(pos().x(),pos().y()+10);
}
