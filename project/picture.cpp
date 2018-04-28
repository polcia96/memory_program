#include "picture.h"

Picture::Picture()
{
}

void Picture::importData(std::istream& in_){
    in_.ignore(std::numeric_limits<std::streamsize>::max(), ']');
    in_.ignore(std::numeric_limits<std::streamsize>::max(), '=');
    in_  >> name_;

    in_.ignore(std::numeric_limits<std::streamsize>::max(), '=');
    in_ >> remembering_rate_;

    in_.ignore(std::numeric_limits<std::streamsize>::max(), '=');
    in_ >> path_;

}
void Picture::exportData(std::ostream& out_){
    out_ << "[Picture]";
    out_ << "name = " << name_ << std::endl;
    out_ << "remembering_rate =" << remembering_rate_ <<std::endl;
    out_ << "path = " << path_ << std::endl;

}

void Picture::setPath(std::string path) {path_=path;}

std::string Picture::getPath(){return path_;}
