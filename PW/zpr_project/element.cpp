#include "element.h"

enum REMEMBERING_RATE {LACK=0, LOW=2, MEDIUM=8, HIGH=20, LEARNED=100};
enum STATE { OVERDUE=0,FOR_REPETITION=1, NO_REPETITION=2};
Element::Element(){
    remembering_rate_=0;
    element_number_=0;
    last_repeat_data_=DataCounter::getInstance()->getCurrentData();
    setState();
}
Element::~Element(){
}
unsigned int Element::getRememberingRate(){return remembering_rate_;}

void Element::importData(std::istream& in_){
    in_.ignore(std::numeric_limits<std::streamsize>::max(), ')');
    in_.ignore(std::numeric_limits<std::streamsize>::max(), '=');
    in_ >> element_number_;
    in_.ignore(std::numeric_limits<std::streamsize>::max(), '=');
    in_ >>remembering_rate_;
    in_.ignore(std::numeric_limits<std::streamsize>::max(), '=');
    in_ >> last_repeat_data_.tm_mday;
    in_.ignore(std::numeric_limits<std::streamsize>::max(), '-');
    in_ >> last_repeat_data_.tm_mon;
    in_.ignore(std::numeric_limits<std::streamsize>::max(), '-');
    in_ >> last_repeat_data_.tm_year;

    word_.importData(in_);
    picture_.importData(in_);

    setState();
}

void Element::exportData(std::ostream& out_){
    out_ <<"(Element)"<<std::endl;
    out_ <<"element_number=" <<element_number_<<std::endl;
    out_ <<"remebering_rate=" <<remembering_rate_<<std::endl;
    out_ <<"last_repeat_data=" <<last_repeat_data_.tm_mday<<"-"<<last_repeat_data_.tm_mon<<"-"<<last_repeat_data_.tm_year<<std::endl;
    word_.exportData(out_);
    picture_.exportData(out_);

}
void Element::add(Word word){
    word_=word;
}
void Element::add(Picture picture){
    picture_=picture;
}
void Element::setState(){
    unsigned int days_passesd = DataCounter::getInstance()->getDaysDifference(last_repeat_data_);
    if (remembering_rate_ > days_passesd)
        state_ = NO_REPETITION;
    else if(remembering_rate_==days_passesd)
        state_ = FOR_REPETITION;
    else if(remembering_rate_ < days_passesd)
        state_ = OVERDUE;
}
unsigned int Element::getState(){
    return state_;
}
void Element::increaseRememberingRate(){
    switch (remembering_rate_) {
    case LACK: //niezapamietane
        remembering_rate_=LOW;
        break;
    case LOW:
        remembering_rate_=MEDIUM;
        break;
    case MEDIUM:
        remembering_rate_=HIGH;
        break;
    case HIGH:
        remembering_rate_=LEARNED;
        break;
    default:
        break;
    }
}
void Element::decreaseRememberingRate(){
    switch (remembering_rate_) {
    case HIGH:
        remembering_rate_=LOW;
        break;
    case MEDIUM:
        remembering_rate_=LOW;
        break;
    case LOW:
        remembering_rate_=LACK;
    default:
        break;
    }
}

Word Element::getWord()
{
    return word_;
}
void Element::setWord(Word word)
{
    word_.setName(word.getName());
    word_.setForeignWord(word.getForeignWord());
    word_.setNativeWord(word.getNativeWord());
    word_.setTranslation(word.getTranslation());
}

Picture Element::getPicture()
{
    return picture_;
}
void Element::setPicture(Picture pic)
{
    picture_.setPath(pic.getPath());
}
void Element::increaseElementNumber(){
    ++element_number_;
}
unsigned int Element::getElementNumber(){
    return element_number_;
}
void Element::setElementNumber(unsigned int number){
    element_number_=number;
}
