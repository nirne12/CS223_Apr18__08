#include "SeeReceipt.h"
#include<bits/stdc++.h>
#include <fstream>
#include<stdio.h>

using namespace std;



void SeeReceipt ::takeInptTOSeeReceipt(string ID)
    {
        string inp;
        studID=ID;
        cout <<" 1. VIEW SEMESTER FEE RECEIPT \n";
        cout <<" 2. VIEW MESS FEE RECEIPT \n";
        getline(cin,inp);

        if(inp=="1")
          {
           viewSemFeeReceipt();
          }
        else if(inp=="2"){
            viewMessFeeReceipt();
        }
        else{
            cout<<"PLEASE ENTER CORRECT INPUT\n";
            takeInptTOSeeReceipt(ID);
        }
    }
    void SeeReceipt ::viewSemFeeReceipt()
    {
        Student s;
        fstream file;
        file.open("bhadwa.txt");
        file>>s.ID>>s.Name>>s.Caste>>s.Program>>s.isSemesterFeePaid>>s.isMessFeePaid>>s.Password;
        while(!file.eof())
        {
            if(s.ID==studID)
            {   cout<<"\n*****************************************\n";
                cout <<"\t Name         - "<<s.Name<<"\n";
                cout <<"\t ID           - "<<s.ID<<"\n";
                cout <<"\t PROGRAM      - "<<s.Program<<"\n";
                cout <<"\t CASTE        - "<<s.Caste<<"\n";
                if(s.isSemesterFeePaid==true){
                cout <<"\t SemFeeStatus - "<<"paid"<<"\n";
                 }
                else{
                cout <<"\t SemFeeStatus - "<<"not paid"<<"\n";
                }
                cout<<"\n*****************************************\n";
             }
          file>>s.ID>>s.Name>>s.Caste>>s.Program>>s.isSemesterFeePaid>>s.isMessFeePaid>>s.Password;
        }
        file.close();
        cout <<"\n Press any key to return to homepage \n";
        getchar();
        studentHomePage SHP6;
        SHP6.displayHomePage(studID);
    }

     void SeeReceipt ::viewMessFeeReceipt()
    {
        Student s;
        fstream file;
        file.open("bhadwa.txt");
        file>>s.ID>>s.Name>>s.Caste>>s.Program>>s.isSemesterFeePaid>>s.isMessFeePaid>>s.Password;
        while(!file.eof())
        {
            if(s.ID==studID)
            {   cout<<"\n****************************************\n";
                cout <<"\t Name          - "<<s.Name<<"\n";
                cout <<"\t ID            - "<<s.ID<<"\n";
                cout <<"\t PROGRAM       - "<<s.Program<<"\n";
                cout <<"\t CASTE         - "<<s.Caste<<"\n";
                if(s.isMessFeePaid==true){
                cout <<"\t MessFeeStatus - "<<"paid"<<"\n";
                }
                else{
                cout <<"\t MessFeeStatus - "<<"not paid"<<"\n";

                }
                cout<<"\n****************************************\n";

             }
          file>>s.ID>>s.Name>>s.Caste>>s.Program>>s.isSemesterFeePaid>>s.isMessFeePaid>>s.Password;
        }
        file.close();
        cout <<"\n Press any key to return to homepage \n";
        getchar();
        studentHomePage SHP6;
        SHP6.displayHomePage(studID);
    }
