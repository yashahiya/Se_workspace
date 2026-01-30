#include<stdio.h>
#include<conio.h>
void main()
{
    int roll,pass;
    
    printf("Enter Your Roll Number : ");
    scanf("%d",&roll);
    printf("Enter Your Password : ");
    scanf("%d",&pass);
    
    if(roll==204 && pass==1427)
    {
        printf("Login Success.");
    }
    else
    {
        printf("Login Fail.");
    }
    getch();
}