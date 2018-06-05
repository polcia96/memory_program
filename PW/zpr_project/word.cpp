#include "word.h"

using namespace std;

Word::Word()
{
}
Word::Word(std::string native,std::string forgein, std::string translate){
    native_word_=native;
    foreign_word_=forgein;
    translate_=translate;
}
Word::~Word()
{
}
 std::string Word::getForeignWord() { return foreign_word_; }

 void Word::setForeignWord(std::string word) { foreign_word_ = word; }

 std::string Word::getNativeWord() { return native_word_; }

 void Word::setNativeWord(std::string word) { native_word_ = word; }

 std::string Word::getTranslation() { return translate_; }

 void Word::setTranslation(std::string word) { translate_ = word; }




void Word::importData(std::istream& in_) {
    in_.ignore(std::numeric_limits<std::streamsize>::max(), '>');
    in_.ignore(std::numeric_limits<std::streamsize>::max(), '=');
    in_  >> name_;

    in_.ignore(std::numeric_limits<std::streamsize>::max(), '=');
    in_ >> native_word_;

    in_.ignore(std::numeric_limits<std::streamsize>::max(), '=');
    in_ >> foreign_word_;

    in_.ignore(std::numeric_limits<std::streamsize>::max(), '=');
    in_ >> translate_;

}

void Word::exportData(std::ostream& out_) {
    out_ << "<word>" << std::endl;
    out_ << "name= " << name_ << std::endl;
    out_ << "native_word = " << native_word_ << std::endl;
    out_ << "foreign_word = " << foreign_word_ << std::endl;
    out_ << "translate = " << translate_ << std::endl;
}


