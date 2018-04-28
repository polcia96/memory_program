#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QApplication>



MainWindow::MainWindow(std::string name)
{

    QTextCodec::setCodecForLocale(QTextCodec::codecForName ("UTF-8"));

    layout_=new QHBoxLayout();
    setLayout(layout_);

    name_=name;
    createMenus();
    createStatusBar();

    //label_=new QLabel(tr("&aaa"),this);
    //label_->setGeometry(5, 5, 150, 30);

    //layout_->addWidget(label_);
    setMinimumSize(200, 200);
    resize(480, 320);
}

void MainWindow::createMenus()
{

    menu_ = menuBar()->addMenu(tr("&Menu"));

    add_database_=new QAction(tr("&dodaj nową baze"),this);
    add_database_->setStatusTip(tr("Dodaj nową bazę to swojego katalogu powtorek"));

    delete_database_=new QAction(tr("&usuń bazę"));
    delete_database_->setStatusTip("Usuń baze ze swojego katalogu powtórek");

    quit_ = new QAction(tr("&Wyjście"), this);
    quit_->setStatusTip(tr("Wyjdź z programu."));

    connect (quit_, SIGNAL(triggered()), qApp, SLOT(quit()));
    connect (add_database_,SIGNAL(triggered()),this,SLOT(foo()));

    menu_->addAction(add_database_);
    menu_ ->addAction(delete_database_);
    menu_ ->addAction(quit_);
}

void MainWindow::createStatusBar()
{
    statusBar()->showMessage(tr("Gotowy"));
}
//sprawdzalam jak to dziala
/*
void MainWindow::foo(){
    label_->setText(tr(name_.c_str()));

}
*/
