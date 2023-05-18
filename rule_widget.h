#ifndef RULE_WIDGET_H
#define RULE_WIDGET_H

#include <QWidget>

namespace Ui {
class rule_widget;
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
    Ui::rule_widget *ui;
};

#endif // RULE_WIDGET_H
