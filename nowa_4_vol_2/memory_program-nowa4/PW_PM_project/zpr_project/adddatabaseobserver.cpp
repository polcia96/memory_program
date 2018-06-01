#include "adddatabaseobserver.h"

AddDatabaseObserver::AddDatabaseObserver(){

}

void AddDatabaseObserver::update(Element new_element){
    elements_.push_back(new_element);
    database_.increaseElementsNumber();
}



