#include "mainwin.h"
#include "menustart.h"
#include "ui_mainwin.h"

MainWin::MainWin(QWidget *parent, MenuStart * win) : QMainWindow(parent),win_(win), ui(new Ui::MainWin)
{
    ui->setupUi(this);
    connect(ui->pushButton_3, SIGNAL(clicked(bool)),this, SLOT(end_learn()));
}

MainWin::~MainWin()
{
    delete ui;
}

void MainWin::know()
{
    //increaseRememberingRate
}

void MainWin::do_not_know()
{
 //decreaseRemeberingRate
}

void MainWin::end_learn()
{
    this->hide();
    win_->show();
}

