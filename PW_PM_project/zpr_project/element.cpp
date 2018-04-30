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

    word_.importData(in_);
    picture_.importData(in_);
}

void Element::exportData(std::ostream& out_){
    out_ <<"(Element)"<<std::endl;
    out_ <<"elemrnts_number=" <<elements_number_;

   word_.exportData(out_);
   picture_.exportData(out_);

}
void Element::add(Word word){
    word_=word;
}
void Element::add(Picture picture){
    picture_=picture;
}
void Element::increaseRememberingRate(){
    ++remembering_rate_;
}
void Element::decreaseRememberingRate(){
    if(remembering_rate_>0)
        --remembering_rate_;
}
