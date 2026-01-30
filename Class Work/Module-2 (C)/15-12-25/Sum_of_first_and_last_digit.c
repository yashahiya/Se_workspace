#include<stdio.h>
#include<conio.h>
void main()
{
    int num,idigit=0,fdigit=0;
    
    printf("Enter Any Number : ");
    scanf("%d",&num);
    
    idigit = num % 10;
    
    while(num>0)
    {
        if(num>9)
        {
            num=num/10;
        }
        else
        {
            fdigit = num;//10
            num=num/10;
        }
    }
    int ans = fdigit+idigit;
    printf("Sum Of First And Last Digit %d",ans);
    
    getch();
}
 
    
    