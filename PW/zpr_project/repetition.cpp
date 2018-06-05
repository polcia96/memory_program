#include "repetition.h"

enum REP_STATE {TO_REPEAT=1,NOTHING_TO_REPEAT=0};

Repetition::Repetition(std::string database_name){
    current_database_=database_name;
    state_=TO_REPEAT;
}
Repetition::Repetition(){}

int Repetition::getState(){
    return state_;
}

void Repetition::setCurrentRepetitions(){
    ElementsDatabase new_data(current_database_);
    current_repetitions_.clear();
    try{
    new_data.readFromFile();
    }
    catch (const std::exception& e){
       std::cout << e.what() << "repetition set";
    }
    std::vector <Element>elements=new_data.getElementsToRepeat();
    if(elements.size()>0){
        state_=TO_REPEAT;
        for(int i=0; i<elements.size();++i){
            Element element=elements[i];
            current_repetitions_.push_back(element);
        }
    }
    else {state_=NOTHING_TO_REPEAT;
    }
}
int Repetition::getRepetitionsNumber(){
    return (int)current_repetitions_.size();
}
std::vector<Element>::iterator Repetition::getCurrentRepetitions(){
    setCurrentRepetitions();
    return current_repetitions_.begin();
}
std::vector<Element>::iterator Repetition::getEndIterator(){
    return current_repetitions_.end();
}
void Repetition::saveRepetition(){
    ElementsDatabase new_data(current_database_);
    new_data.readFromFile();

    std::vector <unsigned int> repetitions_number;
    for(int i=0; i<current_repetitions_.size();++i){
        unsigned int number=current_repetitions_[i].getElementNumber();
        repetitions_number.push_back(number);
    }
    /*
     * dla tych elementow new_data dla ktorych el_number == repetitions_number zmienic zawartsoc
     * i zapsiac do pliku
     */
    for(unsigned int i=0; i<repetitions_number.size(); ++i){
       new_data.swapElement(repetitions_number[i],current_repetitions_[i]);
    }
   new_data.swapDatabaseInFile();

}

std::string Repetition::getCurrentDatabase(){
    return current_database_;
}

