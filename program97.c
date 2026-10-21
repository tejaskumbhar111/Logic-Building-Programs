#include <stdio.h>
#include <stdlib.h>



 unsigned long long Factorial(int iNo)
{
    unsigned long long  iFact = 0;
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
    unsigned long long iRet = 0;

    printf("Enter number:\n");
    scanf("%d", &iValue);

    iRet = Factorial(iValue);
    printf("Factorial is : %lld\n", iRet);

    return EXIT_SUCCESS;
}
