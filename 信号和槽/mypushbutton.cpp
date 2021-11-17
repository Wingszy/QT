#include "mypushbutton.h"
#include<QDebug>
MyPushButton::MyPushButton(QWidget *parent) : QPushButton(parent)
{
    qDebug()<<"构造";


}


MyPushButton::~MyPushButton()
{
    qDebug()<<"析构";
}
