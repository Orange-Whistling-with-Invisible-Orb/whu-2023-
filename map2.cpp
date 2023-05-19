#include "map2.h"

map2::map2(int x,int y)
{
    // 视图
    setFixedSize(800,600);//固定窗口大小
    setWindowTitle("刺杀希特勒");//设置窗口标题
    //设置窗口图标
    QIcon icon;
    icon.addFile(":/icon/resource/icon/shot.png", QSize(30, 30));
    setWindowIcon(icon);
    //设置背景
    setBackgroundBrush(QBrush(QPixmap(":/background/resource/background/tla61N.jpg")));//写背景图片地址//暂且放测试图

    //视图搭建好后 搭建场景
    scene2=new QGraphicsScene;
    scene2->setSceneRect(0,0,this->width()-2,this->height()-2);//把场景放对位置//QGraphicsScene以中心为原点//-2是为了消掉滚动条
    this->setScene(scene2);//把视图背景放进场景里

    //放入主角
    Character=new item_character;
    Character->setPos(x,y);
    scene2->addItem(Character);//把主角添加到场景里
}
