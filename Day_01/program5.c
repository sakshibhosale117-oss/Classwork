/*
    step 1: Understand the problem statement
    step 2: write the algorithm
    step 3: Decide the programming language 
    step 4: write the program
    step 5: test the program
*/
//////////////////////////////////////////////////////////
//
//  Step 1:   Understand the problem statement
//          user is going to enter any two integers 
//          and we have to perform addition
//
//////////////////////////////////////////////////////////

//////////////////////////////////////////////////////////
//   step 2: write the algorithm
/*
    START
        Accept 1st number as No1
        Accept 2nd number as No2
        Create the varibale as Ans to store the result
        Perform the addition and store into Ans
        Display the result from Ans 
    END
*/
//////////////////////////////////////////////////////////

//////////////////////////////////////////////////////////
//
//      step 3: Decide the programming language
//              we select c programming
//////////////////////////////////////////////////////////

//////////////////////////////////////////////////////////
//
//      step 4: write the program
//
//////////////////////////////////////////////////////////

#include<stdio.h>

int main()
{
    int iValue1 = 0, iValue2 = 0, iResult = 0;

    printf("Enter first number :\n");
    scanf("%d",&iValue1);

    printf("Enter second number :\n");
    scanf("%d",&iValue2);

    iResult = iValue1 + iValue2;  //Business logic 

    printf("Addition is :%d\n",iResult);

    return 0;
}

