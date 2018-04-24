#include "RemoveStudent.h"
#include<bits/stdc++.h>
#include <fstream>
#include<stdio.h>
using namespace std;

void RemoveStudent :: deleteStudent ()
{   int cnt=0;
    Student stud1;
    string InputID;
    cout<<" ENTER STUDENT ID :";
    getline(cin,InputID);
    fstream f1;
    fstream w1;
    f1.open("bhadwa.txt");
    if(!f1){
        cout<<"there is no data in database\n";
        cout <<" press any key to return to homepage \n";
        getchar();
        backToHomePage3();
    }
    else{
    w1.open("bhadwa1.txt",ios::app);
    f1>>stud1.ID>>stud1.Name>>stud1.Caste>>stud1.Program>>stud1.isSemesterFeePaid>>stud1.isMessFeePaid>>stud1.Password;
    while (!f1.eof())
    {
        if(stud1.ID!=InputID)
            {
              w1<<stud1.ID<<"\n"<<stud1.Name<<"\n"<<stud1.Caste<<"\n"<<stud1.Program<<"\n"<<stud1.isSemesterFeePaid<<"\n"<<stud1.isMessFeePaid<<"\n"<<stud1.Password<<"\n";
            }
       else{
              cnt++;
           }
        f1>>stud1.ID>>stud1.Name>>stud1.Caste>>stud1.Program>>stud1.isSemesterFeePaid>>stud1.isMessFeePaid>>stud1.Password;
    }
    f1.close();
    w1.close();
    if(cnt==1){
    remove("bhadwa.txt");
    rename("bhadwa1.txt","bhadwa.txt");
    cout<<"student successfully removed \n";
    cout <<" press any key to return to homepage \n";
    getchar();
    backToHomePage3();
    }
    else{
     cout<<"please enter correct id  \n";
     cout <<" press any key to return to homepage \n";
     getchar();
     backToHomePage3();
        }
    }
}
void RemoveStudent :: backToHomePage3()
{
    adminHomePage AHP3;
    AHP3.displayHomePageAd();
}
