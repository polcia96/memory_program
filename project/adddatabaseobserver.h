#ifndef ADDDATABASEOBSERVER_H
#define ADDDATABASEOBSERVER_H

#include "elementsdatabase.h"

class AddDatabaseObserver : public ElementsDatabase
{
public:
    AddDatabaseObserver();
    virtual void update(Element new_element);
private:

};

#endif // ADDDATABASEOBSERVER_H
