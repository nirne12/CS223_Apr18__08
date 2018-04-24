#include "MscScSt.h"
#include<bits/stdc++.h>
#include <fstream>
#include<stdio.h>

using namespace std;

MscScSt::MscScSt()
{
    MscScStFees=10000;
}


int  MscScSt ::CalculateFees3()
{
    fstream f;
     f.open("mscstsem.txt");
     f>>MscScStFees;
     f.close();
     return MscScStFees;
}
