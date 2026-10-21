
#include <stdio.h>
#include <stdlib.h>

void Display(int iNo)
{
    for (int iCnt = iNo; iCnt>= 1; iCnt--)
    {
        printf("%d * ", iCnt);
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
