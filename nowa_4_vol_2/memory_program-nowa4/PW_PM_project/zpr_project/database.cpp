#include "database.h"

Database::Database(std::string name){
    name_=name;
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
bool Database::deleteDatabase(){
    if(remove(file_name_.c_str())==0)
        return true;
    else
        return false;
}
/*
void Database::writeToFile(std::string file_name) {
    if(DatabasesList::getInstance()->findDatabase(this->name_)==nullptr){
        std::ofstream of_stream;
        of_stream.open(file_name, std::ios_base::app);

        if (of_stream.good()) {
            exportData(of_stream);
            of_stream.close();
        }
        else
            throw std::exception();
        }
    else throw std::exception("taka baza juz istnieje (o takiej nazwie)");
}
*/
std::string Database::getFileName(){return file_name_;}

std::string Database::getDatabasesFileName(){return file_databases_name_; }

void Database::setFileName(std::string file_name){file_name_=file_name; }

void Database::increaseElementsNumber(){++elements_number_;}
unsigned int Database::getElementsNumber(){return elements_number_;}
