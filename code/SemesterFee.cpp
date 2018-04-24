#include "SemesterFee.h"
#include<bits/stdc++.h>
#include <fstream>
#include<stdio.h>

using namespace std;
void SemesterFee :: identifyObject(string ID)
    {
        studID=ID;
        Student stud;
        fstream f;
        f.open("bhadwa.txt");
        f>>stud.ID>>stud.Name>>stud.Caste>>stud.Program>>stud.isSemesterFeePaid>>stud.isMessFeePaid>>stud.Password ;
        while(!f.eof())
        {
            if(stud.ID==ID)
            {
                studCaste=stud.Caste;
                studProgram=stud.Program;
                semFeeStatus=stud.isSemesterFeePaid;
                break;
            }
           f>>stud.ID>>stud.Name>>stud.Caste>>stud.Program>>stud.isSemesterFeePaid>>stud.isMessFeePaid>>stud.Password ;
        }
        takeInputDetails();
    }

void SemesterFee ::takeInputDetails()
    {   int x=0;
        //int k=0;
           string s;
        if((studCaste=="GENERAL"||studCaste=="OBC")&& studProgram=="BTech")
        {
           // int x;
            cout <<" ENTER VALID OPTION AMONG FOLLOWING \n";
            cout <<" 1. INCOME BELOW 1 LAC \n";
            cout <<" 2. INCOME BETWEEN 1 TO 5 LAC \n";
            cout <<" 3. INCOME ABOVE 5 LAC \n";
            cin.ignore();
            getline(cin,s);
            s.erase(remove_if(s.begin(), s.end(), :: isspace), s.end());
            if(s.size()!=1){
            cout<<"please enter correct input\n";
            cout<<"press any key to return to main page\n";
            getchar();
             studentHomePage SHP4;
            SHP4.displayHomePage(studID);

           }
        else{
           x=atoi(s.c_str());
          // studentInput=k;
           processSemFee(x);
           }

        }
        else{
            processSemFee(x);
        }

    }

void SemesterFee ::processSemFee(int x)
    {
        int fees;
        if ((studCaste=="GENERAL"||studCaste=="OBC") && studProgram=="BTech")
        {
            BTechGenObcStud BGO;
            fees=BGO.CalculateFees(x);
        }
        else if(studCaste=="SC/ST" && studProgram=="BTech")
        {
            BTechSCST BSS;
            fees=BSS.CalculateFees1();
        }
        else if((studCaste=="GENERAL"||studCaste=="OBC") && studProgram=="MSc")
        {
            MscGenObc MGO;
        fees=MGO.CalculateFees2();
        }
        else
        {
            MscScSt MSS;
            fees=MSS.CalculateFees3();
        }
        string  y;
      //  getchar();
        cout <<"YOUR SEMESTER FEES IS " <<fees<<"\n";
        cout <<"Press 1 to Proceed for payment ,else press 2 \n";
        cin.ignore();
        getline(cin,y);
       // cin.clear();
        //cin.ignore(INT_MAX,'\n');
     //   cout<<"nik";
     //   getchar();
        if(y=="1")
            {
             int count1=0;
    Student stud;
    fstream f("bhadwa.txt");    ///old details of students
    fstream w("bhadwa2.txt",ios::app);  ///new details to be written
    f>>stud.ID>>stud.Name>>stud.Caste>>stud.Program>>stud.isSemesterFeePaid>>stud.isMessFeePaid>>stud.Password ;
    while (!f.eof())
    {
        if(stud.ID==studID){
            if(stud.isSemesterFeePaid==false){
                stud.isSemesterFeePaid=true;
            }
            else{
               count1++;
               break;
             }
        }
     w<<stud.ID<<"\n"<<stud.Name<<"\n"<<stud.Caste<<"\n"<<stud.Program<<"\n"<<stud.isSemesterFeePaid<<"\n"<<stud.isMessFeePaid<<"\n"<<stud.Password<<"\n";
     f>>stud.ID>>stud.Name>>stud.Caste>>stud.Program>>stud.isSemesterFeePaid>>stud.isMessFeePaid>>stud.Password ;
    }
    f.close();
    w.close();
    ///copying bhadwa2.txt to bhadwa.txt with overwriting thus erasing the old content of bhadwa.t
    if(count1==0){
    fstream wtof( "bhadwa2.txt" );
    fstream forf( "bhadwa.txt" , ios::out );
    string tempString;
    while( !wtof.eof() )
    {
        getline( wtof , tempString );
        forf << tempString <<endl;
    }
    wtof.close();
    forf.close();
    remove("bhadwa2.txt");
    cout <<"SEMESTER FEES IS SUCCESFULLY PAID \n";}
    else{
      remove("bhadwa2.txt");
      cout<<"\n FEES HAS BEEN ALREADY PAID \n";

          }
            cout <<" Press any key to return to homepage \n";
            getchar();
            studentHomePage SHP4;
            SHP4.displayHomePage(studID);
            }
        else
            {
            studentHomePage SHP4;
            SHP4.displayHomePage(studID);
            }
    }

