#include "deletedatabaseobserver.h"

DeleteDatabaseObserver::DeleteDatabaseObserver(){
    DatabasesList::getInstance()->readFromFile();
}
DeleteDatabaseObserver::~DeleteDatabaseObserver(){}

void DeleteDatabaseObserver::update(std::string database_name){
    DatabasesList::getInstance()->eraseDatabase(database_name);
    DatabasesList::getInstance()->writeToFile();
}

