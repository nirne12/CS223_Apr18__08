#ifndef STUDENT_H
#define STUDENT_H

#include<bits/stdc++.h>
class Student
{
    public:
    Student();
    std::string Name;
    std::string ID;
    std::string Password;
    int fees;
    std::string Caste;
    std::string Program;
    bool isSemesterFeePaid;
    bool isMessFeePaid;


};

#endif // STUDENT_H
