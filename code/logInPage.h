#ifndef LOGINPAGE_H
#define LOGINPAGE_H
#include "adminHomePage.h"
#include"studentHomePage.h"
#include"mainPage.h"


class logInPage
{
public :
   void  showLogInPage(int n);
   void  takeLogInDetails(int n);
   void  processDetails(int n,std::string ID);
};

#endif // LOGINPAGE_H
