#ifndef WIDGET_START_H
#define WIDGET_START_H

#include <QWidget>
#include"widget_rule.h"
#include"map2.h"//地图2//暂且加到这

namespace Ui {
class widget_start;
}

class start_Widget : public QWidget
{
    Q_OBJECT

public:
    explicit start_Widget(QWidget *parent = nullptr);
    ~start_Widget();

    //设置背景//重写绘图事件
    void paintEvent(QPaintEvent*);
    //创建游戏规则窗口
    rule_widget* rule=NULL;

private:
    Ui::widget_start *ui;

    map2* Map2;//地图2
};

#endif // WIDGET_START_H
