#include "databaseslist.h"

DatabasesList::DatabasesList(){
    //do rozwazenia czy ma tu byc czy nie
   // readFromFile();
}
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
    of_stream.open(file_databases_name_);

    if (of_stream.good()) {
        exportData(of_stream);
        of_stream.close();
    }
    else
        throw std::exception();
}

DatabaseIterator DatabasesList::findDatabase(std::string database_name){
    if(databases_.find(database_name)!=databases_.end())
        return databases_.find(database_name);
    else throw std::exception();

}

void DatabasesList::eraseDatabase(std::string database_name){
    //zabezpieczyc jak nie ma jakiegos klucza
    databases_.erase(database_name);
}