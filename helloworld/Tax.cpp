#include<stdio.h>
int main()
{
    int Salary,Tax;
    printf("Write your salary:");
    scanf("%d",&Salary);
    if (Salary<=150000)
    {
        printf("No Tax is to be paid");
    }
    else if (150001<Salary<=300000)
    {
        Tax=0.001*Salary;
        printf("Tax to be paid is %d",Tax);
    }
    else if (300001<Salary<=500000)
    {
        Tax=0.002*Salary;
        printf("Tax to be paid is %d",Tax);
    }
    else if (Salary>500001)
    {
        Tax=0.003*Salary;
        printf("Tax to be paid is %d",Tax);
    }
}