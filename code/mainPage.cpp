#include<bits/stdc++.h>
#include "mainPage.h"
#include <fstream>
#include<stdio.h>

using namespace std;


void mainPage :: showUserType()
{
    system("clear");
    cout <<" Select User Type "<<endl;
    cout <<" 1. Admin "<<endl;
    cout <<" 2. Student "<<endl;
    cout <<" 3. close program"<<endl;
    takeUserType();
}

void mainPage :: takeUserType ()
{
   /* int k;
    cin >>k;
     cin.clear();
     cin.ignore(INT_MAX,'\n');*/
    int k=0;
    string s;
    getline(cin,s);
    s.erase(remove_if(s.begin(), s.end(), :: isspace), s.end());
    if(s.size()!=1){
    cout<<"please enter correct input\n";
    cout<<"press any key to return to main page\n";
    getchar();
    showUserType();
          }
        else{
        k=atoi(s.c_str());
       }



    logInPage LIP;
    system("clear");
    switch(k)
    {
   case 1 :
    cout << "*****************  ADMIN **************" <<endl;
    LIP.showLogInPage(k);
    break;
   case 2 :
    cout << "***************** STUDENT *************"<<endl;
    LIP.showLogInPage(k);
    break;
   case 3:
    exit(0);
    break;
   default :
    cout << "Enter Valid Entries"<<endl;

    showUserType();
    }
    return;
}
