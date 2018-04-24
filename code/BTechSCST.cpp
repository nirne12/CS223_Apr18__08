#include "BTechSCST.h"
#include<bits/stdc++.h>
#include <fstream>
#include<stdio.h>

using namespace std;

BTechSCST::BTechSCST()
{
        ScStFees=15000;

}
int  BTechSCST ::CalculateFees1()
{
     fstream f;
     f.open("bstsem.txt");
     f>>ScStFees;
     f.close();
     return ScStFees;
}

