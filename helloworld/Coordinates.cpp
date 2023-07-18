#include<stdio.h>
int main()
{
    float x,y;
    printf("Write the X-Coordinate of the point:");
    scanf("%f",&x);
    printf("write the Y-Coordinate of the point:");
    scanf("%f",&y);
    if ((x==x and x!=0) and (y==y and y!=0))
    {
        printf("(%f,%f) is in Quadrant I",x,y);
   
    }
    else if ((x==-x and x!=0) and (y==y and y!=0))
    {
        printf("(%f,%f) is in Quadrant II",x,y);

    }
    else if ((x==-x and x!=0) and (y==-y and y!=0))
    {
        printf("(%f,%f) is in Quadrant III",x,y);

    }
    else if ((x==x and x!=0) and (y==-y and y!=0))
    {
        printf("(%f,%f) is in Quadrant IV",x,y);
    }
    else if ((x==x or -x) and y==0)
    {
        printf("(%f,%f) is on X-Axis",x,y);

    }
    else if (x==0 and (y==y or -y))
    {
        printf("(%f,%f) is on Y-Axis",x,y);

    }
    
    
    
    
    
    
}