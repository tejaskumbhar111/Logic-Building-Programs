#include"Header.h"
int main()
{

    int iValue1=0,iValue2=0,iResult=0;

    printf("Enter the First Number:\n");
    if(scanf("%d",&iValue1)!=1)
    {
        fprintf(stderr,"Unable to proceed input is invalid\n");//error aala ki stderr best aal ki stdout
        return EXIT_FAILURE;
    }

    printf("Enter the Second Number:\n");
    if(scanf("%d",&iValue2)!=1)
    {
        fprintf(stderr,"Unable to proceed input is invalid\n");//error aala ki stderr best aal ki stdout
        return EXIT_FAILURE;
    }

   iResult=Addition(iValue1,iValue2);
   printf("Addition is:%d",iResult);

   return EXIT_SUCCESS;
   //Prototype of funtions .h
   //Helper method    .c
   //Main   .c
    
}