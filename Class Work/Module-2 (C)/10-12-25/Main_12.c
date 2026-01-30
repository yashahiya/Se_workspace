#include<stdio.h>
#include<conio.h>

void main()
{
    int roll,pass;
    
    printf("Enter Your Roll Number: ");
    scanf("%d",&roll);
    
    printf("Enter Your Password : ");
    scanf("%d",&pass);
    
    if(roll==1234)
    {
      printf("\n Your Roll-Number Is Right");  
    }
    if(pass==0000)
    {
        printf("\n Your Password Is Right");
    }
    
    
    getch();
    
}
