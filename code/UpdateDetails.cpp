#include "UpdateDetails.h"
#include<bits/stdc++.h>
#include <fstream>
#include<stdio.h>

using namespace std;
UpdateDetails::UpdateDetails()
{
    UpdateAmount=0;

}
void UpdateDetails::UpdateSession(){
    int session;
    fstream ft;
    ft.open("session.txt");
    ft>>session;
    ft.close();
    session+=1;
    fstream fm;
    fm.open("session.txt",ios::trunc|ios::out);
    fm<<session;
    fm.close();
    Student stud;
    fstream f("bhadwa.txt");    ///old details of students
    fstream w("bhadwa2.txt",ios::app);  ///new details to be written
    f>>stud.ID>>stud.Name>>stud.Caste>>stud.Program>>stud.isSemesterFeePaid>>stud.isMessFeePaid>>stud.Password ;
    while (!f.eof())
    { stud.isSemesterFeePaid=false;
      stud.isMessFeePaid=false;
     w<<stud.ID<<"\n"<<stud.Name<<"\n"<<stud.Caste<<"\n"<<stud.Program<<"\n"<<stud.isSemesterFeePaid<<"\n"<<stud.isMessFeePaid<<"\n"<<stud.Password<<"\n";
     f>>stud.ID>>stud.Name>>stud.Caste>>stud.Program>>stud.isSemesterFeePaid>>stud.isMessFeePaid>>stud.Password ;
    }
    f.close();
    w.close();
    ///copying bhadwa2.txt to bhadwa.txt with overwriting thus erasing the old content of bhadwa.t
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
    cout<<" SESSION SUCCESSFULLY UPDATD \n";
    cout<<" PRESS ANY KEY \n";
    getchar();
    bakeTOHomePage4();
}
void UpdateDetails::UpdateFeeDetails(){
     string input,temp;
     int temp1;
     cout <<" ENTER VALID OPTION AMONG FOLLOWING \n";
     cout <<" 1. BTECH GEN/OBC ABOVE 5 LAC \n";
     cout <<" 2. BTECH GEN/OBC BETWEEN 1 TO 5 LAC \n";
     cout <<" 3. BTECH GEN/OBC BELOW 1 LAC \n";
     cout <<" 4. BTECH SC/ST SEMESTER FEE \n";
     cout <<" 5. MSC GEN/OBC SEMESTER FEE \n";
     cout <<" 6. MSC SC/ST SEMESTER FEE \n";
     cout <<" 7. MESS FEE \n";
     cin.ignore();
     getline(cin,input);
     cout<<" enter new amount for update existing amount  :";
     getline(cin,temp);
     if(std::all_of(temp.begin(), temp.end(), ::isdigit)){
        temp1=atoi(temp.c_str());
        UpdateAmount=temp1;
    // cin>>UpdateAmount;

     if(input=="1"){
      fstream fm;
      fm.open("bgabove5.txt",ios::trunc|ios::out);
      fm<<UpdateAmount;
      fm.close();
      cout<<" SUCCEFULLY UPDATED \n";
        }
      else if(input=="2")
     {
        fstream fm;
      fm.open("bgbet1to5.txt",ios::trunc|ios::out);
      fm<<UpdateAmount;
      fm.close();
      cout<<" SUCCEFULLY UPDATED \n";

     }
     else if(input=="3")
     {
        fstream fm;
      fm.open("bgunder1.txt",ios::trunc|ios::out);
      fm<<UpdateAmount;
      fm.close();
      cout<<" SUCCEFULLY UPDATED \n";
     }
     else if(input=="4")
     {
        fstream fm;
      fm.open("bstsem.txt",ios::trunc|ios::out);
      fm<<UpdateAmount;
      fm.close();
      cout<<" SUCCEFULLY UPDATED \n";
     }
     else if(input=="5")
     {
        fstream fm;
      fm.open("mscgensem.txt",ios::trunc|ios::out);
      fm<<UpdateAmount;
      fm.close();
      cout<<" SUCCEFULLY UPDATED \n";
     }
     else if(input=="6")

     {
        fstream fm;
      fm.open("mscstsem.txt",ios::trunc|ios::out);
      fm<<UpdateAmount;
      fm.close();
      cout<<" SUCCEFULLY UPDATED \n";
     }
     else if(input=="7")
        {
        fstream fm;
      fm.open("messfee.txt",ios::trunc|ios::out);
      fm<<UpdateAmount;
      fm.close();
      cout<<" SUCCEFULLY UPDATED \n";
        }
     else{
        cout<<" PLEASE ENTER VALID ENTRY \n";
        UpdateFeeDetails();
     }
     cout<<" PRESS ANY KEY \n";
     getchar();
     bakeTOHomePage4();
     }
     else{
     cout<<"PLEASE ENTER CORRECT AMOUNT \n";
     cout<<" PRESS ANY KEY \n";
     getchar();
     bakeTOHomePage4();}
}
void  UpdateDetails ::bakeTOHomePage4(){
    adminHomePage AHP2;
    AHP2.displayHomePageAd();
}
