#ifndef ADMINHOMEPAGE_H
#define ADMINHOMEPAGE_H
#include"RegisterStudent.h"
#include"ViewDetails.h"
#include"RemoveStudent.h"
#include "UpdateDetails.h"
#include"mainPage.h"


class adminHomePage
{
  int adminInput;
  public :
     
      void displayHomePageAd ();    //display Admin homepage
      void takeAdminInput ();           //take input from admin
      void processInputAd ();
};
#endif // ADMINHOMEPAGE_H
