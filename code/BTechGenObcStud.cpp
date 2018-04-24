#include "BTechGenObcStud.h"
#include<bits/stdc++.h>
#include <fstream>
#include<stdio.h>

using namespace std;

BTechGenObcStud::BTechGenObcStud()
{
        under1lac=20000;
        bet1to5lac=60000;
        above5lac=119000;

}

int BTechGenObcStud ::CalculateFees(int x)
{
  if(x==1){
        fstream f;
  f.open("bgunder1.txt");
        f>>under1lac;
         f.close();
        return under1lac;
          }
  else if(x==2)
        {
            fstream f;
  f.open("bgbet1to5.txt");
        f>>bet1to5lac;
         f.close();
         return bet1to5lac;
        }
  else
        {
              fstream f;
      f.open("bgabove5.txt");
        f>>above5lac;
         f.close();
         return above5lac;
        }
}

