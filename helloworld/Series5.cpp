#include<stdio.h>
int main()
{
    int i=0,n;
    long long Y = 2;
    printf("Write the value of n:");
    scanf("%d",&n);
    printf("Series: \n");
    do
    {
        printf("%llu\n",Y);
        Y=Y*2;
        i++;
    } while (i<n);
    
}