#include<stdio.h>
int main()
{
    int Quantity;
    int Rate;
    printf("Give Quantity: ");
    scanf("%d", &Quantity);
     printf("Give Rate: ");
     scanf("%d",&Rate);
    

    printf("Total INR: %d", Quantity*Rate);
   
    return 0;

}