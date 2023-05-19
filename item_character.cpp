#include "item_character.h"

item_character::item_character()
{
    pixmap.load(":/MainCharacter_body_knife/resource/MainCharacter/knife/idle/survivor-idle_knife_0.png");
    pixmap = pixmap.scaled(70, 70); // 更改图像大小为70x70像素
}

//碰撞边缘    //myItem::boundingRect()还是character::boundingRect() ？？？？
QRectF item_character::boundingRect() const//设置碰撞函数// myItem？？？？？？？？
{
    return QRectF(0,0,pixmap.width()*0.8,pixmap.height()*0.8);//返回一个边缘矩形框
}

//绘制图形
void item_character::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget)
{
    painter->drawPixmap(0,0,pixmap);
}

void item_character::keyPressEvent(QKeyEvent *event)
{
    switch (event->key())
    {
    case Qt::Key_W:

        break;
    case Qt::Key_S:

        break;
    case Qt::Key_A:

        break;
    case Qt::Key_D:

        break;
    default:
        QGraphicsItem::keyPressEvent(event);//剩下的交回给父类处理
        return;
    }
}
