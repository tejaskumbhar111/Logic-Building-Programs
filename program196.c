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

//Time complexity O(2N)

int main()
{
    int iCnt=0;
    for (iCnt= 65; iCnt <=90; iCnt++)
    {
        printf("%d\t%c\n",iCnt,iCnt);
    }//A to Z and ASCII Values
    
   

    return EXIT_SUCCESS;
}