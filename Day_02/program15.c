//it contains only function

#include "Header.h"     //form file creaded as "Header.h"

//////////////////////////////////////////////////////////
//
//  Function name : Addition
//  input         : Integer , Integer
//  output        : Integer
//  Description   : Performs addition
//  date          : 04/10/2026
//  Author        : Sakshi Tatyaso Bhosale
//
//////////////////////////////////////////////////////////
int Addition(
                int iNo1,   // First input
                int iNo2    // Second input
            )
{
    int iAns = 0;

    iAns = iNo1 + iNo2;     //Business logic 

    return iAns;
}

/*
C:\Users\Lenovo\Desktop\LB>gcc program14.c program15.c -o Myexe

C:\Users\Lenovo\Desktop\LB>Myexe.exe
Enter first number :
10
Enter second number :
11
Addition is :21
*/