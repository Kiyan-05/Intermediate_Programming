#ifndef STUDENT_INFO_H
#define STUDENT_INFO_H

#include <iostream>

struct student
{
    std::string name;
    int age;
};

std::string getStudentName(struct student s);

#endif // STUDENT_INFO_H_INCLUDED
