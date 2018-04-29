#ifndef DELETEDATABASEOBSERVER_H
#define DELETEDATABASEOBSERVER_H


#include "elementsdatabase.h"
#include "databaseslist.h"
#include <vector>
class DeleteDatabaseObserver : public ElementsDatabase
{
public:
    DeleteDatabaseObserver();
    virtual ~DeleteDatabaseObserver();
    //znajduje baze danych o danej nazwie w pliku databases.txt i ja usuwa
    virtual void update(std::string database_name);
    DatabasesList* getDatabasesList();
private:
    DatabasesList* databases_list_;
};

#endif // DELETEDATABASEOBSERVER_H
