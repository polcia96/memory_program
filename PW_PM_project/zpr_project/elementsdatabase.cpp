#include "elementsdatabase.h"

ElementsDatabase::ElementsDatabase(){}

ElementsDatabase::~ElementsDatabase(){}

void ElementsDatabase::importData(std::istream& in_){
    database_.importData(in_);
    for(unsigned int i=0; i<database_.getElementsNumber(); ++i)
        elements_[i].importData(in_);
}

void ElementsDatabase::exportData(std::ostream& out_){
    database_.exportData(out_);

}

void ElementsDatabase::writeDatabase(){
    std::ofstream of_stream;
    of_stream.open(database_.getFileName(), std::ios_base::app);

    if (of_stream.good()) {

        for(int i=0; i< elements_.size(); ++i)
            elements_[i].exportData(of_stream);

        of_stream.close();
    }
    else
        throw std::exception();
}
//ostatecznie zapisuje wszystko do pliku
void ElementsDatabase::writeToFile(){
   database_.writeToFile(database_.getDatabasesFileName());
   writeDatabase();
}
//ostatecznie ma odczytac wszystko z pliku
void ElementsDatabase::readFromFile(){
    database_.readFromFile(database_.getDatabasesFileName());

}

void ElementsDatabase::readDatabase(){
    std::ifstream if_stream;
    if_stream.open(database_.getFileName());

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
void ElementsDatabase::add(Word new_word){
    Element temp;
    temp.add(new_word);
    elements_.push_back(temp);
}

void ElementsDatabase::add(Picture new_element){
    Element temp;
    temp.add(new_element);
    elements_.push_back(temp);
}

void ElementsDatabase::setFileName(std::string file_name){
    database_.setFileName(file_name);
}
void ElementsDatabase::setDatabase(Database database){
    database_=database;
}
void ElementsDatabase::setName(std::string name){
    database_.setName(name);
}
unsigned int ElementsDatabase::getElementsNumber(){
    return elements_.size();
}
