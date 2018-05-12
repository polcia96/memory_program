#include "deletedatabaseobserver.h"

DeleteDatabaseObserver::DeleteDatabaseObserver(){
    //databases_list_=new DatabasesList();
    DatabasesList::getInstance()->readFromFile();
}
DeleteDatabaseObserver::~DeleteDatabaseObserver(){
    //delete databases_list_;
}

void DeleteDatabaseObserver::update(std::string database_name){
    DatabasesList::getInstance()->eraseDatabase(database_name);
    DatabasesList::getInstance()->writeToFile();
}

