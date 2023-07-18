#include<stdio.h>
int main()
{
    int Number;
    printf("Write Any Number:\n");
    scanf("%d", &Number);
    if (Number%2==0)
    {
        printf("The Number is Even");
    }
    else
    {
        printf("The Number is odd");
    }
    
}