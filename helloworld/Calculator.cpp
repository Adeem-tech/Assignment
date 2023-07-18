#include<stdio.h>
int main()
{
    char OperatorSymbol;
    float Number1,Number2,Sum,Divide,Multiply,Difference;
    printf("Write The Operator('+,-,/,*'):");
    scanf("%c",&OperatorSymbol);
    printf("Write First Number:");
    scanf("%f",&Number1);
    printf("Write a Second Number:");
    scanf("%f",&Number2);
    Sum=Number1+Number2;
    Multiply=Number1*Number2;
    Divide=Number1/Number2;
    Difference=Number1-Number2;
    if (OperatorSymbol == '+')
    {
        printf("%f",Sum);
    }
    else if (OperatorSymbol == '-')
    {
        printf("%f",Difference);
    }
    if (OperatorSymbol == '/' and Number2==0)
    {
        printf("Not defined");
    }
    else if (OperatorSymbol == '/')
    {
        printf("%f",Divide);
    }
    
    else if (OperatorSymbol == '*')
    {
        printf("%f",Multiply);
    }   
}