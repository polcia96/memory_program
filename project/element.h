#ifndef ELEMENT_H
#define ELEMENT_H

#include <vector>
#include "base.h"

class Element : public Base
{
public:
    Element();
    ~Element();
    virtual void importData(std::istream& in_);
    virtual void exportData(std::ostream& out_);
    virtual void add(Base* new_element);
private:
    std::vector<Base*> elements_;
    int remembering_rate_;
    unsigned int elements_number_;
};

#endif // ELEMENT_H
