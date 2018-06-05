#include "getdatabasenamewindow.h"
#include "ui_getdatabasenamewindow.h"

GetDatabaseNameWindow::GetDatabaseNameWindow(AddDatabaseWindow * add_data_window,QWidget *parent, MenuStart* menu_start) :
    add_data_window_(add_data_window),
    QDialog(parent),
    menu_start_(menu_start),
    ui(new Ui::GetDatabaseNameWindow)
{
    ui->setupUi(this);

    connect(ui->add_button,SIGNAL(clicked(bool)),this,SLOT(save_name()));
    connect(ui->come_back_button,SIGNAL(clicked(bool)),this,SLOT(come_back()));
}

GetDatabaseNameWindow::~GetDatabaseNameWindow(){
    delete ui;
}

void GetDatabaseNameWindow::come_back(){
    menu_start_->show();
    this->close();


}
void GetDatabaseNameWindow::save_name(){
    QString q_name;
    q_name=ui->lineEdit->text();
    std::string std_name=q_name.toStdString();
    std::cout<<std_name;

    if(add_data_window_->setDatabaseName(std_name)){
        add_data_window_->show();
        this->close();
    }
    else{
        std::string std_text="Błędna nazwa bazy!";
        QString message_text=QString::fromStdString(std_text);
        int ret=showMessageWindow(message_text);
        doChoosenAction(ret);
    }

}

int GetDatabaseNameWindow::showMessageWindow(QString info_text){
    QMessageBox msgBox;
    msgBox.setText(info_text);
    msgBox.setInformativeText("Podaj poprawną nazwę bazy");
    msgBox.setStandardButtons(QMessageBox::Save|QMessageBox::Cancel );
    msgBox.setDefaultButton(QMessageBox::Save);
    msgBox.setButtonText(QMessageBox::Save, "Ustaw poprawną nazwę");
    msgBox.setButtonText(QMessageBox::Cancel, "Wyjście" );
    int ret = msgBox.exec();
    return ret;
}
void GetDatabaseNameWindow::doChoosenAction(int action){
    switch (action) {
      case QMessageBox::Save:
        ui->lineEdit->clear();
        break;
      case QMessageBox::Cancel:
        menu_start_->show();
        this->close();
        break;
      default:
          break;
    }
}
