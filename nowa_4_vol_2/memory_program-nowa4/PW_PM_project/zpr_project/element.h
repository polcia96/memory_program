#ifndef ELEMENT_H
#define ELEMENT_H

#include <vector>
#include <ctime>
#include "base.h"
#include "word.h"
#include "picture.h"
#include "datacounter.h"

class Element : public Base
{
public:
    Element();
    ~Element();
    virtual void importData(std::istream& in_);
    virtual void exportData(std::ostream& out_);
    virtual void add(Word word);
    virtual void add(Picture picture);
    virtual Word getWord();
    virtual void setWord(Word word);
    virtual Picture getPicture();
    virtual void setPicture(Picture word);
    void increaseRememberingRate();
    void decreaseRememberingRate();
    unsigned int getRememberingRate();
    void setState();
    unsigned int getState();
private:
    Word word_;
    Picture picture_;
    unsigned int remembering_rate_;
    unsigned int state_;
    struct std::tm last_repeat_data_;
  //  unsigned int elements_number_;
};

#endif // ELEMENT_H
