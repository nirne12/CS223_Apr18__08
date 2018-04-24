#ifndef SEMESTERFEE_H
#define SEMESTERFEE_H
#include<bits/stdc++.h>
#include "studentHomePage.h"
#include"Student.h"
#include"BTechGenObcStud.h"
#include"BTechSCST.h"
#include"MscGenObc.h"
#include"MscScSt.h"
class SemesterFee
    {
 public :
    std::string studID;
    std::string studCaste;
    std::string studProgram;
    bool semFeeStatus;
    void identifyObject(std::string ID);
    void takeInputDetails();
    void processSemFee(int x);
    };
#endif // SEMESTERFEE_H
