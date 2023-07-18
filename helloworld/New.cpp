#include<stdio.h>
int main()
{
    float x,y,sum;
    printf("Write two numbers \n");
    scanf("%f%f", &x, &y);
    sum = x+y;
    printf("Addition of %f and %f is %f",x,y,sum);
}