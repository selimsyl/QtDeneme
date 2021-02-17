#include "mainwindow.h"

#include <QApplication>
#include <QString>
#include <QDebug>
#include <QRect>
#include <iostream>
#include <thread>
#include <chrono>
#include <QMessageBox>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();

    qDebug() << w.pos();
    using namespace std::chrono_literals;
//    std::this_thread::sleep_for(5s);
    w.move(700,209);
    qDebug() << w.rect();

    QMessageBox mb{};

    mb.setWindowTitle("Cok gizli bir islem");
    mb.setText("Ne yapmak istersiniz");
    mb.setStandardButtons(QMessageBox::Yes | QMessageBox::No | QMessageBox::Cancel);
    mb.setIcon(QMessageBox::Critical);

    mb.exec();

    return a.exec();
}
