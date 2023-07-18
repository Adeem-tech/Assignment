#include<stdio.h>
int main()
{
    int i,n,j;
    printf("Enter Repetitions:");
    scanf("%d",&n);
    printf("Series:\n");
    for ( i = 0; i < n; i++)
    {
        for ( j = 1; j <= 5; j++)
        {
            printf("%d\n",j);
        }
        printf(""); 
    }
}