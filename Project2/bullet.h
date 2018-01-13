#ifndef BULLET_H
#define BULLET_H
#include<QGraphicsRectItem>
#include<QGraphicsScene>
#include <QObject>
#include <QTimer>


class bullet: public QObject,public QGraphicsRectItem
{

  Q_OBJECT

public:
    bullet();
public slots:
    void move();

private:
    QTimer *timer;


};

#endif // BULLET_H
