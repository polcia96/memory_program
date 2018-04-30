#ifndef WORD_H
#define WORD_H


#include "base.h"

class Word : public Base
{
public:
    Word();
    ~Word();
    virtual void importData(std::istream& in_);
    virtual void exportData(std::ostream& out_);

    virtual std::string getForeignWord();
    virtual void setForeignWord(std::string word);
    virtual std::string getNativeWord();
    virtual void setNativeWord(std::string word);

    virtual void add(Base*){}

private:
    std::string foreign_word_;
    std::string native_word_;
};

#endif // WORD_H
