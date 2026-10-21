//output 1 3 5 7 9 
//input 10 
#include <stdio.h>
#include <stdlib.h>

void Display(int iNo)
{
    //iCnt++ -> iCnt=iCnt+1;

    for (int iCnt = 1; iCnt<= iNo; iCnt+=2)
    {
        printf("%d\t", iCnt);//prinft("%d\t*\n",iCnt);
    }

    printf("\n");
}

int main(void)
{
    int iValue = 0;

    printf("Enter the Frequency:\n");
    scanf("%d", &iValue);

    Display(iValue);

    return EXIT_SUCCESS;
}


