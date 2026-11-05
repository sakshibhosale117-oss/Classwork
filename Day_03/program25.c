#include<stdio.h>
#include<stdlib.h>

int main()
{
    char sName[30];

    printf("Enter your name :\n");
    scanf("%s",sName);

    printf("Welcome %s\n",sName);

    return EXIT_SUCCESS;
}

/*
C:\Users\Lenovo\Desktop\LB>Myexe.exe
Enter your name :
sakshi bhosale
Welcome sakshi

C:\Users\Lenovo\Desktop\LB>Myexe.exe
Enter your name :
 sakshi bhosale
Welcome sakshi
*/