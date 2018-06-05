#ifndef WORD_H
#define WORD_H


#include "base.h"
/*!
 * \brief Klasa Word reprezentuje dane słówko, które może być zapisane w dwóch językach oraz posiadac pewien synonim lub opis.
 * dostarcza funkcji umożliwających modyfikacje słówka oraz jego zapis i odczyt z /do pliku.
 */
class Word : public Base
{
public:
    Word();
    Word(std::string native,std::string foreign,std::string translate);
    ~Word();
    virtual void importData(std::istream& in_);
    virtual void exportData(std::ostream& out_);

    virtual std::string getForeignWord();
    virtual void setForeignWord(std::string word);
    virtual std::string getNativeWord();
    virtual void setNativeWord(std::string word);
    virtual std::string getTranslation();
    virtual void setTranslation(std::string word);

    virtual void add(Base*){}

private:
    std::string foreign_word_="none";
    std::string native_word_="none ";
    std::string translate_="none";
};

#endif // WORD_H
