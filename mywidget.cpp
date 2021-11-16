#include "mywidget.h"
#include<QPushButton>
#include"mypushbutton.h"
#include<QDebug>
myWidget::myWidget(QWidget *parent)
    : QWidget(parent)
{
    //创建一个按钮
    QPushButton*btn=new QPushButton;
    //btn->show();//show顶层方式弹出控件
    btn->setParent(this);
    //显示文本
    btn->setText("按钮一号");


    //创建另一个按钮
    QPushButton*btn2=new QPushButton("按钮2号",this);

    //移动btn2
    btn2->move(100,100);
    //按钮大小
    btn2->resize(100,200);

    //重置窗口大小
    resize(600,400);//宽加高
    //设置固定窗口大小
    setFixedSize(500,500);
    //设置窗口标题
    setWindowTitle("窗口1号");


    //创建自己按钮对象
    MyPushButton * mybtn=new MyPushButton;
    mybtn->setText("我的按钮");

    mybtn->move(200,0);
    mybtn->setParent(this);//设置到对象树中




}

myWidget::~myWidget()
{
    qDebug()<<"析构构";
}

