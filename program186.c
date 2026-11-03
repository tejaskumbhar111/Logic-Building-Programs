/*
INPUT:  6
OUTPUT: 0 1 2 3 4 




*/
#include <stdio.h>
#include <stdlib.h>

void Pattern(int iNo)
{
    int iCnt=0;
    for(iCnt=1;iCnt<=iNo;iCnt++)
    {
        printf("%d\t",iCnt+1);
    }
    printf("\n");
}

int main()
{
    int iValue = 0;
    printf("Enter the value: \n");
    scanf("%d", &iValue);
    

    Pattern(iValue);

    return EXIT_SUCCESS;
}