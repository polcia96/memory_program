#include "elementsdatabase.h"

ElementsDatabase::ElementsDatabase(){}

ElementsDatabase::ElementsDatabase(std::string database_name){
    database_.setName(database_name);
    //readFromFile();
}

ElementsDatabase::~ElementsDatabase(){}

void ElementsDatabase::importData(std::istream& in_){
    database_.importData(in_);
    for(unsigned int i=0; i<database_.getElementsNumber(); ++i){
        Element new_element;
        new_element.importData(in_);
        elements_.push_back(new_element);
    }
}

void ElementsDatabase::exportData(std::ostream& out_){
    database_.exportData(out_);
    for(unsigned int i=0; i<elements_.size(); ++i)
        elements_[i].exportData(out_);

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
    if(DatabasesList::getInstance()->findDatabase(database_.getName())==nullptr){
        database_.writeToFile(database_.getDatabasesFileName());
        writeDatabase();
    }
    else throw std::exception("baza danych o podanej nazwie juz istnieje");
}
//ostatecznie ma odczytac wszystko z pliku
void ElementsDatabase::readFromFile(){
    database_.readFromFile(database_.getDatabasesFileName());
    readDatabase();

}

void ElementsDatabase::readDatabase(){
    std::ifstream if_stream;
    if_stream.open(database_.getFileName());

    if (if_stream.good()) {

        for(unsigned int i=0; i<database_.getElementsNumber(); ++i){
            Element new_element;
            new_element.importData(if_stream);
            elements_.push_back(new_element);
        }
        if_stream.close();
    }
    else
        throw std::exception();
}
void ElementsDatabase::add(Element new_element){
    elements_.push_back(new_element);
    database_.increaseElementsNumber();
}
void ElementsDatabase::add(Word new_word){
    Element temp;
    temp.add(new_word);
    elements_.push_back(temp);
    database_.increaseElementsNumber();
}

void ElementsDatabase::add(Picture new_element){
    Element temp;
    temp.add(new_element);
    elements_.push_back(temp);
    database_.increaseElementsNumber();
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
    return static_cast<unsigned int >(elements_.size());
}
unsigned int ElementsDatabase::getElementsToRepeatNumber(){
    unsigned int elements_number=0;
    for(int i=0; i<elements_.size();++i){
        if(elements_[i].getState()<2)
            ++elements_number;
    }
    return elements_number;
}

std::vector <Element> ElementsDatabase::getElementsToRepeat(){
    std::vector <Element> elements;

    for (int i=0; i<elements_.size(); ++i){
        if(elements_[i].getState()<2){
           Element new_element=elements_[i];
            elements.push_back(elements_[i]);

        }

    }
    return elements;

}
