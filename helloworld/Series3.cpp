#include<stdio.h>
int main()
{
    int n,sum;
    printf("Write the value of n:");
    scanf("%d",&n);
    sum=((n+1)/2) * ((n+1)/2);
    printf("Sum of series from 1 to %d is: %d\n",n,sum);
}