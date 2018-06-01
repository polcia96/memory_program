#ifndef DATACOUNTER_H
#define DATACOUNTER_H

#include <ctime>

class DataCounter
{
public:
    void setCurrentData();
    int getDaysDifference(struct std::tm data_);
    static DataCounter* getInstance();
    struct std::tm getCurrentData();
    ~DataCounter();
private:
    struct std::tm current_data_;

    static DataCounter* pInstance_;
    DataCounter();
    DataCounter(const DataCounter&) = delete;
    DataCounter& operator=(const DataCounter&) = delete;
};

#endif // DATACOUNTER_H
