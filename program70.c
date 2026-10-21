#include <stdio.h>
#include <stdlib.h>

void Display(int iNo)
{
    for (int iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("Jay Ganesh...\n");
    }
}
int main()

{
    int iValue=0;
    printf("Enter the Frequency:\n");
    scanf("%d",&iValue);

    
    Display(iValue);

    return EXIT_SUCCESS;
}