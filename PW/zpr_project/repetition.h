#ifndef REPETITION_H
#define REPETITION_H

#include "element.h"
#include <vector>
#include "elementsdatabase.h"
/*!
 * \brief Klasa Repetition reprezentuje aktualna powtórkę, przechowuje tylko te elementy danej bazy które należy powtórzyć w danym dniu.
 * Umożliwia kolejne wyświetlanie elementów w głownym oknie programu.
 */
class Repetition
{
public:
    Repetition(std::string database_name);
    Repetition();
    void setCurrentRepetitions();
    void saveRepetition();
    int getState();
    int getRepetitionsNumber();
    std::vector<Element>::iterator getCurrentRepetitions();
    std::vector<Element>::iterator getEndIterator();
    std::string getCurrentDatabase();
private:
    std::vector <Element> current_repetitions_;
    std::string current_database_;
    int state_;
};



#endif // REPETITION_H
