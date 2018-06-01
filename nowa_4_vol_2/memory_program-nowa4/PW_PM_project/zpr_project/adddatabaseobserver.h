#ifndef ADDDATABASEOBSERVER_H
#define ADDDATABASEOBSERVER_H

#include "elementsdatabase.h"
/*
 * w przypadku zmiany stanu dodaje nowy element do danej bazy danej
 */
class AddDatabaseObserver : public ElementsDatabase
{
public:
    AddDatabaseObserver();
    virtual void update(Element new_element);
private:

};

#endif // ADDDATABASEOBSERVER_H



