#ifndef ELEMENT_H
#define ELEMENT_H

#include <vector>
#include <ctime>
#include "base.h"
#include "word.h"
#include "picture.h"
#include "datacounter.h"

/*!
 * \brief Klasa reprezentująca pojedyńczy element z danej bazy, dostarcza funkcje umożliwiające zarządzanie danym elementem, w tym m.in
 * zmianę jego stanu, zwiększenie lub zmniejszenie współczynnika zapamiętania itp.
 */
class Element : public Base
{
public:
    Element();
    ~Element();
    virtual void importData(std::istream& in_);
    virtual void exportData(std::ostream& out_);
    virtual void add(Word word);
    virtual void add(Picture picture);
    virtual void setWord(Word word);
    virtual void setPicture(Picture word);

    virtual Word getWord();
    virtual Picture getPicture();

    void increaseRememberingRate();
    void decreaseRememberingRate();
    void increaseElementNumber();
    void setState();
    void setElementNumber(unsigned int number);

    unsigned int getRememberingRate();
    unsigned int getState();
    unsigned int getElementNumber();

private:
    Word word_;
    Picture picture_;
    unsigned int remembering_rate_;
    unsigned int state_;
    unsigned int element_number_;
    struct std::tm last_repeat_data_;
};

#endif // ELEMENT_H
