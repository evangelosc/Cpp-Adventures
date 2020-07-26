#ifndef TEACHER_H
#define TEACHER_H

#include <vector>
#include <string>
#include "Userakos.h"

class Teacher : public Userakos{
    public:
        std::vector<std::string> classesAv;
        void output();
        Teacher();
};
#endif