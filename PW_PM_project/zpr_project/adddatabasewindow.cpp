#include "adddatabasewindow.h"
#include <QDialogButtonBox>
#include <QFormLayout>
#include <QLabel>
#include "word.h"
#include "picture.h"

AddDatabaseWindow::AddDatabaseWindow(QWidget *parent) : QWidget(parent)
{

    ///jak chcesz to sb odkomentuj i zobacz jak to dziala, to chyba nie do konca pasuje bo
    /// mozna zczytac tylko jeden input ,tu jest fajny przykald jak to mozna zrobic
    /// https://stackoverflow.com/questions/17512542/getting-multiple-inputs-from-qinputdialog-in-qtcreator
   // layout_=new QVBoxLayout();
    //text_edit_=new QInputDialog(this);
    //text_edit_->setText("dodaj nowa baze");
    //text_edit_->append("wpisz nazwe");
   // text_edit_->setVisible(true);
  // input_tekst_=text_edit_->getText(this,tr("QInputDialog::getText()"),
     //                   tr("Nazwa nowej bazy:"));
  // input_tekst_.toStdString();

    ///przyklad dzialania notify to trzeba potem z tą usunąć
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
///wywoluje metode update ktora zapisuje nowy element do danej bazy danych
/// notify() powinna byc wywolywana kiedy uzytkowik klinie "dodaj element"
void AddDatabaseWindow::notify(){
    observer_->update(element_);
}
///zapisuje dana baze w pliku podanym przez uzytkownika (nazwza pliku musi byc zczytana z okienka
/// i przekaza do tej funkcji jako parametr file_name), dodatkowo zapisuje parametry bazy (jej nazwe i plik) do odzielnego pliku
/// co bedzie potrzebe do wyswietlenie tej bazy jako mozliwą do pobrania
void AddDatabaseWindow::writeToFile(std::string file_name){
    observer_->setFileName(file_name);
    observer_->writeToFile();
}
