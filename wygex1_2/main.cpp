#include "mainwindow.h"

#include <QApplication>
#include <QLabel>
#include <QDebug>
#include <QDateTime>


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;

    w.setWindowTitle("0 error");
    w.resize(300,150);
    w.setStyleSheet("background-color: black");

    QLabel *labelTemperatureData = new QLabel(&w);
    // 温度数值
    labelTemperatureData->setText("36.5");
    labelTemperatureData->setGeometry(50, 0, 150, 150);
    labelTemperatureData->setStyleSheet("background-color: black; color: rgb(255,0,255);font-family:Microsoft YaHei;font-size:60px");// todo 完成字号、字体设置

    QLabel *labelTemperatureDegree = new QLabel(&w);
    // 温度单位
    labelTemperatureDegree->setText("℃");
    labelTemperatureDegree->setGeometry(200, -30, 150, 150);
    labelTemperatureDegree->setStyleSheet("background-color: black; color: rgb(255,0,255);font-family:Microsoft YaHei;font-size:60px");// todo 完成字号、字体设置

    QLabel *labelTemperatureText = new QLabel(&w);
    labelTemperatureText->setText("T-");
    labelTemperatureText->setGeometry(0, 50, 50, 50);
    labelTemperatureText->setStyleSheet("background-color: black; color: white;font-family:Microsoft YaHei;font-size:12px"); // todo 完成字号、字体设置

    qDebug() << "data:" << QDateTime::currentDateTime().toString("yyyy-MM-dd hh:mm:ss dddd");
    QLabel * time = new QLabel(&w);
    time->setText(QDateTime::currentDateTime().toString("yyyy-MM-dd hh:mm:ss dddd"));
    time->setGeometry(0,120, 300, 30);
    time->setStyleSheet("color: white;font-family:Microsoft YaHei"); // todo 完成字号、字体设置

    // 更新主窗口显示内容
    w.show();

   return a.exec();
}
