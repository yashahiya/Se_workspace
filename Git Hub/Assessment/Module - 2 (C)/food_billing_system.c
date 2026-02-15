#include<conio.h>
#include<stdio.h>
#include<stdbool.h>
#include<stdlib.h>
int main()
{
    int table_no,choice,bill=0,qua;
    printf("Enter Table No.");
    scanf("%d",&table_no);
    
    
    
    while(true)
    {
        printf("\n Enter Your Order : ");
        printf("\n----------Menu--------");
        printf("\n Press 1 For Pizza... Price=180rs/pcs \n Press 2 For Burger... Price=100rs/pcs \n Press 3 For Dosa... Price=120rs/pcs \n Press 4 For Idli... Price=50rs/pcs \n Press 0 For Exit \n");
        scanf("%d",&choice);   
        
        switch(choice)
        {
            case 1:
            
            printf("\nYou Have Selected Pizza");
            printf("\n Enter Quantity : ");
            scanf("%d",&qua);
            bill+=180*qua;
            printf("\nYour Total Bill Is : %d",bill);
            break;
            
            case 2:
            printf("\nYou Have Selected Burger");
            printf("\n Enter Quantity : ");
            scanf("%d",&qua);
            bill+=100*qua;
            printf("\nYour Total Bill Is : %d",bill);
            break;
            
            case 3:
            printf("\nYou Have Selected Dosa");
            printf("\n Enter Quantity : ");
            scanf("%d",&qua);
            bill+=120*qua;
            printf("\nYour Total Bill Is : %d",bill);
            break;
            
            case 4:
            printf("\nYou Have Selected Idli");
            printf("\n Enter Quantity : ");
            scanf("%d",&qua);
            bill+=50*qua;
            printf("\nYour Total Bill Is : %d",bill);
            break;
            
            case 0:
            printf("\n Your Final Bill Is : %d",bill);
            exit(0);
            
            default:
            printf("Item Not Available");
            break;
        }
        
    }
    
}