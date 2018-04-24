#ifndef MSCSCST_H
#define MSCSCST_H
#include"Student.h"

class MscScSt : public Student
{   public:
    int MscScStFees;
    MscScSt();
    int  CalculateFees3();
};
#endif // MSCSCST_H
