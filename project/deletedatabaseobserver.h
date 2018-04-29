#ifndef DELETEDATABASEOBSERVER_H
#define DELETEDATABASEOBSERVER_H


#include "elementsdatabase.h"
class DeleteDatabaseObserver : public ElementsDatabase
{
public:
    DeleteDatabaseObserver();
    //znajduje baze danych o danej nazwie w pliku databases.txt i ja usuwa
    virtual void update(std::string database_name);
    virtual void eraseFileLine(std::string eraseLine);
};

#endif // DELETEDATABASEOBSERVER_H
