#include <stdio.h>
#include <stdlib.h>

int Factorial(int iNo)
{
    long int iFact = 0;
    int iCnt = 0;

    for (iCnt = 1 , iFact = 1; iCnt <= iNo; iCnt++)
    {
        iFact = iFact * iCnt;//1*2*3*4*5=120
        
    }
    return iFact;
}
int main()
{

    int iValue = 0;
    long int iRet = 0;

    printf("Enter number:\n");
    scanf("%d", &iValue);

    iRet = Factorial(iValue);
    printf("Factorial is : %ld\n", iRet);

    return EXIT_SUCCESS;
}
