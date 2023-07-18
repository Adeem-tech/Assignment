#include<stdio.h>
int main()
{
    int i,N;
    printf("write the value of n:");
    scanf("%d",&N);
    printf("Cube of natural numbers upto %d is:\n",N);
    for ( i = 1; i <= N; i++)
    {
        printf("%d^3 = %d\n",i,i*i*i);
    }
}