#include<stdio.h>
int main()
{
    int i,j,r;
    printf("enter no of rows:");
    scanf("%d",&r);
    printf("Pattern:\n");
    for ( i = 1; i <= r; i++)
    {
        for ( j = 1; j <= r - i; j++)
        {
            printf(" ");
        }
        for ( j = 1; j <=i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
}