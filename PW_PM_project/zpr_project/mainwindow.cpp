#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QApplication>



MainWindow::MainWindow()
{

    QTextCodec::setCodecForLocale(QTextCodec::codecForName ("UTF-8"));

    layout_=new QVBoxLayout();
    setLayout(layout_);



    setMinimumSize(200, 200);
    resize(480, 320);
}

void MainWindow::createMenus()
{

}

void MainWindow::createStatusBar()
{
}



