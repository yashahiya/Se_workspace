#include<stdio.h>
#include<conio.h>
void main()
{
    int press;
    
    
    printf("\n 1.For Addition ");
    printf("\n 2.For Subtraction ");
    printf("\n 3.For Multiplication ");
    printf("\n 4.For Division");
    printf("\n Enter Given Number : ");
    scanf("%d",&press);
    
    double num1,num2;
    printf("Enter Two Numbers");
    scanf("%lf %lf",&num1,&num2);
    
    int add=num1+num2;
    int sub=num1-num2;
    int mul=num1*num2;
    int div=num1/num2;
    
    switch(press)
    {
       case 1:printf("Your Answes is %d",add);
       break;
       
       case 2:printf("Your Answer Is %d",sub);
       break;
       
       case 3:printf("Your Answer Is %d",mul);
       break;
       
       case 4:printf("Your Answer Is %d",div);
       break;
    }
    getch();
}