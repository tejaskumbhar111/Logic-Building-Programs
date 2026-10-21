#include <stdio.h>
#include <stdlib.h>

void CheckDivisible(int iNo)
{
    if ((iNo % 3 == 0))
    {
        if ((iNo % 5 == 0))
        {
            printf("IT is divisible");
        }
        else

        {
            printf("IT is not divisbile");
        }
    }
    else
    {

        printf("Is is not  divisible by \n");
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number:\n");
    scanf("%d", &iValue);

    CheckDivisible(iValue);

    return EXIT_SUCCESS;
}
