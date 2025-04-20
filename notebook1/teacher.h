#ifndef TEACHER_H_INCLUDED
#define TEACHER_H_INCLUDED

#include "human.h"
#include <string>
#include <vector>

class teacher : public human
{
    public:
    teacher(
        std::string last_name,
        std::string name,
        std::string second_name,
    short) : human(
        last_name,
        name,
        second_name
    ){}
        
        std::string get_full_name()
        {
            std::ostringstream full_name;
             full_name <<last_name << " "
                << name << " "
                << second_name;
            return full_name.str();
        }
private:
    std::string name;
    std::string last_name;
    std::string second_name;

};
#endif
//djweifwgweg