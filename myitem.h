#ifndef MYITEM_H
#define MYITEM_H

#include<QGraphicsItem>//图元类
#include<QPixmap>//画图类
#include<QPainter>//画图类

//自定义一个图元类//用于派生墙体、主角、敌人类
class myItem:public QGraphicsItem//继承图元类
{
public:
    myItem();

    virtual QRectF boundingRect() const override;//覆盖图元碰撞
    virtual void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget = nullptr)override;//覆盖图元绘制
    QPixmap pixmap;//绘制图形

private:
};

#endif // MYITEM_H
