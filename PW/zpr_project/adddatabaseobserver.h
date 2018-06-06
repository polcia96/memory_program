#ifndef ADDDATABASEOBSERVER_H
#define ADDDATABASEOBSERVER_H

#include "elementsdatabase.h"
/*
 * w przypadku zmiany stanu dodaje nowy element do danej bazy danej
 */
/*!
 * \brief Obserwator, w przypadku zmiany stanu dodaje nowy element do danej bazy danych
 */
class AddDatabaseObserver : public ElementsDatabase
{
public:
    AddDatabaseObserver();
    /*!
     * \brief update - funkja umozliwiająca dodanie nowego elementu do danej bazy danych
     * \param new_element - nowy element, ktory ma zostac dodany
     */
    virtual void update(Element new_element);
private:

    unsigned int last_element_number=-1;

};

#endif // ADDDATABASEOBSERVER_H



