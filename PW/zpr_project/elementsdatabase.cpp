#include "elementsdatabase.h"

ElementsDatabase::ElementsDatabase(){}

ElementsDatabase::ElementsDatabase(std::string database_name){
    database_.setName(database_name);
    database_.setDefaultFileName();
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
    of_stream.open(database_.getFileName());

    if (of_stream.good()) {

        database_.exportData(of_stream);

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
   else throw std::exception();
    //else writeDatabase();
}

void ElementsDatabase::swapDatabaseInFile(){
    writeDatabase();
}
//ostatecznie ma odczytac wszystko z pliku
void ElementsDatabase::readFromFile(){
    readDatabase();

}

void ElementsDatabase::readDatabase(){
    std::ifstream if_stream;

    database_.setDefaultFileName();
    std::string file_name=database_.getFileName();
    if_stream.open(file_name);

    if (if_stream.good()) {
        database_.readFromFile(file_name);
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
    int size=(int)elements_.size();
    if(size>1){
    unsigned int last_element_number=elements_[size-2].getElementNumber();
    elements_[size-1].setElementNumber(last_element_number+1);
    }
    database_.increaseElementsNumber();
}
void ElementsDatabase::add(Word new_word){
    Element temp;
    temp.add(new_word);
    elements_.push_back(temp);
    int size=(int)elements_.size();
    if(size>1){
    unsigned int last_element_number=elements_[size-2].getElementNumber();
    elements_[size-1].setElementNumber(last_element_number+1);
    }
    database_.increaseElementsNumber();
}

void ElementsDatabase::add(Picture new_element){
    Element temp;
    temp.add(new_element);
    elements_.push_back(temp);
    int size=(int)elements_.size();
    if(size>1){
    unsigned int last_element_number=elements_[size-2].getElementNumber();
    elements_[size-1].setElementNumber(last_element_number+1);
    }
    database_.increaseElementsNumber();
}

void ElementsDatabase::setFileName(std::string file_name){
    database_.setFileName(file_name);
}
void ElementsDatabase::setDatabase(Database database){
    database_=database;
}
void ElementsDatabase::setName(std::string name){
    if(DatabasesList::getInstance()->findDatabase(name)==nullptr)
        database_.setName(name);
    else
        database_.setName("none");
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
            elements.push_back(new_element);

        }

    }
    return elements;

}

void ElementsDatabase::swapElement(unsigned int index, Element new_element){
    elements_[index]=new_element;
}
void ElementsDatabase::setDefaultFileName(){
    database_.setDefaultFileName();
}
std::string ElementsDatabase::getDefaultFileName(){
    return database_.getFileName();
}
std::string ElementsDatabase::getName(){
    return database_.getName();
}
