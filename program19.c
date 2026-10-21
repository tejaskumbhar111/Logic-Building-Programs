#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

// prepare notes

bool CheckEven(int iNo)
{
    if ((iNo % 2) == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}
int main()
{

    int iValue = 0;
    bool bRet=false;
    printf("Enter NUmber:\n ");
    scanf("%d", &iValue);

   bRet =  CheckEven(iValue);
   if(bRet==true)
   {
    printf("It is even");
   }
   else
   {
    printf("It is odd");
   }


    return EXIT_SUCCESS;
}