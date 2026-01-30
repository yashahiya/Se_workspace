#include<stdio.h>
#include<conio.h>
void main()
{
    int a,b,c,d,e;
    float f,p;
    
    printf("enter your marks");
    scanf("%d %d %d %d %d ",&a,&b,&c,&d,&e);
    f=a+b+c+d+e;
    
    printf("\n your total marks is:%f",f);
    p=f/500*100;
    printf("\n your percentage is:%f",p);
    
    getch();
    
    
    
    
}