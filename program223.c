#include <stdio.h>
#include <stdlib.h>

void Pattern(int iNo)
{
    int i = 0;
    int j = 0;

    for(i = 1; i <= iNo; i++)  // Rows
    {
        for(j = 1; j <= iNo; j++)  // Columns
        {
            if(i == j)
            {
                printf("#");
            }
            else
            {
                printf("%d", j);
            }
        }

        printf("\n");
    }
}

int main()
{
    int iValue = 0;

    printf("Enter the number:\n");
    scanf("%d", &iValue);

    Pattern(iValue);

    return EXIT_SUCCESS;
}