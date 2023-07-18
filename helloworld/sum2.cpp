#include<stdio.h>
int main()
{
    int i,n,sum=0;
    printf("Write the value of n:");
    scanf("%d",&n);
    for ( i = 1; i <= n; i++)
    {
        printf("%d\n",i);
        sum=sum+i;
    }
    printf("Sum of first %d natural numbers is %d",n,sum);
}