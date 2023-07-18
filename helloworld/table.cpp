#include<stdio.h>
int main()
{
    int i,X;
    printf("enter an integer:");
    scanf("%d",&X);
    printf("Multiplication table for %d:\n",X);
    for ( i = 1; i <= 10; i++)
    {
        printf("%d * %d = %d\n",X,i,X*i);
    }
    
}