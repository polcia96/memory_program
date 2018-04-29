#include "element.h"

Element::Element(){
    elements_number_=0;
}
Element::~Element(){
}

void Element::importData(std::istream& in_){
    in_.ignore(std::numeric_limits<std::streamsize>::max(), ')');
    in_.ignore(std::numeric_limits<std::streamsize>::max(), '=');
    in_ >>elements_number_;

    for(unsigned int i=0; i< elements_number_; ++i)
        elements_[i]->importData(in_);
}

void Element::exportData(std::ostream& out_){
    out_ <<"(Element)"<<std::endl;
    out_ <<"elemrnts_number=" <<elements_number_;

    for(unsigned int i=0; i< elements_.size(); ++i)
        elements_[i]->exportData(out_);

}
void Element::add(Base* new_element){
    elements_.push_back(new_element);
    ++elements_number_;
}
