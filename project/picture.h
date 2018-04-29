#ifndef PICTURE_H
#define PICTURE_H


#include "base.h"

class Picture : public Base
{
public:
    Picture();
    virtual void importData(std::istream& in_);
    virtual void exportData(std::ostream& out_);
    virtual void setPath(std::string path);
    virtual std::string getPath();

    virtual void add(Base*){}


private:
    std::string path_;
    int remembering_rate_;
};

#endif // PICTURE_H
