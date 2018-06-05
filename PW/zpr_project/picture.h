#ifndef PICTURE_H
#define PICTURE_H


#include "base.h"

/*!
 * \brief Klasa Picture przechowuje informacje o obrazku dołączonym do danego elementu
 */
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
    std::string path_="none";
};

#endif // PICTURE_H
