#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QApplication>



MainWindow::MainWindow()
{

    QTextCodec::setCodecForLocale(QTextCodec::codecForName ("UTF-8"));

    layout_=new QVBoxLayout();
    setLayout(layout_);

    //createMenus();
    //createStatusBar();

    //label_=new QLabel(tr("&aaa"),this);
    //label_->setGeometry(5, 5, 150, 30);


    setMinimumSize(200, 200);
    resize(480, 320);
}

void MainWindow::createMenus()
{

   //menu_ = menuBar()->addMenu(tr("&Menu"));

}

void MainWindow::createStatusBar()
{
    //statusBar()->showMessage(tr("Gotowy"));
}
//sprawdzalam jak to dziala


