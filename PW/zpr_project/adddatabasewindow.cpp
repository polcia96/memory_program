#include "adddatabasewindow.h"
//#include "menustart.h"
#include "ui_adddatabasewindow.h"

AddDatabaseWindow::AddDatabaseWindow(QWidget *parent, MenuStart * menu) : QWidget(parent), menu(menu), ui(new Ui::AddDatabaseWindow)
{

    try{
        observer_ = new AddDatabaseObserver();
        ui->setupUi(this);

        QPixmap pic("adding.png");
        ui->image_label->setScaledContents(true);
        ui->image_label->setPixmap(pic);

        observer_ ->setName(database_name_);
        observer_ ->setDefaultFileName();

        connect(ui->pushButton_2,SIGNAL(clicked(bool)),this,SLOT(save()));
        connect(ui->pushButton, SIGNAL(clicked(bool)),this,SLOT(come_back()));
        connect(ui->choose_picture_button,SIGNAL(clicked(bool)),this,SLOT(choose_picture()));
        }
    catch (const std::exception& e){
       std::cout << e.what() << "blad odczytu/zapisu z/do pliku";
    }
}

void AddDatabaseWindow::save()
{
   QString text = ui->lineEdit->text();
   QString text_1 = ui->lineEdit_2->text();
   QString text_2 = ui->plainTextEdit->toPlainText();

   Word word;
   if(text.toStdString()!=""){
        word.setName(text.toStdString());
        word.setNativeWord(text.toStdString());
   }

   if(text_1.toStdString()!="")
      word.setForeignWord(text_1.toStdString());
   if(text_2.toStdString()!="")
      word.setTranslation(text_2.toStdString());

   element.setWord(word);


   this->notify();

   ui->lineEdit->clear();
   ui->lineEdit_2->clear();
   ui->plainTextEdit->clear();

}
void AddDatabaseWindow::choose_picture(){
    QString q_file_name;
    q_file_name = QFileDialog::getOpenFileName(this,
        tr("Open Image"), "/home/jana", tr("Image Files (*.png *.jpg *.bmp)"));
    std::string path=q_file_name.toStdString();
    Picture new_picture;
    new_picture.setPath(path);
    element.setPicture(new_picture);
}

void AddDatabaseWindow::come_back()
{
   observer_->setDefaultFileName();
   this->writeToFile(observer_->getDefaultFileName());
   this->close();
   menu->show();

}

AddDatabaseWindow::~AddDatabaseWindow()
{
    delete observer_;
    delete ui;
}

void AddDatabaseWindow::notify()
{
    observer_->update(element);
}

void AddDatabaseWindow::writeToFile(std::string file_name)
{
    observer_->setFileName(file_name);
    observer_->writeToFile();
}
bool AddDatabaseWindow::setDatabaseName(std::string new_name){
    database_name_=new_name;
    observer_ = new AddDatabaseObserver();
    observer_ ->setName(database_name_);
    if((observer_->getName()!="none") && (observer_->getName()!="")){
        observer_ ->setDefaultFileName();
        return true;
    }
    else{

        return false;
    }

}


