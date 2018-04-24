#include "ChangePassword.h"
#include<bits/stdc++.h>
#include <fstream>
#include<stdio.h>

using namespace std;

  void ChangePassword ::takePassword(string ID)
   {   string s1;
        cout <<" ENTER NEW 8 CHARACTER PASSWORD  :";
      //  cin>>newPassword;
        getline(cin,newPassword);
        cout <<" ENTER CONFIRM PASSWORD          :";
        getline(cin,s1);
        if(newPassword.size()==8&&newPassword==s1){

                updatePassword(ID);
        }
        else{
            cout<<"PLEASE ENTER 8 CHARACTER AND SAME PASSWORD  \n";
            takePassword(ID);
        }
    }
    void ChangePassword ::updatePassword(string ID)
    {
        Student s;
        fstream file;
        fstream dummy;
        file.open("bhadwa.txt");
        dummy.open("bhadwa2.txt",ios::app);
        file>>s.ID>>s.Name>>s.Caste>>s.Program>>s.isSemesterFeePaid>>s.isMessFeePaid>>s.Password;
        while(!file.eof())
        {
            if(s.ID==ID)
            {
                s.Password=newPassword;
            }
        dummy<<s.ID<<"\n"<<s.Name<<"\n"<<s.Caste<<"\n"<<s.Program<<"\n"<<s.isSemesterFeePaid<<"\n"<<s.isMessFeePaid<<"\n"<<s.Password<<"\n";
        file>>s.ID>>s.Name>>s.Caste>>s.Program>>s.isSemesterFeePaid>>s.isMessFeePaid>>s.Password;
        }
        file.close();
        dummy.close();
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
        cout <<"\nYour Password Is Successfully Updated \n";
        cout <<" Press any key to return to homepage \n";
        getchar();
        studentHomePage SHP5;
        SHP5.displayHomePage(ID);
    }
