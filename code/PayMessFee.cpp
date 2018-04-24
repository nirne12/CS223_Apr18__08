#include "PayMessFee.h"
#include<bits/stdc++.h>
#include <fstream>
#include<stdio.h>

using namespace std;

PayMessFee::PayMessFee()
{

        messFee=12000;
}

void PayMessFee  :: makeMessFeePayment (string ID)
    {
        string  k;
        fstream f;
     f.open("messfee.txt");
     f>>messFee;
     f.close();
        cout << "\t\t\t\t PAYMENT GATEWAY \n\n";
        cout << "MESS FEE IS "<<messFee<<"\n\n";
        cout << "PRESS 1 TO PROCEED TO PAYMENT , ELSE ANY INTEGER FOR CANCELLING THE PAYMENT :";
        getline(cin,k);
        //cin.clear();
        //cin.ignore(INT_MAX,'\n');
        if(k=="1"){
            updateMessFeeDetails(ID);
        }
            else
                {
                studentHomePage SHP2;
                SHP2.displayHomePage(ID);
            }
    }

void PayMessFee :: updateMessFeeDetails(string ID)
    {
    int count1=0;
    Student stud;
    fstream f("bhadwa.txt");    ///old details of students
    fstream w("bhadwa2.txt",ios::app);  ///new details to be written
    f>>stud.ID>>stud.Name>>stud.Caste>>stud.Program>>stud.isSemesterFeePaid>>stud.isMessFeePaid>>stud.Password ;
    while (!f.eof())
    {
        if(stud.ID==ID){
            if(stud.isMessFeePaid==false){
                stud.isMessFeePaid=true;
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
    cout << "\n MESS FEE  SUCCESSFULLY PAID\n";}
    else{
      remove("bhadwa2.txt");
      cout<<"\n FEES HAS BEEN ALREADY PAID \n";

    }
    cout <<" Press any key to return to homepage \n";
    getchar();
    backTostudHomePage(ID);
    }


void PayMessFee :: backTostudHomePage( string ID)
    {
        studentHomePage SHP3;
        SHP3.displayHomePage(ID);
    }
