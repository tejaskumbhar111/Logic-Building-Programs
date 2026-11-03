/*
INPUT:  4
OUTPUT: 




*/
#include <stdio.h>
#include <stdlib.h>

void Pattern(int iNo)
{
    int iCnt=0;
    for(iCnt=-iNo;iCnt<=iNo;iCnt++)//O(2N)
    {
        printf("%d\t",iCnt);
    }
    printf("\n");
}

//Time complexity O(2N)

int main()
{
    int iValue = 0;
    printf("Enter the value: \n");
    scanf("%d", &iValue);
    

    Pattern(iValue);

    return EXIT_SUCCESS;
}