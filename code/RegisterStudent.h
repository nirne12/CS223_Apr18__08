#ifndef REGISTERSTUDENT_H
#define REGISTERSTUDENT_H
#include<bits/stdc++.h>
#include"adminHomePage.h"
#include"Student.h"

class RegisterStudent
{
 public:
    std::string studName;
    std::string studCaste;
    std::string studProgram;
    int BtechCount;
    int MscCount;
    std::string studID;
    std::string studPass;

    void takeStudentDetails();
    void registerStudent();
    void giveUsernamePass();
    void backToHomepage();
};

#endif // REGISTERSTUDENT_H
