#include "adddatabasewindow.h"
#include "menustart.h"
#include "ui_adddatabasewindow.h"

AddDatabaseWindow::AddDatabaseWindow(QWidget *parent, MenuStart * menu) : QWidget(parent), menu(menu), ui(new Ui::AddDatabaseWindow)
{

    try{
        this->setGeometry(700,350,545,379);
        observer_ = new AddDatabaseObserver();
        ui->setupUi(this);
        observer_ ->setName("mojaBaza");
        connect(ui->pushButton_2,SIGNAL(clicked(bool)),this,SLOT(save()));
        connect(ui->pushButton, SIGNAL(clicked(bool)),this,SLOT(come_back()));
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
   QString text_3 = ui->plainTextEdit_2->toPlainText();

   Word word;
   word.setName(text.toStdString());
   word.setNativeWord(text.toStdString());
   word.setForeignWord(text_1.toStdString());
   word.setTranslation(text_2.toStdString());

   element.setWord(word);


   this->notify();
   this->writeToFile("HELLO.txt");

   ui->lineEdit->clear();
   ui->lineEdit_2->clear();
   ui->plainTextEdit->clear();
   ui->plainTextEdit_2->clear();

}

void AddDatabaseWindow::come_back()
{
   this->close();
   menu->show();
}

AddDatabaseWindow::~AddDatabaseWindow()
{
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
