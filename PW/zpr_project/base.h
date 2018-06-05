#ifndef BASE_H
#define BASE_H

#include <stdio.h>
#include <tchar.h>
#include <istream>
#include <ostream>
#include <vector>
#include<algorithm>
#include <string>
#include <iostream>
#include<fstream>
#include<exception>
/*!
 * \brief Base jest klasą bazową dla klas, które dokonują operacji na plikach,
 * dostarcza podstawe funkcje umożliwiające czytanie danych z pliku czy zapis danych.
 */
class Base
{
public:
    Base();
    virtual ~Base();
    virtual void importData(std::istream& in_) = 0;
    virtual void exportData(std::ostream& out_) = 0;
    virtual void readFromFile(std::string file_name);
    virtual void writeToFile(std::string file_name);
    virtual void setName(std::string name);
    virtual std::string getName();

protected:
    std::string name_="none";

};

#endif // BASE_H
