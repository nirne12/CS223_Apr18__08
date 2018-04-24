#ifndef MSCGENOBC_H
#define MSCGENOBC_H
#include"Student.h"

class MscGenObc : public Student
{   public:
    int MscGenObcFees;
    MscGenObc();
    int  CalculateFees2();
};

#endif // MSCGENOBC_H
