#ifndef START_WIDGET_H
#define START_WIDGET_H

#include <QWidget>
#include"rule_widget.h"

namespace Ui {
class start_Widget;
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
    Ui::start_Widget *ui;
};

#endif // START_WIDGET_H
