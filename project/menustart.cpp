#include "menustart.h"

MenuStart::MenuStart(QWidget *parent) : QWidget(parent)
{
    QTextCodec::setCodecForLocale(QTextCodec::codecForName("UTF-8"));

   layout = new QVBoxLayout();
    setLayout(layout);

    start_learning_button_=new QPushButton(tr("Rozpocznij naukę"));
    add_database_button_ = new QPushButton(tr("Dodaj bazę"));
    delete_database_button_ = new QPushButton(tr("Usuń bazę"));
    exit_button_=new QPushButton(tr("wyjście"));

    layout->addWidget(start_learning_button_);
    layout->addWidget(add_database_button_);
    layout->addWidget(delete_database_button_);
    layout->addWidget(exit_button_);

    connect(start_learning_button_,SIGNAL(clicked()),this,SLOT(openMainWindow()));
    connect(add_database_button_,SIGNAL(clicked()),this,SLOT(openAddDatabaseWindow()));
    connect(delete_database_button_, SIGNAL(clicked()),this,SLOT(openDeleteDatabaseWidnow()));
    connect(exit_button_,SIGNAL(clicked()),this,SLOT(exit_menu()));
}
MenuStart:: ~MenuStart(){
    delete start_learning_button_;
    delete add_database_button_;
    delete delete_database_button_;
    delete exit_button_;
}
void MenuStart::exit_menu(){
    this->close();
}
void MenuStart::openAddDatabaseWindow(){}

void MenuStart::openDeleteDatabaseWidnow(){}

void MenuStart::openMainWindow(){
    this->close();
    main_window_= new MainWindow();
    main_window_->show();
}
