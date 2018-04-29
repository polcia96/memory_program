#include "elementsdatabase.h"

ElementsDatabase::ElementsDatabase(){}

ElementsDatabase::~ElementsDatabase(){}

//do poprawy //
void ElementsDatabase::importData(std::istream& in_){
    in_.ignore(std::numeric_limits<std::streamsize>::max(), '>');
    in_.ignore(std::numeric_limits<std::streamsize>::max(), '=');
    in_  >> name_;

    in_.ignore(std::numeric_limits<std::streamsize>::max(), '=');
    in_ >>file_name_;
}

void ElementsDatabase::exportData(std::ostream& out_){
    out_<<"<database>" <<std::endl;
    out_<<"name=" <<name_ <<std::endl;
    out_<<"name_file =" <<file_name_ <<std::endl;

}

void ElementsDatabase::writeDatabase(){
    std::ofstream of_stream;
    of_stream.open(file_name_, std::ios_base::app);

    if (of_stream.good()) {

        for(int i=0; i< elements_.size(); ++i)
            elements_[i].exportData(of_stream);

        of_stream.close();
    }
    else
        throw std::exception();
}

void ElementsDatabase::writeToFile(){
   Base::writeToFile(file_databases_name_);
   writeDatabase();
}
//TODO:
void ElementsDatabase::readFromFile(){}

void ElementsDatabase::readDatabase(){
    std::ifstream if_stream;
    if_stream.open(file_name_);

    if (if_stream.good()) {
        for(int i=0; i< elements_.size(); ++i)
            elements_[i].importData(if_stream);
        if_stream.close();
    }
    else
        throw std::exception();
}
void ElementsDatabase::add(Element new_element){
    elements_.push_back(new_element);
}

void ElementsDatabase::setFileName(std::string file_name){
    file_name_=file_name;
}
