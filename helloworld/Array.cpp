#include<stdio.h>
int main()
{
    int numbers[10];
    int i,sum=0;
    float avarage;
    printf("write 10 numbers:\n");
    for ( i = 1; i < 11; i++)
    {
        scanf("%d\n",&numbers[i]);
        sum = sum+numbers[i];
    }
    avarage = sum/10;
    printf("sum is %d\n",sum);
    printf("Average is %f",avarage);
}