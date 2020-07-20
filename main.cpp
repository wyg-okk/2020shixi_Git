#include "mainwindow.h"
#include <QApplication>
#include <QWidget>
#include <QLabel>


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    // 创建界面
    QWidget *widgetMain = new QWidget();

    // 修改参数
    widgetMain->setWindowTitle("0 error"); //团队名称
    widgetMain->resize(300,150);
    widgetMain->setStyleSheet("background-color: black");

    // 创建标签
    QLabel *labelTemperatureText = new QLabel();

    // 修改便签内容
    labelTemperatureText->setText("T-");
    // 设置父控件
    labelTemperatureText->setParent(widgetMain);
    labelTemperatureText->setGeometry(0, 50, 50, 50);
    labelTemperatureText->setStyleSheet("background-color: black; color: white;font-family:Microsoft YaHei;font-size:12px"); // todo 完成字号、字体设置

    // 创建标签
    QLabel *labelTemperatureData = new QLabel(widgetMain);
    // 温度数值
    labelTemperatureData->setText("36.5");
    labelTemperatureData->setGeometry(50, 0, 150, 150);
    labelTemperatureData->setStyleSheet("background-color: black; color: rgb(255,0,255);font-family:Microsoft YaHei;font-size:60px");// todo 完成字号、字体设置

    // 更新主窗口显示内容
    widgetMain->show();

    return a.exec();
}
