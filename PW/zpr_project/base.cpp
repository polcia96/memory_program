#include "base.h"

Base::Base(){}


Base::~Base(){}

std::string Base::getName(){return name_;}
void Base::setName(std::string name){name_=name;}

void Base::readFromFile(std::string file_name){
    std::ifstream if_stream;
    if_stream.open(file_name);

    if (if_stream.good()) {
        importData(if_stream);
        if_stream.close();
    }
    else
        throw std::exception();
}

void Base::writeToFile(std::string file_name) {
    std::ofstream of_stream;
    of_stream.open(file_name, std::ios_base::app);

    if (of_stream.good()) {
        exportData(of_stream);
        of_stream.close();
    }
    else
        throw std::exception();
}
