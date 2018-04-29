#include "database.h"

Database::Database(){
    elements_number_=0;
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
std::string Database::getFileName(){return file_name_;}

std::string Database::getDatabasesFileName(){return file_databases_name_; }

void Database::setFileName(std::string file_name){file_name_=file_name; }

void Database::increaseElementsNumber(){++elements_number_;}
unsigned int Database::getElementsNumber(){return elements_number_;}
