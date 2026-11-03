/*
INPUT:  4
OUTPUT: A B C D




*/
#include <stdio.h>
#include <stdlib.h>

// void Pattern(int iNo)
// {
//     int iCnt=0;
//     for(iCnt=0;iCnt<iNo;iCnt++)
//     {
//         printf("%c\t", 'A'+iCnt);
//     }
//     printf("\n");
// }

// Time complexity O(2N)

int main()
{
    char ch = '\0';
    int iCnt = 0;
    for (ch = 'A'; ch <= 'Z'; ch++)
    {
        printf("%c\n", ch);
    } // A to Z and ASCII Values

    return EXIT_SUCCESS;
}