#include <QApplication>
#include "base.h"
#include "picture.h"
#include "word.h"
#include "element.h"
#include "menustart.h"
#include "databaseslist.h"
#include "deletedatabaseobserver.h"
#include "repetition.h"

using namespace std;

int main(int argc, char *argv[])
{
    Word word_1;
    word_1.setNativeWord("kot");
    word_1.setForeignWord("cat");
    word_1.setName("kot");
    word_1.setTranslation("kicia");
    Picture picture_1;
    Element element;
    element.add(word_1);
    element.add(picture_1);

    string file_name = "word.txt";
    Database first_database("firstDatabase");
    first_database.setFileName("firstDatabase.txt");
    Database empty_database("emptyDatabase");
    empty_database.setFileName("emptyDatabase.txt");

    ElementsDatabase first_data("firstDatabase");
    first_data.setDatabase(first_database);
    ElementsDatabase second_data("emptyDatabase");
    second_data.setDatabase(empty_database);

     try{
        word_1.writeToFile(file_name);
        /*
         * zczytanie danych z pliku
         */
                // word_1.readFromFile(file_name);
                 //picture_1.readFromFile(file_name);
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
                 DatabasesList::getInstance()->readFromFile();
                 cout<<"bazy przed usunieciem emptyDatabase"<<endl;
                 DatabasesList::getInstance()->exportData(cout);

                 Database* data=DatabasesList::getInstance()->findDatabase("firstDatabase");
                 //cout<<"zawartosc bazy:"<<std::endl;
                 //data->exportData(cout);
                 ElementsDatabase my_data;
                 my_data.setDatabase(*data);
                 my_data.readFromFile();
                 cout<<"zawartosc bazy:"<<std::endl;
                 my_data.exportData(cout);
    }
    catch (const std::exception& e) {
        cout << e.what() << "blad odczytu/zapisu z/do pliku";
    }
//   Element el;
//   el.add(word_1);
//   el.add(picture_1);
//   el.exportData(std::cout);
//   el.writeToFile("element.txt");

   // QApplication a(argc, argv);
   // MenuStart start;
   // start.show();

//    DeleteDatabaseObserver * ob =new DeleteDatabaseObserver();
//    ob->update("emptyDatabase");
//    cout<<"bazy po usunieciu emptyDatabase"<<endl;
//    DatabasesList::getInstance()->exportData(cout);


   //return a.exec();
    /*
     *nie moze byc dwoch list o tej samej nawzwie, wiec nawet jak zostana one zapisane do pliku
     * to ich nie odczyta
     */
    cout<<"**********WYSWIETLANIE LISTY**************"<<std::endl;
    std::vector <string> names;
    names=DatabasesList::getInstance()->getDatabasesNames();
    for(int i=0; i<names.size();++i)
        cout<<names[i]<<std::endl;

    std::cout<<"ilosc do powtorki: "<<first_data.getElementsToRepeatNumber()<<std::endl;
    std::cout<<"ilosc elementow: "<<first_data.getElementsNumber()<<std::endl;

    Repetition rep("firstDatabase");
    std::vector <Element> reps;
    reps=rep.getCurrentRepetitions();
    cout<<"ELEMENTY DO POWTORKI"<<std::endl;
    cout<<reps.size();
    for(int i=0; i<reps.size();++i)
        reps[i].exportData(cout);


}