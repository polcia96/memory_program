#ifndef REPETITION_H
#define REPETITION_H

#include "element.h"
#include <vector>
#include "elementsdatabase.h"
class Repetition
{
public:
    Repetition(std::string database_name);
    void setCurrentRepetitions();
    std::vector <Element> getCurrentRepetitions();
private:
    std::vector <Element> current_repetitions_;
    std::string current_database_;
};



#endif // REPETITION_H
