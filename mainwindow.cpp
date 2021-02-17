#include "mainwindow.h"
#include "./ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
    , m_pushButton("Ok",this)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

