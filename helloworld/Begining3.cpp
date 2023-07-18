#include<stdio.h>
int main()
{
    int a,b,c,d,Number,Reverse;
    printf("Write The First Digit:");
    scanf("%d",&a);
    printf("Write The Second Digit:");
    scanf("%d",&b);
    printf("Write The Third Digit:");
    scanf("%d",&c);
    printf("Write The Fourth Digit:");
    scanf("%d",&d);
    Number=(a*1000)+(b*100)+(c*10)+(d*1);
    printf("The 4-Digit Number is %d\n",Number);
    Reverse=(d*1000)+(c*100)+(b*10)+(a*1);
    printf("The Reverse is %d\n",Reverse);
    if (Reverse==Number)
    {
        printf("The Number is a Palindrome");
    }
    
}