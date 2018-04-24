#include "logInPage.h"
#include<bits/stdc++.h>
#include <fstream>
#include<stdio.h>

using namespace std;

void logInPage :: showLogInPage (int k)
{
    cout << "               LOG IN PAGE         "<<endl;
    takeLogInDetails(k);
}

void logInPage :: takeLogInDetails (int k)
{
    string ID,password;
    cout << " Enter ID :";
    getline(cin,ID);
    cout << " Enter Password  :";
    getline(cin,password);
    string s[2];
    if(k==1){
    ifstream ift ;
    ift.open("nik.txt");
    int i=0;
    while(!ift.eof())
    {
        ift>>s[i];
        i++;
    }
    ift.close();
    if(s[0]==ID && s[1]==password)
    {
         processDetails (k,ID);
    }
    else
    {
        cout<<"You Have Entered Wrong Details "<<endl;
        mainPage mp2;
        mp2.showUserType();
    }
    }
    if(k==2)
    {
        int cnt=0;
        Student stud1;
        ifstream f ;
        f.open("bhadwa.txt");
        f>>stud1.ID>>stud1.Name>>stud1.Caste>>stud1.Program>>stud1.isSemesterFeePaid>>stud1.isMessFeePaid>>stud1.Password;
        while (!f.eof())
        {
            if(ID==stud1.ID && password==stud1.Password)
            {
                cnt++;
                processDetails (k,ID);
                break;
            }
             f>>stud1.ID>>stud1.Name>>stud1.Caste>>stud1.Program>>stud1.isSemesterFeePaid>>stud1.isMessFeePaid>>stud1.Password;
        }
        f.close();
        if(cnt == 0){
            cout <<"\n YOU HAVE ENTERED WRONG CREDENTIALS \n";
            getchar();
            mainPage mp2;
            mp2.showUserType();
        }
    }
}

void logInPage :: processDetails(int k,string ID)
{
    cout << "Successfully Logged In"<<endl;
    if(k==1){
        adminHomePage AHP;
    AHP.displayHomePageAd();
    }
    if(k==2){
    studentHomePage SHP;
    SHP.displayHomePage(ID);
    }
}
