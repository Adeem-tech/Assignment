#include<stdio.h>
int main()
{
    int n,i;
    long long t1 = 1, t2=1, t;
    printf("Enter the value of n:");
    scanf("%d",&n);
    printf("Fibonacci Series:\n");
    for ( i = 1; i <= n; i++)
    {
        printf("%llu\n",t1);
        t=t1+t2;
        t1=t2;
        t2=t;
    }
    
}