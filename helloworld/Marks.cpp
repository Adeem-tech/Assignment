#include<stdio.h>
int main()
{
    float m,p,c,cs,Eng,Percentage,Total;
    printf("Write marks for Maths:");
    scanf("%f",&m);
    printf("Write marks for Physics:");
    scanf("%f",&p);
    printf("Write marks for Chemistry:");
    scanf("%f",&c);
    printf("Write marks for Computer-Science:");
    scanf("%f",&cs);
    printf("Write marks for English:");
    scanf("%f",&Eng);
    Total=m+p+c+cs+Eng;
    Percentage=(Total/500)*100;
    printf("Percentage score of Student is %f\n",Percentage);
    if (Percentage>90)
    {
        printf("Grade is A+");
    }
    else if (80<Percentage<90)
    {
        printf("Grade is A"); 
    }
    else if (70<Percentage<80)
    {
        printf("Grade is B");
    }
    else if (60<Percentage<70)
    {
        printf("Grade is C");
    }
    else if (50<Percentage<60)
    {
        printf("Grade is D");
    }
    else if (40<Percentage<50)
    {
        printf("Grade is E");
    }
    else if (30<Percentage<40)
    {
        printf("Grade is F");
    }
}
    
    
    
    
    
    
