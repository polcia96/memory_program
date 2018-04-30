#ifndef ELEMENT_H
#define ELEMENT_H

#include <vector>
#include "base.h"
#include "word.h"
#include "picture.h"

class Element : public Base
{
public:
    Element();
    ~Element();
    virtual void importData(std::istream& in_);
    virtual void exportData(std::ostream& out_);
    virtual void add(Word word);
    virtual void add(Picture picture);
    void increaseRememberingRate();
    void decreaseRememberingRate();
private:
    Word word_;
    Picture picture_;
    int remembering_rate_;
    unsigned int elements_number_;
};

#endif // ELEMENT_H
