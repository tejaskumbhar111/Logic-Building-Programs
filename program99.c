#include <stdio.h>
#include <stdlib.h>
int iCnt = 0;

void DisplayFactors(int iNo)
{
    printf("Factros of %d are \n",iNo);
 
    for (iCnt = 1; iCnt <= iNo; iCnt++)
    {
        if ((iNo % iCnt) == 0)
        {
            printf("%d\n", iCnt);

        }
    }
}
int main()
{

    int iValue = 0;

    printf("Enter number:\n");
    scanf("%d", &iValue);

    DisplayFactors(iValue);

    return EXIT_SUCCESS;
}

//Time Complexity : O(N)
