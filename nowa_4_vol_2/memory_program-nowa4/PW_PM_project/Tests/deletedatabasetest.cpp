#include <QString>
#include <QtTest>
#include "databaseslist.h"
#include "word.h"
#include "element.h"
#include "adddatabaseobserver.h"
class DeleteDatabaseTest : public QObject
{
    Q_OBJECT

public:
    DeleteDatabaseTest();

private Q_SLOTS:
    void readFromFileTest(){}
    void addElementTest(){QCOMPARE(true,true);}
};

DeleteDatabaseTest::DeleteDatabaseTest(){}


QTEST_APPLESS_MAIN(DeleteDatabaseTest)

#include "deletedatabasetest.moc"
