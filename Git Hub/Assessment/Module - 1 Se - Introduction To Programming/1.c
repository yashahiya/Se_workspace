#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<stdbool.h>
void main()
{
    int table_no=0,choice,bill=0;
    printf("Enter Table Number :");
    scanf("%d",&table_no);
    
    while(true)
{
    printf("\nPress 1 For Pizza Price Is 180rs \nPress 2 For Burger Price Is 100rs \nPress 3 For Dosa Price Is 120rs \nPress 4 For Idli Price Is 50rs \nPress 0 For Exit...\n");
    scanf("%d",&choice);
    
    switch(choice)
    {
        case 1:
    bill+=180;
    break;
    
    case 2:
    bill+=100;
    break;
    
    case 3:
    bill+=120;
    break;
    
    case 4:
    bill+=50;
    break;
    
    case 0:
    exit(0);
    
    default:
    printf("Item Not Available");
    break;
    }
    printf("Total Bill Is :%d",bill);
}
getch();
}

