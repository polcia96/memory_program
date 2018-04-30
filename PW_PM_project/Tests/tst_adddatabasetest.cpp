#include <QString>
#include <QtTest>

class AddDatabaseTest : public QObject
{
    Q_OBJECT

public:
    AddDatabaseTest();

private Q_SLOTS:
    void test1();
};

AddDatabaseTest::AddDatabaseTest()
{
}

void AddDatabaseTest::test1()
{
    QVERIFY2(true, "Failure");
}

QTEST_APPLESS_MAIN(AddDatabaseTest)

#include "tst_adddatabasetest.moc"
