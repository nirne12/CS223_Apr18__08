#include "MscGenObc.h"
#include<bits/stdc++.h>
#include <fstream>
#include<stdio.h>

using namespace std;

MscGenObc::MscGenObc()
{
    MscGenObcFees=40000;

}

int  MscGenObc ::CalculateFees2()
{
     fstream f;
     f.open("mscgensem.txt");
     f>>MscGenObcFees;
     f.close();
     return MscGenObcFees;
}
