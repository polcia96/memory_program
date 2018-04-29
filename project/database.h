#ifndef DATABASE_H
#define DATABASE_H

#include "base.h"

class Database : public Base
{
public:
    Database();
    virtual void importData(std::istream& in_);
    virtual void exportData(std::ostream& out_);
    virtual void add(Base*){}
    virtual std::string getFileName();
    void setFileName(std::string file_name);
    std::string getDatabasesFileName();
    void increaseElementsNumber();
    unsigned int getElementsNumber();


private:
    std::string file_name_;
    //z tego zrobic jakos static
    std::string file_databases_name_="databases.txt";
    unsigned int elements_number_;
};

#endif // DATABASE_H
