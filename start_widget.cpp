#include "start_widget.h"
#include "ui_start_widget.h"
#include<QPainter>
#include<QTimer>
#include<QDebug>

start_Widget::start_Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::start_Widget)
{
    ui->setupUi(this);

    setFixedSize(450*1.5,320*1.5);//固定窗口大小
    setWindowTitle("刺杀希特勒");//设置窗口标题
    //设置窗口图标
    QIcon icon;
    icon.addFile(":/background/resource/background/icon.png", QSize(30, 30));
    setWindowIcon(icon);
    QPixmap pix_rule;

    //设置按钮
    //开始游戏按钮
    ui->start->setStyleSheet("QToolButton { background: transparent; }");
    connect(ui->start,&QToolButton::clicked,[=](){

    });
    //游戏规则按钮
    ui->rule->setStyleSheet("QToolButton { background: transparent; }");
    connect(ui->rule,&QToolButton::clicked,[=](){
        rule=new rule_widget;//建立窗口
        this->hide();//切换窗口
        rule->show();
        //监听rule_widget的返回信号
        connect(rule,&rule_widget::Back,[=](){
            qDebug()<<"返回主页面";
            rule->hide();//切换窗口
            this->show();
        });
    });
    ui->quit->setStyleSheet("QToolButton { background: transparent; }");//退出按钮
    connect(ui->quit,&QToolButton::clicked,[=](){
        this->close();
    });
}

start_Widget::~start_Widget()
{
    delete ui;
}

void start_Widget::paintEvent(QPaintEvent *)//设置背景
{
    QPainter painter(this);
    QPixmap backgroud;
    backgroud.load(":/background/resource/background/start_page.png");//里面写图片地址
    painter.drawPixmap(0,0,this->width(),this->height(),backgroud);//图片位置
}