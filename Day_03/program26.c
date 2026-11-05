#include<stdio.h>
#include<stdlib.h>

int main()
{
    char sName[30];

    printf("Enter your name :\n");
    scanf("%[^'\n']s",sName);           //accept input until enter

    printf("Welcome %s\n",sName);

    return EXIT_SUCCESS;
}
/*
C:\Users\Lenovo\Desktop\LB>gcc program26.c -o Myexe

C:\Users\Lenovo\Desktop\LB>Myexe.exe
Enter your name :
sakshi Tatyaso bhosale
Welcome sakshi Tatyaso bhosale
*/