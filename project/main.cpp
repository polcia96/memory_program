#include "mainwindow.h"
#include <QApplication>
#include "base.h"
#include "picture.h"
#include "word.h"
#include "element.h"
#include "menustart.h"

using namespace std;

int main(int argc, char *argv[])
{

    Word word_1;
    Picture picture_1;
    string file_name = "word.txt";
     try{
         word_1.readFromFile(file_name);
         picture_1.readFromFile(file_name);
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


   return a.exec();
}
