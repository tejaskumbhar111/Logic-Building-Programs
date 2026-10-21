#include<stdio.h>
#include<stdlib.h>

   int Maximum(int No1,int No2){
     if(No1>No2){
        return No1;

    }
    else{
        return No2;
    }
   
}
int main()
{
    int No1=0,No2=0,iResult=0;

    printf("Enter first Number: \n");
    scanf("%d",&No1);

    
    printf("Enter Second Number: \n");
    scanf("%d",&No2);

    
    iResult=Maximum(No1,No2);
    printf("Maximum  number is:\n",iResult);


   
    



    

    
    return EXIT_SUCCESS;

}