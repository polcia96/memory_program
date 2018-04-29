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
    string file_name = "word.txt";
    DatabasesList list;

     try{
         word_1.readFromFile(file_name);
         picture_1.readFromFile(file_name);
         list.readFromFile();
         cout<<"bazy przed usunieciem nowaBaza2"<<endl;
         list.exportData(cout);
    }
    catch (const std::exception& e) {

        cout << e.what() << "blad odczytu/zapisu z/do pliku";
    }
   Element el;
   el.add(&word_1);
   el.add(&picture_1);
   el.exportData(std::cout);
   el.writeToFile("element.txt");
   QApplication a(argc, argv);

   //MainWindow w(word_1.getName());
   //w.show();
    MenuStart start;
    start.show();

    ///deleteDatabaseObserver test
    /// w odpowiednim oknie trzeba napisac metode notify(std::string..) ktora wywoluje update
    /// czyli analogicznie jak addDatabaseWindows
    DeleteDatabaseObserver * ob =new DeleteDatabaseObserver();
    ob->update("mojaBaza");
    cout<<"bazy po usunieciu nowaBaza2"<<endl;
    ob->getDatabasesList()->exportData(cout);


   return a.exec();
}
