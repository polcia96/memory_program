#include <QString>
#include <QtTest>
#include "databaseslist.h"
#include "word.h"
#include "element.h"
#include "adddatabaseobserver.h"
#include "deletedatabaseobserver.h"
class Test : public QObject
{
    Q_OBJECT

public:
    Test();

private Q_SLOTS:
    void readFromFileTest();
    void addElementTest();
    void deleteDatabaseTest();
};

Test::Test()
{
}

void Test::readFromFileTest()
{
    Database database("animals");
    database.setFileName("animals.txt");

    try{
        DatabasesList::getInstance()->readFromFile();
    }
    catch(std::exception e){}
    Database* data_ptr= DatabasesList::getInstance()->findDatabase("animals");
    Database second_database=*data_ptr;
    QCOMPARE(database.getName(),second_database.getName());

}

void Test::addElementTest(){

    Word word("nowy","new_el","nowiutki");
    Element element;
    element.add(word);

    AddDatabaseObserver* observer =new AddDatabaseObserver();
    Database database;

    observer->setDatabase(database);
    observer->update(element);

    unsigned int elements_number=1;

    QCOMPARE(elements_number,(observer->getElementsNumber()));

    delete observer;
}

void Test::deleteDatabaseTest(){
    Database database("databaseToDelete");

    unsigned int elements_number=DatabasesList::getInstance()->getDatabasesNumber();
    try{
    DatabasesList::getInstance()->add(database);
    DatabasesList::getInstance()->eraseDatabase("databaseToDelete");
    QCOMPARE(elements_number,DatabasesList::getInstance()->getDatabasesNumber());

    }
    catch(std::exception e){}
}

QTEST_APPLESS_MAIN(Test)

#include "test.moc"
