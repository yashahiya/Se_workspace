#include<stdio.h>
#include<conio.h>
void main()
{
    int c,a;
    float i;
    
    printf("enter your capital and interst");
    scanf("%d %f",&c,&i);
    a=c*i/100;
    printf("total interst is:%d",a);
    printf("\n total amt is:%d",a+c);
    
    getch();
    
    
}