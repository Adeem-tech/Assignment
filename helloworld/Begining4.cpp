#include<stdio.h>
int main()
{
    int a,b,c,d,Number,Sum;
    printf("Write The First Digit:");
    scanf("%d",&a);
    printf("Write The Second Digit");
    scanf("%d",&b);
    printf("Write The Third Digit:");
    scanf("%d",&c);
    printf("Write The Fourth Digit:");
    scanf("%d",&d);
    Number=(a*1000)+(b*100)+(c*10)+(d*1);
    printf("The 4-Digit Number is %d\n",Number);
    Sum=a+b+c+d;
    printf("The Sum Of Digits Of The 4-Digit Number is %d",Sum);   
}