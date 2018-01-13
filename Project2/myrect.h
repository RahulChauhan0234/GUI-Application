#ifndef MYRECT_H
#define MYRECT_H
#include<QGraphicsScene>
#include<QGraphicsView>
#include<QGraphicsRectItem>
#include<QDebug>
#include<QObject>
#include<QKeyEvent>

class myrect:public QObject,public QGraphicsRectItem
{
    Q_OBJECT
public:
    void keyPressEvent(QKeyEvent *event);
public slots:
    void spawn();
};
#endif // MYRECT_H
