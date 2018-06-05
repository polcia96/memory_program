#include "deletedatabasewindow.h"
#include "ui_deletedatabasewindow.h"

DeleteDatabaseWindow::DeleteDatabaseWindow(QWidget *parent,MenuStart * menu) : QDialog(parent),menu_start_(menu),ui_(new Ui::DeleteDatabaseWindow)
{
    this->setGeometry(700,350,545,379);
    observer_=new DeleteDatabaseObserver();
    ui_->setupUi(this);
    connect(ui_->exit_button,SIGNAL(clicked(bool)),this,SLOT(come_back()));
    connect(ui_->save_button,SIGNAL(clicked(bool)),this,SLOT(save()));

    model_=new QStandardItemModel();
    select_model_ = new QItemSelectionModel();

    showDatabasesList();
    QPixmap pic("choice.jpg");
    ui_->image_label->setScaledContents(true);
    ui_->image_label->setPixmap(pic);


    ui_->listView->setModel( model_ );
    select_model_ =ui_->listView->selectionModel();
}
void DeleteDatabaseWindow::come_back(){
    this->close();
    menu_start_->show();
}
void DeleteDatabaseWindow::save(){
    if(select_model_->hasSelection()){
        QModelIndex row=select_model_->selectedRows().constLast();
        int column=0;
        database_name_=(model_->index(row.row(),column).data(Qt::DisplayRole).toString());
        ui_->save_button->setText(database_name_);

        this->notify();
        this->close();
        menu_start_->show();
    }
}
void DeleteDatabaseWindow::notify(){
        observer_->update(database_name_.toStdString());

}
DeleteDatabaseWindow::~DeleteDatabaseWindow()
{
    delete ui_;
    delete observer_;
    delete select_model_;
    delete model_;
}
void DeleteDatabaseWindow::showDatabasesList(){

    std::vector<std::string> databases_names;
    databases_names=DatabasesList::getInstance()->getDatabasesNames();

    for(int i=1; i<databases_names.size();++i){
        QStandardItem* item;
        item = new QStandardItem();
        QString name= QString::fromStdString(databases_names[i]);
        item->setData( name, Qt::DisplayRole );
        item->setEditable(false );
        model_->appendRow(item);

    }

}
