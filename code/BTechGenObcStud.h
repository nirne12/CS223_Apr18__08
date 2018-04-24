#ifndef BTECHGENOBCSTUD_H
#define BTECHGENOBCSTUD_H
#include"Student.h"

class BTechGenObcStud : public Student
{
public:
    int under1lac;
    int bet1to5lac;
    int above5lac;
    BTechGenObcStud();  //constructor
    int  CalculateFees(int x);  //calculate fees for different family income
};

#endif // BTECHGENOBCSTUD_H
