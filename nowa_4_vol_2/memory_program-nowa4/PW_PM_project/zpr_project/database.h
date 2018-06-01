#ifndef DATABASE_H
#define DATABASE_H

#include "base.h"
/*
 * klasa przechowująca informacje o danej bazie danych
 */
class Database : public Base
{
public:
    Database(std::string name=" ");
    virtual ~Database(){}
    virtual void importData(std::istream& in_);
    virtual void exportData(std::ostream& out_);
    virtual void add(Base*){}
   // virtual void writeToFile(std::string file_name);

    std::string getFileName();
    void setFileName(std::string file_name);
    std::string getDatabasesFileName();
    void increaseElementsNumber();
    unsigned int getElementsNumber();
    bool deleteDatabase();

private:
    std::string file_name_;
    //do zmiany
    std::string file_databases_name_="databases.txt";
    unsigned int elements_number_;
};

#endif // DATABASE_H
