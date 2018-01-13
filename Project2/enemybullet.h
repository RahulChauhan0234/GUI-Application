#ifndef ENEMYBULLET_H
#define ENEMYBULLET_H
#include <QGraphicsRectItem>
#include <QTimer>

class enemyBullet:public QObject,public QGraphicsRectItem
{
    Q_OBJECT
public:
    enemyBullet();
     QTimer *enemyTimer;
public slots:
    void enemyBulletMove();
private:
    int rendam_xpos;


};

#endif // ENEMYBULLET_H
