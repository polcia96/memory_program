#include "mainwindow.h"
#include <QApplication>
#include "base.h"
#include "picture.h"
#include "word.h"
#include "element.h"
#include "menustart.h"
#include "databaseslist.h"
#include "deletedatabaseobserver.h"

using namespace std;

int main(int argc, char *argv[])
{

    Word word_1;
    Picture picture_1;
    Element element;
    element.add(word_1);
    element.add(picture_1);
    string file_name = "word.txt";

    Database first_database("firstDatabase");
    first_database.setFileName("firstDatabase.txt");
    Database empty_database("emptyDatabase");
    empty_database.setFileName("emptyDatabase.txt");

    ElementsDatabase first_data;
    first_data.setDatabase(first_database);
    ElementsDatabase second_data;
    second_data.setDatabase(empty_database);

    DatabasesList list;

     try{
        /*
         * zczytanie danych z pliku
         */
         word_1.readFromFile(file_name);
         picture_1.readFromFile(file_name);
         /*
          * dodanie danych do bazy
          */
         first_data.add(word_1);
         first_data.add(picture_1);
         /*
          *zapis baz
          */
         first_data.writeToFile();
         second_data.writeToFile();
         /*
          *wczytanie baz
          */
         list.readFromFile();
         cout<<"bazy przed usunieciem emptyDatabase"<<endl;
         list.exportData(cout);
    }
    catch (const std::exception& e) {
        cout << e.what() << "blad odczytu/zapisu z/do pliku";
    }
   Element el;
   el.add(word_1);
   el.add(picture_1);
   el.exportData(std::cout);
   el.writeToFile("element.txt");
   QApplication a(argc, argv);

   //MainWindow w(word_1.getName());
   //w.show();
    MenuStart start;
    start.show();

    DeleteDatabaseObserver * ob =new DeleteDatabaseObserver();
    ob->update("firstDatabase");
    cout<<"bazy po usunieciu firstDatabase"<<endl;
    ob->getDatabasesList()->exportData(cout);


   return a.exec();
}