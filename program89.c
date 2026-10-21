#include <stdio.h>
#include <stdlib.h>
 int iCnt=0;

void Display(int iNo)
{
    for(iCnt=1;iCnt<=iNo;iCnt++)
    {
        printf("%d\n",iCnt);
    }
}
int main()
{

    int iValue = 0;

    printf("Enter number:\n");
    scanf("%d", &iValue);

    Display(iValue);

    return EXIT_SUCCESS;
}
