#ifndef DATABASE_H
#define DATABASE_H


class Database : public Base
{
public:
    Database();

private:
    std::string file_name_;
    //z tego zrobic jakos static
    std::string file_databases_name_="databases.txt";
};

#endif // DATABASE_H
