#include "RegisterStudent.h"
#include<bits/stdc++.h>
#include <fstream>
#include<stdio.h>

using namespace std;

void RegisterStudent :: takeStudentDetails()
{
    string  cst;
    cout << "Enter Student First Name :";
    cin>>studName;
    cin.ignore(INT_MAX,'\n');
  //  cout<<studName<<" ";
    cout << "Enter Student Caste Among Following :"<<endl;
    cout <<"   1. GENERAL "<<"\n";
    cout <<"   2. OBC     "<<"\n";
    cout <<"   3. SC/ST   "<<"\n";
    getline(cin,cst);
    //cin.clear();
   // cin.ignore(INT_MAX,'\n');
    if(cst=="1"){
        studCaste="GENERAL";
    }
    else if(cst=="2"){
      studCaste="OBC";
    }
    else if(cst=="3"){
        studCaste="SC/ST";
    }
    else{

        cout <<"    Enter Valid Option "<<endl;
        takeStudentDetails();
    }
    string pgm;
    cout << "Enter Student Program Among Following :"<<endl;
     cout <<"   1. B.Tech "<<"\n";
     cout <<"   2. MSc     "<<"\n";
    getline(cin,pgm);
    if(pgm=="1"){

        studProgram="BTech";
        ifstream cntr;
        cntr.open("BtechCounter.txt");
        cntr>>BtechCount;
        cntr.close();
        ofstream cntr1;
        cntr1.open("BtechCounter.txt");
        BtechCount+=1;
        cntr1<<BtechCount;
        cntr1.close();
       }
    else if(pgm=="2")
        {studProgram="MSc";
        ifstream mcntr;
        mcntr.open("MscCounter.txt");
        mcntr>>MscCount;
        mcntr.close();
        ofstream mcntr1;
        mcntr1.open("MscCounter.txt");
        MscCount+=1;
        mcntr1<<MscCount;
        mcntr1.close();
        }
    else{
        cout <<"Enter Valid Option "<<endl;
        takeStudentDetails();
    }
  //registerStudent();
  giveUsernamePass();
  }

void RegisterStudent :: giveUsernamePass()
{
     if(studProgram=="BTech")
        {
            stringstream ss;
            ss<<BtechCount;
            string s1=ss.str();
            studID="BT"+s1;
        }
     else
        {
       stringstream ss;
            ss<<MscCount;
            string s1=ss.str();
            studID="MS"+s1;
        }
     static const char alphanum[] =
"0123456789"
"ABCDEFGHIJKLMNOPQRSTUVWXYZ";
        int stringLength = sizeof(alphanum) - 1;
      srand(time(NULL));
        string Str;
       for(unsigned int i = 0; i < 8; ++i)
       {
          Str +=  alphanum[rand() % stringLength];
       }
               studPass=Str;
               cout <<"Students Permanent ID is :"<<studID<<"\n";
               cout <<"Students Temporary Password Is : "<<studPass<<"\n";
               registerStudent();
}

void RegisterStudent :: registerStudent ()
{
    Student stud;
    stud.Name=studName;
    stud.ID=studID;
    stud.Password=studPass;
    stud.Caste=studCaste;
    stud.Program=studProgram;
    fstream outFile;
	outFile.open("bhadwa.txt",ios::app);
	outFile<<stud.ID<<"\n"<<stud.Name<<"\n"<<stud.Caste<<"\n"<<stud.Program<<"\n"<<stud.isSemesterFeePaid<<"\n"<<stud.isMessFeePaid<<"\n"<<stud.Password<<"\n";
	outFile.close();

    cout <<" Student Is Successfully Registered "<<"\n";
    cout <<" Press any key to return to homepage \n";
    getchar();
    backToHomepage();
}

void RegisterStudent :: backToHomepage ()
{
    adminHomePage AHP2;
    AHP2.displayHomePageAd();
}

