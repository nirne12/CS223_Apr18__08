#ifndef STUDENTHOMEPAGE_H
#define STUDENTHOMEPAGE_H
#include"SemesterFee.h"
#include"PayMessFee.h"
#include"ChangePassword.h"
#include"SeeReceipt.h"
#include"mainPage.h"
#include"Student.h"
#include<bits/stdc++.h>

class studentHomePage
{
    int studentInput;
public :
    void displayHomePage (std::string ID); //display student homepage
    void takeStudentInput (std::string ID); // take input from student 
    void processInput (std::string ID);
};

#endif // STUDENTHOMEPAGE_H
