#include "adddatabaseobserver.h"

AddDatabaseObserver::AddDatabaseObserver(){
    int elements_size=(int)elements_.size();
    if(elements_size>0)
        last_element_number=elements_[elements_size-1].getElementNumber();
}

void AddDatabaseObserver::update(Element new_element){
    new_element.setElementNumber(last_element_number);
    new_element.increaseElementNumber();
    elements_.push_back(new_element);
    database_.increaseElementsNumber();
    int elements_size=(int)elements_.size();
    if(elements_size>0)
        last_element_number=elements_[elements_size-1].getElementNumber();
}



