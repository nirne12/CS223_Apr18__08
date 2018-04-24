#ifndef CHANGEPASSWORD_H
#define CHANGEPASSWORD_H
#include "studentHomePage.h"
#include"Student.h"
#include<bits/stdc++.h>

 class ChangePassword
    {
    public:
        std::string newPassword;
        void takePassword(std::string ID);
        void updatePassword(std::string ID);
    };

#endif // CHANGEPASSWORD_H
