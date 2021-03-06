#ifndef DATABASESLIST_H
#define DATABASESLIST_H

#include "base.h"
#include "database.h"
#include <map>

typedef std::map<std::string,Database>::iterator DatabaseIterator;

/*!
 * \brief Klasa przechowująca liste dostępnych baz danych
 */
class DatabasesList : public Base
{

public:
    static DatabasesList* getInstance();
    virtual ~DatabasesList();
    virtual void importData(std::istream& in_);
    virtual void exportData(std::ostream& out_);
    virtual void readFromFile();
    virtual void writeToFile();
    virtual void add(Base*);
    virtual void add(Database new_database);
    virtual unsigned int getDatabasesNumber();

    std::vector <std::string> getDatabasesNames();


    Database* findDatabase(std::string database_name);
    void eraseDatabase(std::string database_name);
private:

    std::map <std::string,Database> databases_;
    std::string file_databases_name_="databases.txt";

    static DatabasesList* pInstance_;
    DatabasesList();
    DatabasesList(const DatabasesList&) = delete;
    DatabasesList& operator=(const DatabasesList&) = delete;
};

#endif // DATABASESLIST_H
