#include "datacounter.h"

DataCounter::DataCounter(){
    setCurrentData();
}

DataCounter* DataCounter::pInstance_=nullptr;

DataCounter* DataCounter::getInstance(){
    if(!pInstance_)
        pInstance_=new DataCounter();
    return pInstance_;

}
DataCounter:: ~DataCounter(){
    delete pInstance_;
}

struct std::tm DataCounter::getCurrentData(){
    return current_data_;
}
void DataCounter::setCurrentData(){
    std::time_t t= std::time(0);
    std::tm* now = std::localtime(&t);
    current_data_=*now;
    current_data_.tm_sec=0;
    current_data_.tm_min=0;
    current_data_.tm_hour=0;

}

int DataCounter::getDaysDifference(struct std::tm data_){

    std::time_t x = std::mktime(&data_);
    std::time_t y = std::mktime(&current_data_);
    unsigned int difference=-100;
    if ( x != (std::time_t)(-1) && y != (std::time_t)(-1) )
        difference =(unsigned int)std::difftime(y, x) / (60 * 60 * 24);

    return difference;
}
