#ifndef ELEMENTSDATABASE_H
#define ELEMENTSDATABASE_H

#include<vector>
#include "element.h"
#include "base.h"

class ElementsDatabase:public  Base
{
public:
    ElementsDatabase();
    virtual ~ElementsDatabase();
    virtual void update(Element new_element) =0;
    virtual void importData(std::istream& in_);
    virtual void exportData(std::ostream& out_);
    virtual void add(Base*) {}
    virtual void readFromFile();
    virtual void writeToFile();
    virtual void readDatabase();
    virtual void writeDatabase();
    virtual void setFileName(std::string file_name);

    void add(Element new_element);
    //JAKO NAZWE MUSI USTAWIAC PLIK W KTORYM BEDZIE MODYFIKOWAL DANE
    //virtual void setName(std::string);

protected:
    std::vector<Element> elements_;
    std::string file_name_;
    //z tego zrobic jakos static
    std::string file_databases_name_="databases.txt";


};

#endif // ELEMENTSDATABASE_H
