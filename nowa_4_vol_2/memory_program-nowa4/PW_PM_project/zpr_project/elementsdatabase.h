#ifndef ELEMENTSDATABASE_H
#define ELEMENTSDATABASE_H

#include<vector>
#include "element.h"
#include "base.h"
#include "database.h"
#include "word.h"
#include "picture.h"
#include "databaseslist.h"
/*
 * klasa reprezentująca dana baze danych, przechowuje informacje o bazie oraz jej elementy
 * WLASCIWA BAZA DANYCH
 */
class ElementsDatabase
{
public:
    ElementsDatabase();
    ElementsDatabase(std::string database_name);
    virtual ~ElementsDatabase();
    virtual void importData(std::istream& in_);
    virtual void exportData(std::ostream& out_);
    virtual void readFromFile();
    virtual void writeToFile();
    virtual void readDatabase();
    virtual void writeDatabase();
    virtual void setFileName(std::string file_name);
    virtual void setName(std::string name);

    virtual void add(Element new_element);
    virtual void add(Word new_element);
    virtual void add(Picture new_element);

    void setDatabase(Database database);
    unsigned int getElementsToRepeatNumber();
    unsigned int getElementsNumber();
    std::vector <Element> getElementsToRepeat();

protected:
    std::vector<Element> elements_;
    Database database_;
};

#endif // ELEMENTSDATABASE_H
