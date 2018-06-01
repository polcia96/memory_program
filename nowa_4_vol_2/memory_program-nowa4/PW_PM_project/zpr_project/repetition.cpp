#include "repetition.h"

Repetition::Repetition(std::string database_name){
    current_database_=database_name;
    //setCurrentRepetitions();
}
void Repetition::setCurrentRepetitions(){
    ElementsDatabase new_data(current_database_);
    new_data.readFromFile();
    std::vector <Element>elements=new_data.getElementsToRepeat();
    for(int i=0; i<elements.size();++i){
        Element element=elements[i];
        current_repetitions_.push_back(element);
    }
}

std::vector <Element> Repetition::getCurrentRepetitions(){
    setCurrentRepetitions();
    return current_repetitions_;
}
