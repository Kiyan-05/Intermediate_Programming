#include <iostream>
#include "STUDENT_INFO.h"

using namespace std;

int main()
{
    struct student s;
    s.name = "Hello";
    s.age = 14;
    std::   string testname = getStudentName(s);
    cout << testname;

}
