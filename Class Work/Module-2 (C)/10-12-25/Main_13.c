#include<stdio.h>
#include<conio.h>
void main()
{
    int age;
    
    printf("Enter Your Age: ");
    scanf("%d",&age);
    
    if(age>=18)
    {
        printf("You Are Eligible To Vote");
        
        //nested if
        
        if(age<=55)
        {
            printf("\n You Are Young");
        }
    
        else
        {
            printf("\n Senior Citizen");
            
        }
    }
    else
    {
        printf("Not Eligible To Vote");
    }
    getch();
}