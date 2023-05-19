#ifndef ITEM_CHARACTER_H
#define ITEM_CHARACTER_H

#include<myitem.h>//继承自自定义的myItem图元类类
#include <QKeyEvent>//获取键盘输入类

//操控角色类
class item_character:public myItem//继承自自定义的myItem图元类类
{
public:
    item_character();

    virtual QRectF boundingRect() const override;//覆盖图元碰撞
    virtual void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget = nullptr)override;//覆盖图元绘制
    virtual void keyPressEvent(QKeyEvent *event) override;//按键盘awds来使角色移动
};

#endif // ITEM_CHARACTER_H
