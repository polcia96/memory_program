#ifndef DATABASE_H
#define DATABASE_H

#include "base.h"
/*
 * klasa przechowująca informacje o danej bazie danych
 */
/*!
 * \brief Klasa Database przechowuje informacje i parametry danej bazy danych
 */
class Database : public Base
{
public:
    Database(std::string name=" ");
    virtual ~Database(){}
    virtual void importData(std::istream& in_);
    virtual void exportData(std::ostream& out_);
    virtual void add(Base*){}

    std::string getFileName();
    void setFileName(std::string file_name);
    void setDefaultFileName();
    std::string getDatabasesFileName();
    void increaseElementsNumber();
    unsigned int getElementsNumber();
    bool deleteDatabase();

private:
    std::string file_name_;
    std::string file_databases_name_="databases.txt";
    unsigned int elements_number_;
};

#endif // DATABASE_H
