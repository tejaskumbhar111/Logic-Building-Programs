
#include <stdio.h>
#include <stdlib.h>

int Summation(int iNo)
{
    int iSum = 1;
    int iCnt = 0;

    for (iCnt = 1; iCnt <= iNo; iCnt++)
    {
        iSum = iSum * iCnt;
    }

    return iSum;
}

int main(void)
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter the Number:\n");
    scanf("%d", &iValue);

    if (iValue < 0)
    {
        printf("Factorial is not defined for negative numbers.\n");
        return EXIT_SUCCESS;
    }

    iRet = Summation(iValue);

    printf("Factorial is: %d\n", iRet);

    return EXIT_SUCCESS;
}
