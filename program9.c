#include<stdio.h>
#include<stdlib.h>



int Addition(
            int iNo1,       //First input
            int iNo2        //Second Input
            )
{
    int iAns = 0;

    iAns = iNo1 + iNo2; //Business Logic

    return iAns;

}

int main(){
    int iValue1=0,iValue2=0,iResult=0;
    printf("Enter the First Number:\n");
    scanf("%d",&iValue1);

    printf("Enter the Second Number:\n");
    scanf("%d",&iValue2);

   iResult=Addition(iValue1,iValue2);
   printf("Addition is:%d",iResult);

   return EXIT_SUCCESS;
    
}