#include<stdio.h>
int main()
{
    int i,n,j;
    printf("Write the value of n:");
    scanf("%d",&n);
    printf("Series: ");
    for ( i = 1; i <= n; i++)
    {
        for ( j = 1; j <= i; j++)
        {
            printf("%d\n",i);
        }
        
    }
}