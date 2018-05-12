#include "databaseslist.h"

DatabasesList* DatabasesList::pInstance_=nullptr;

DatabasesList::DatabasesList(){
    //readFromFile();
}

DatabasesList* DatabasesList::getInstance(){
    if(!pInstance_)
        pInstance_=new DatabasesList();
    return pInstance_;

}

DatabasesList:: ~DatabasesList(){
    delete pInstance_;
}

void DatabasesList::add(Base*){}

void DatabasesList::importData(std::istream&){}

void DatabasesList::exportData(std::ostream& out_){
    std::map<std::string,Database>::iterator it =databases_.begin();
    //w map znajduje sie pusty zerowy element trzeba cos z tym zrobic
    ++it;
    while(it != databases_.end()){
        (it->second).exportData(out_);
        ++it;
    }
}
void DatabasesList::readFromFile(){
    std::ifstream if_stream;
    if_stream.open(file_databases_name_);

    if (if_stream.good()) {
        while (true) {
            Database new_database;
            new_database.importData(if_stream);
            databases_.insert(std::make_pair(new_database.getName(),new_database));
            if( if_stream.eof() ) break;
        }
    }
    else
        throw std::exception();
}
void DatabasesList::writeToFile(){
    std::ofstream of_stream;
    of_stream.open(file_databases_name_, std::ios_base::trunc);

    if (of_stream.good()) {
        exportData(of_stream);
        of_stream.close();
    }
    else
        throw std::exception();
}

Database* DatabasesList::findDatabase(std::string database_name){
    if(databases_.find(database_name)!=databases_.end())
        return &(databases_.find(database_name)->second);
    else return nullptr;

}

void DatabasesList::eraseDatabase(std::string database_name){
    Database* temp_database;

    temp_database=findDatabase(database_name);
    if(temp_database!=nullptr){
        temp_database->deleteDatabase();
       databases_.erase(database_name);
    }
}
void DatabasesList::add(Database new_database){
    if(databases_.find(new_database.getName())==databases_.end())
        databases_.insert(std::make_pair(new_database.getName(),new_database));
    else throw std::exception("baza danych o podanej nazwie juz istnieje");
    }
unsigned int DatabasesList::getDatabasesNumber(){
    return static_cast <unsigned int >(databases_.size());
}


