cmake_minimum_required (VERSION 3.1)
project(SFMS)

set(CMAKE_CXX_STANDARD 11)

include_directories(.)

add_executable (SFMS
              
               main.cpp
               adminHomePage.h
               BTechGenObcStud.h
               BTechSCST.h
               ChangePassword.h
               logInPage.h
               mainPage.h
               MscGenObc.h
               MscScSt.h
              PayMessFee.h
               RegisterStudent.h
               RemoveStudent.h
               SeeReceipt.h
               SemesterFee.h
               Student.h
               studentHomePage.h
               UpdateDetails.h
               ViewDetails.h
               adminHomePage.cpp
               BTechGenObcStud.cpp
               BTechSCST.cpp
               ChangePassword.cpp
               logInPage.cpp
               mainPage.cpp
               MscGenObc.cpp
               MscScSt.cpp
              PayMessFee.cpp
               RegisterStudent.cpp
               RemoveStudent.cpp
               SeeReceipt.cpp
               SemesterFee.cpp
               Student.cpp
               studentHomePage.cpp
               UpdateDetails.cpp
               ViewDetails.cpp )
