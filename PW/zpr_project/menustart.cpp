#include "menustart.h"
#include "ui_menustart.h"

MenuStart::MenuStart(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::MenuStart)
{
    ui->setupUi(this);

       add_database_window_=new AddDatabaseWindow(nullptr,this);
       delete_database_window_= new DeleteDatabaseWindow(nullptr,this);
       main_window_= new MainWin(nullptr,this);
       choose_database_window_=new ChooseDatabaseWindow(nullptr,this,main_window_);
       get_database_window_=new GetDatabaseNameWindow(add_database_window_,nullptr,this);

    connect(ui->start_learning_button_,SIGNAL(clicked()),this,SLOT(openChooseDatabaseWindow()));
    connect(ui->add_database_button_,SIGNAL(clicked()),this,SLOT(openAddDatabaseWindow()));
    connect(ui->delete_database_button_, SIGNAL(clicked()),this,SLOT(openDeleteDatabaseWidnow()));
    connect(ui->exit_button_,SIGNAL(clicked()),this,SLOT(exit_menu()));

    QPixmap pic("cat.jpg");
    ui->image_label->setScaledContents(true);
    ui->image_label->setPixmap(pic);

}

MenuStart::~MenuStart()
{
    delete add_database_window_;
    delete delete_database_window_;
    delete choose_database_window_;
    delete main_window_;
    delete get_database_window_;
    delete ui;
}


void MenuStart::exit_menu(){
this->close();
}
void MenuStart::openAddDatabaseWindow(){

this->hide();
get_database_window_=new GetDatabaseNameWindow(add_database_window_,nullptr,this);
get_database_window_->show();
}

void MenuStart::openDeleteDatabaseWidnow(){
this->hide();
delete_database_window_= new DeleteDatabaseWindow(nullptr,this);
delete_database_window_->show();

}

void MenuStart::openMainWindow(){
this->hide();
main_window_= new MainWin(nullptr,this);
main_window_->show();
}

void MenuStart::openChooseDatabaseWindow(){
this->hide();
choose_database_window_=new ChooseDatabaseWindow(nullptr,this,main_window_);
choose_database_window_->show();
}

void MenuStart::setDatabaseName(std::string name){
database_name_=name;
}
