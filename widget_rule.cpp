#include "widget_rule.h"
#include "ui_rule_widget.h"
#include<QPainter>

rule_widget::rule_widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::widget_rule)
{
    ui->setupUi(this);
    setFixedSize(450*1.5,320*1.5);//固定窗口大小
    setWindowTitle("刺杀希特勒");//设置窗口标题
    //设置窗口图标
    QIcon icon;
    icon.addFile(":/icon/resource/icon/shot.png", QSize(30, 30));
    setWindowIcon(icon);

    //返回按钮
    ui->back->setStyleSheet("QToolButton { background: transparent; }");
    connect(ui->back,&QToolButton::clicked,[=](){
        emit this->Back();//发出返回信号
    });

    //设置档案背景透明度
    ui->file->setStyleSheet("background-color: rgba(180, 180, 180, 50);");
}

rule_widget::~rule_widget()
{
    delete ui;
}

void rule_widget::paintEvent(QPaintEvent *)//背景图片
{
    QPainter painter(this);
    QPixmap backgroud;
    backgroud.load(":/background/resource/background/tla61N.jpg");//里面写图片地址
    painter.drawPixmap(0,0,this->width(),this->height(),backgroud);//图片位置
}
