#ifndef MAP2_H
#define MAP2_H

#include<QGraphicsView>//视图
#include<QGraphicsScene>//场景
#include<QBrush>
#include "item_character.h"//添加主角

class map2:public QGraphicsView //用QGraphicsView框架来写
{
public:
    map2(int x,int y);//x和y是主角的初始坐标
private:
    QGraphicsScene* scene2;
    item_character* Character;//主角
};

#endif // MAP2_H
