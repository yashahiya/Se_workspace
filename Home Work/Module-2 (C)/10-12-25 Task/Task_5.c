#include<stdio.h>
#include<conio.h>
void main()
{
    int press;
    float base,height,length,width,radius,area;
    
    printf("Press 1 For Area Of Triangle \n");
    printf("Press 2 For Area Of Rectangle \n");
    printf("Press 3 For Area Of Circle \n");
    printf("Enter Number : ");
    scanf("%d",&press);
    
    if(press==1)
    {
        printf("Enter Base Of Triangle : ");
        scanf("%f",&base);
        printf("Enter Height Of Triangle : ");
        scanf("%f",&height);
        
        area=0.5*base*height;
        printf("Area Of Triangle is %f",area);
    }
    if(press==2)
    {
        printf("Enter Length Of Rectangle");
        scanf("%f",&length);
        printf("Enter Width Of Rectangle");
        scanf("%f",&width);
        
        area=length*width;
        printf("Area Of Rectangle Is %f",area);
        
    }
    if(press==3)
    {
        printf("Enter radius Of Circle");
        scanf("%f",&radius);
        
        area=3.14*radius*radius;
        printf("Area Of Circle Is %f",area);
        
    getch();    
        
    }
    
    
}