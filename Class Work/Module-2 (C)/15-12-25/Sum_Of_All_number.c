#include<stdio.h>
#include<conio.h>
void main()
{
    int num,sum=0;
    
    printf("Enter Any Number");
    scanf("%d",&num);
    
    while(num>0)
    {
        int rem = num % 10;
        sum+=rem;
        num=num/10;
    }
    printf("Sum Of All Digit Are : %d",sum);
    
    getch();
}