#include "messagewindow.h"
#include "ui_messagewindow.h"

MessageWindow::MessageWindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::MessageWindow)
{
    ui->setupUi(this);
    //ui->textBrowser->setFontPointSize(12);
    //ui->label->
    connect(ui->exit_button,SIGNAL(clicked(bool)),this,SLOT(exit()));
    connect(ui->return_button,SIGNAL(clicked(bool)),this,SLOT(come_back()));


}
void MessageWindow::exit(){
   // menu_->close();
    this->close();
}
void MessageWindow::come_back(){
    this->close();
    //choose_win_->show();
}
MessageWindow::~MessageWindow()
{
    delete ui;
  //  delete menu_;
}
void MessageWindow::setText(QString text){
    ui->label->setText(text);
}
