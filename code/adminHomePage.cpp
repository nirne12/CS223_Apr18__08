#include "adminHomePage.h"
#include<bits/stdc++.h>
#include <fstream>
#include<stdio.h>
//
using namespace std;

void adminHomePage :: displayHomePageAd ()
{   system("clear");
    cout <<"                ADMIN HOME PAGE"<<endl;
    cout <<"  1. REGISTER STUDENT   "<<endl;
    cout <<"  2. SEE DETAILS   "<<endl;
    cout <<"  3. REMOVE STUDENT   "<<endl;
    cout <<"  4. UPDATE DETAILS   "<<endl;
    cout <<"  5. LOG OUT   "<<endl;

    takeAdminInput();
}
void adminHomePage :: takeAdminInput()
{
    cout <<"  Enter Valid Option "<<endl;
   // cin.ignore();
    int k=0;
    string s;
    getline(cin,s);
    s.erase(remove_if(s.begin(), s.end(), :: isspace), s.end());
    if(s.size()!=1){
    cout<<"please enter correct input\n";
    cout<<"press any key to return to main page\n";
    getchar();
    displayHomePageAd ();
          }
        else{
        k=atoi(s.c_str());
        adminInput=k;
        processInputAd ();
       }

}

void adminHomePage :: processInputAd ()
{
    switch (adminInput)
    {
        mainPage mp1;

    case 1 :
        { RegisterStudent rs;
            cout << " Entered In Register Student "<<endl;
        rs.takeStudentDetails();
        break;}
    case 2:
        {ViewDetails vd;
        cout <<" Entered In See Details " <<endl;
        vd.viewStudentDetails();
        break;}
    case 3:{
         RemoveStudent rs1;
         cout << " Entered In Remove Student  "<<endl;
         rs1.deleteStudent();
         break;}
    case 4:
        {string x;
         cout << " Entered In Update Details "<<endl;
         cout << "1. update session "<<endl;
         cout << "2. update fees    "<<endl;
         cout << " select correct option\n";
         cin>>x;
         //cin.clear();
        // cin.ignore(INT_MAX,'\n');

         UpdateDetails ud;
         if(x=="1"){
         ud.UpdateSession();

         }
         else if(x=="2"){
         ud.UpdateFeeDetails();
         }
         else{
           cout<<"choose correct option press any key";
           getchar();
          // cin.ignore();
           displayHomePageAd();

         }
         break;
        }
    case 5:
         cout << "Logged Out Successfully"<<endl;
         mp1.showUserType();
         break;
    default :
          cout << "Enter Valid Option "<<endl;
        displayHomePageAd ();
        break;
    }
}

