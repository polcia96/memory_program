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
    Database database("emptyDatabase");
    database.setFileName("emptyDatabase.txt");
    DatabasesList list;

    try{
        list.readFromFile();
    }
    catch(std::exception e){}
    Database* data_ptr= list.findDatabase("emptyDatabase");
    Database second_database=*data_ptr;
    QCOMPARE(database.getName(),second_database.getName());

}

void Test::addElementTest(){

    Word word;
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
    Database database("firstDatabase");
    DatabasesList databases_list;
    databases_list.add(database);

    databases_list.eraseDatabase("firstDatabase");

    unsigned int elements_number=0;

    QCOMPARE(elements_number,databases_list.getDatabasesNumber());
}

QTEST_APPLESS_MAIN(Test)

#include "test.moc"
