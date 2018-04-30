#include "adddatabasewindow.h"
#include <QDialogButtonBox>
#include <QFormLayout>
#include <QLabel>
#include "word.h"
#include "picture.h"

AddDatabaseWindow::AddDatabaseWindow(QWidget *parent) : QWidget(parent)
{

   observer_=new AddDatabaseObserver();
   observer_->setName("mojaBaza");

   Word word_1;
   Picture picture_1;
   std::string file_name = "word.txt";
    try{
        word_1.readFromFile(file_name);
        picture_1.readFromFile(file_name);
   }
   catch (const std::exception& e) {

      std::cout << e.what() << "blad odczytu/zapisu z/do pliku";
   }
  Element el;
  el.add(word_1);
  el.add(picture_1);
  element_=el;
   notify();
}

void AddDatabaseWindow::notify(){
    observer_->update(element_);
}

void AddDatabaseWindow::writeToFile(std::string file_name){
    observer_->setFileName(file_name);
    observer_->writeToFile();
}
