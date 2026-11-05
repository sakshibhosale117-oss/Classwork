#include "Header.h"

#include<assert.h>                       //using for test purpose

int main()
{
    assert(Addition(10,11) == 22);      //error

    assert(Addition(-10,20) == 10);

    assert(Addition(-10,-20) == -30);

    return EXIT_SUCCESS;
}

//to test the code only run the program16.c   program15.c file 
//no need to run  program14.c or Header.h

/*
C:\Users\Lenovo\Desktop\LB>gcc program16.c program15.c -o TestExe

C:\Users\Lenovo\Desktop\LB>TestExe.exe
Assertion failed: Addition(10,11) == 22, file program16.c, line 7
*/