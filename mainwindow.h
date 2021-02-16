#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QPushButton>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    auto get_pushButtonCordinates();
signals:

public slots:

private:
    Ui::MainWindow *ui;
    QPushButton m_pushButton;
};
#endif // MAINWINDOW_H
