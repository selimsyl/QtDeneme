#include "mainwindow.h"

#include <QApplication>
#include <QString>
#include <QDebug>
#include <QRect>
#include <iostream>
#include <thread>
#include <chrono>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();

    qDebug() << w.pos();
    using namespace std::chrono_literals;
    std::this_thread::sleep_for(5s);
    w.move(700,209);


    return a.exec();
}
