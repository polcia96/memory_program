#include "element.h"

Element::Element()
{
}
Element::~Element(){
}

void Element::importData(std::istream& in_){
    for(int i=0; i< elements_.size(); ++i)
        elements_[i]->importData(in_);
}

void Element::exportData(std::ostream& out_){
    for(int i=0; i< elements_.size(); ++i)
        elements_[i]->exportData(out_);

}
void Element::add(Base* new_element){
    elements_.push_back(new_element);
}
