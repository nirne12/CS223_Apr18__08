#ifndef PAYMESSFEE_H
#define PAYMESSFEE_H
#include "studentHomePage.h"
#include"Student.h"
#include<bits/stdc++.h>

class PayMessFee
{
public :
    int messFee;
    PayMessFee();
    void makeMessFeePayment (std::string ID);

    ///input is studentID, updates bhadwa.txt
    void updateMessFeeDetails(std::string ID);
    void backTostudHomePage( std::string ID);
};

#endif // PAYMESSFEE_H
