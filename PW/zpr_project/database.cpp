#include "database.h"

Database::Database(std::string name){
    name_=name;
    elements_number_=0;
    setDefaultFileName();
}
void Database::importData(std::istream& in_){
    in_.ignore(std::numeric_limits<std::streamsize>::max(), '>');
    in_.ignore(std::numeric_limits<std::streamsize>::max(), '=');
    in_  >> name_;

    in_.ignore(std::numeric_limits<std::streamsize>::max(), '=');
    in_ >>file_name_;

    in_.ignore(std::numeric_limits<std::streamsize>::max(), '=');
    in_>> elements_number_;
}

void Database::exportData(std::ostream& out_){
    out_<<"<database>" <<std::endl;
    out_<<"name=" <<name_ <<std::endl;
    out_<<"name_file=" <<file_name_ <<std::endl;
    out_<<"elements_number=" <<elements_number_ <<std::endl;
}
bool Database::deleteDatabase(){
    if(remove(file_name_.c_str())==0)
        return true;
    else
        return false;
}

std::string Database::getFileName(){return file_name_;}
void Database::setDefaultFileName(){
    std::string file_name=name_+".txt";
    file_name_=file_name;
}
std::string Database::getDatabasesFileName(){return file_databases_name_; }

void Database::setFileName(std::string file_name){file_name_=file_name; }

void Database::increaseElementsNumber(){++elements_number_;}
unsigned int Database::getElementsNumber(){return elements_number_;}
