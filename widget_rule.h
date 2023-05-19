#ifndef WIDGET_RULE_H
#define WIDGET_RULE_H

#include <QWidget>

namespace Ui {
class widget_rule;
}

class rule_widget : public QWidget
{
    Q_OBJECT

public:
    explicit rule_widget(QWidget *parent = nullptr);
    ~rule_widget();

    //设置背景//重写绘图事件
    void paintEvent(QPaintEvent*);

signals:
    // 自定义返回信号
    void Back();

private:
    Ui::widget_rule *ui;
};

#endif // WIDGET_RULE_H
