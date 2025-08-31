#include<stdio.h>

int main()
{
    int n1;
    int n2;
    char op;

    printf("Enter the value of Number 1: ");
    scanf("%d",&n1);
    
    printf("Enter the value of Number 2: ");
    scanf("%d",&n2);

    printf("Enter the value of Operator: ");
    scanf(" %c",&op);

    if(op=='+')
    {
        printf("Ans is %d ", n1+n2);
    }
    else if(op=='-')
    {
        printf("Ans is %d ", n1-n2);
    }
    else if(op=='/')
    {
        printf("Ans is %d ", n1/n2);
    }
    else if(op=='*')
    {
        printf("Ans is %d ", n1*n2);
    }

    return 0;





}