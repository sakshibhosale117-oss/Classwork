//it contains only main function

#include "Header.h"   //form file creaded as "Header.h"
                      //same directrory thats why double quotes is used
//////////////////////////////////////////////////////////
//
//  Entry point of the application
//
//////////////////////////////////////////////////////////
int main()
{
    int iValue1 = 0, iValue2 = 0, iResult = 0;

    printf("Enter first number :\n");
    if(scanf("%d",&iValue1) != 1)
    {
        fprintf(stderr,("Unable to proceed as Input is invalid"));

        return EXIT_FAILURE;
    }

    printf("Enter second number :\n");
    if(scanf("%d",&iValue2) != 1)
    {
        fprintf(stderr,("Unable to proceed as Input is invalid"));

        return EXIT_FAILURE;
    }

    iResult = Addition(iValue1, iValue2);

    printf("Addition is :%d\n",iResult);

    return EXIT_SUCCESS;
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