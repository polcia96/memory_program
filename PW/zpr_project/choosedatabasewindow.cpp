#include "choosedatabasewindow.h"
#include "ui_choosedatabasewindow.h"

ChooseDatabaseWindow::ChooseDatabaseWindow(QWidget *parent, MenuStart * menu, MainWin *main_win) : QWidget(parent), menu_start_(menu),main_window_(main_win), ui(new Ui::ChooseDatabaseWindow)
{
    ui->setupUi(this);
    connect(ui->exit_button,SIGNAL(clicked(bool)),this,SLOT(come_back()));
    connect(ui->save_button,SIGNAL(clicked(bool)),this,SLOT(save()));


    model_=new QStandardItemModel();
    select_model_ = new QItemSelectionModel();

    showDatabasesList();

    ui->listView->setAutoScroll(true);
    ui->listView->setContentsMargins(20,10,0,0);

    ui->listView->setModel( model_ );
    select_model_ =ui->listView->selectionModel();

    QPixmap pic("choice.jpg");
    ui->image_label->setScaledContents(true);
    ui->image_label->setPixmap(pic);


}
void ChooseDatabaseWindow::come_back(){
    this->close();
    menu_start_->show();
}
void ChooseDatabaseWindow::save(){

     if(select_model_->hasSelection()){
           QModelIndex row=select_model_->selectedRows().constLast();
           int column=0;
           database_name_=(model_->index(row.row(),column).data(Qt::DisplayRole).toString());
           ui->save_button->setText(database_name_);

            main_window_=new MainWin(nullptr,menu_start_);
            main_window_->setRepetition(database_name_);
            if(main_window_->getState())
            main_window_->show();
            this->close();

    }
     else{
         std::string std_text="Wybierz bazę!";
         QString message_text=QString::fromStdString(std_text);
         showMessageWindow(message_text);
     }
}

ChooseDatabaseWindow::~ChooseDatabaseWindow()
{
    delete model_;
    delete select_model_;
    delete ui;
}
void ChooseDatabaseWindow::showDatabasesList(){

    std::vector<std::string> databases_names;
    DatabasesList::getInstance()->readFromFile();
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
int ChooseDatabaseWindow::showMessageWindow(QString info_text){
    QMessageBox msgBox;
    msgBox.setText(info_text);
    msgBox.setStandardButtons(QMessageBox::Save);
    msgBox.setButtonText(QMessageBox::Save,"OK");
    msgBox.setDefaultButton(QMessageBox::Save);
    int ret = msgBox.exec();
    return ret;
}
