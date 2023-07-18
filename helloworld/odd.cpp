#include<stdio.h>
int main()
{
    int i,n,sum=0;
    printf("Write the value of n:");
    scanf("%d",&n);
    for ( i = 1; i <= n; i++)
    {
        printf("%d\n",((2*i)-1));
        sum=sum+((2*i)-1);
    }
    printf("Sum of first %d odd natural numbers is %d",n,sum);
}