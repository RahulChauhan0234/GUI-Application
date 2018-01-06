#ifndef MYRECT_H
#define MYRECT_H
#include <QGraphicsRectItem>
#include<QGraphicsView>
#include<QGraphicsItem>
#include<QGraphicsScene>
#include<QKeyEvent>

class myrect:public QGraphicsRectItem{
public:
    void keyPressEvent(QKeyEvent *event);
};


#endif // MYRECT_H
