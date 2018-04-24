#include "studentHomePage.h"
#include<bits/stdc++.h>
#include <fstream>
#include<stdio.h>

using namespace std;


void studentHomePage :: displayHomePage (string ID)
{   system("clear");
    cout <<"\t\t\t\t\tSTUDENT HOME PAGE"<<endl;
    Student stud1;
    ifstream inFile;
	inFile.open("bhadwa.txt");
    inFile>>stud1.ID>>stud1.Name>>stud1.Caste>>stud1.Program>>stud1.isSemesterFeePaid>>stud1.isMessFeePaid>>stud1.Password;
    while(!inFile.eof())
	{
     if(stud1.ID==ID){
     cout <<"\t\t\t\t\tHELLO "<<stud1.Name<<endl;
     }
     inFile>>stud1.ID>>stud1.Name>>stud1.Caste>>stud1.Program>>stud1.isSemesterFeePaid>>stud1.isMessFeePaid>>stud1.Password;
	}
	inFile.close();


    cout <<"  1. SEMESTER FEE PAYMENT   "<<endl;
    cout <<"  2. MESS FEE PAYMENT   "<<endl;
    cout <<"  3. SEE RECEIPT   "<<endl;
    cout <<"  4. CHANGE PASSWORD   "<<endl;
    cout <<"  5. LOG OUT   "<<endl;
    takeStudentInput (ID);
}
void studentHomePage :: takeStudentInput (string ID)
{
    cout <<"  Enter Valid Option "<<endl;
   // cin >>studentInput;
   /* cin.clear();
    cin.ignore(INT_MAX,'\n');
    processInput (ID);*/
    int k=0;
    string s;
    getline(cin,s);
    s.erase(remove_if(s.begin(), s.end(), :: isspace), s.end());
    if(s.size()!=1){
    cout<<"please enter correct input\n";
    cout<<"press any key to return to main page\n";
    getchar();
    displayHomePage ( ID);
          }
        else{
        k=atoi(s.c_str());
        studentInput=k;
        processInput (ID);
       }



}
void studentHomePage :: processInput (string ID)
{
    switch (studentInput)
    {
        mainPage mp1;
    case 1 :
        {cout << " Entered In Semester Fee Payment "<<endl;
        SemesterFee SF;
        SF.identifyObject(ID);
        break;
        }
    case 2:
       {
        cout <<" Entered In Mess Fee Payment " <<endl;
        PayMessFee PMF;
        PMF.makeMessFeePayment(ID);
        break;
       }
    case 3:
         {cout << " Entered In See Receipt "<<endl;
         SeeReceipt SR;
         SR.takeInptTOSeeReceipt(ID);
         break;
         }
    case 4:
        {
         cout << " Entered In Change Password "<<endl;
         ChangePassword CP;
         CP.takePassword(ID);
         break;}
    case 5:
         cout << "Logged Out Successfully"<<endl;
         mp1.showUserType();
         break;
    default :
          cout << "Enter Valid Option "<<endl;
        displayHomePage ( ID);
        break;
    }
}
