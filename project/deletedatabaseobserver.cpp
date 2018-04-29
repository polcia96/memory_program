#include "deletedatabaseobserver.h"

DeleteDatabaseObserver::DeleteDatabaseObserver(){
    databases_list_=new DatabasesList();
    databases_list_->readFromFile();
}
DeleteDatabaseObserver::~DeleteDatabaseObserver(){
    delete databases_list_;
}

void DeleteDatabaseObserver::update(std::string database_name){
    databases_list_->eraseDatabase(database_name);
    databases_list_->writeToFile();
}

DatabasesList* DeleteDatabaseObserver::getDatabasesList(){return databases_list_;}
