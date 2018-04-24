#include "ViewDetails.h"
#include<bits/stdc++.h>
#include <fstream>
#include<stdio.h>

using namespace std;

void ViewDetails :: viewStudentDetails()
{
   Student stud1;
   int session;
    fstream ft;
    ft.open("session.txt");
    ft>>session;
    ft.close();
    cout<<"\n";
    cout<<"*************************************SESSION-"<<session<<"**************************************************\n";
   cout <<setw(10)<<left<<"ID"<<setw(20)<<left<<"NAME"<<setw(20)<<left<<"CASTE"<<setw(20)<<left<<"PROGRAM"<<setw(20)<<left<<"SEMFEESTATUS"<<"MESSFEESTATUS  \n";
    cout<<"*****************************************************************************************************\n";
   ifstream inFile;
	inFile.open("bhadwa.txt");
	if(!inFile)
	{
		cout<<"File could not be open !! Press any Key...";
		getchar();
        backToHomepage1();
	}
	else{
	        inFile>>stud1.ID>>stud1.Name>>stud1.Caste>>stud1.Program>>stud1.isSemesterFeePaid>>stud1.isMessFeePaid>>stud1.Password;

    while(!inFile.eof())
	{    if(stud1.isSemesterFeePaid==true&&stud1.isMessFeePaid==true){
		cout<<setw(10)<<left<<stud1.ID<<setw(20)<<left<<stud1.Name<<setw(20)<<left<<stud1.Caste<<setw(20)<<left<<stud1.Program<<setw(20)<<"paid"<<"paid"<<endl;}
		else if(stud1.isSemesterFeePaid==true&&stud1.isMessFeePaid==false){
        cout<<setw(10)<<left<<stud1.ID<<setw(20)<<left<<stud1.Name<<setw(20)<<left<<stud1.Caste<<setw(20)<<left<<stud1.Program<<setw(20)<<"paid"<<"not paid"<<endl;
		}
		else if(stud1.isSemesterFeePaid==false&&stud1.isMessFeePaid==true){
        cout<<setw(10)<<left<<stud1.ID<<setw(20)<<left<<stud1.Name<<setw(20)<<left<<stud1.Caste<<setw(20)<<left<<stud1.Program<<setw(20)<<"not paid"<<"paid"<<endl;
		}
		else{
        cout<<setw(10)<<left<<stud1.ID<<setw(20)<<left<<stud1.Name<<setw(20)<<left<<stud1.Caste<<setw(20)<<left<<stud1.Program<<setw(20)<<"not paid"<<"not paid"<<endl;
		}
	        inFile>>stud1.ID>>stud1.Name>>stud1.Caste>>stud1.Program>>stud1.isSemesterFeePaid>>stud1.isMessFeePaid>>stud1.Password;
	}
	inFile.close();
	 cout<<"*****************************************************************************************************\n";
	cout<<"press any key to return to homepage \n";
	getchar();
   backToHomepage1();}
}

void ViewDetails ::backToHomepage1()
{
  adminHomePage AHP3;
  AHP3.displayHomePageAd();
}
