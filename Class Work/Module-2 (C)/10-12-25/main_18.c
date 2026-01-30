#include<stdio.h>
#include<conio.h>
void main()
{
    int bill=0,num,quan=1,finalquan;
    
    printf("\n Enter Your Order \n Prees 1 For Pizza \n Press 2 For Burger \n Press 3 For Coffee : ");
    scanf("%d",&num);
    
    printf("Enter Quantity : ");
    scanf("%d",&quan);
    
    switch(num)
    {
        case 1:printf("Pizza Order Succesful.");
        finalquan=quan*100;
        bill+=finalquan;
        break;
        
        case 2:printf("Burger Order Succesful");
        finalquan=quan*100;
        bill+=finalquan;
        break;
        
        case 3:printf("Coffee Order Succesfull");
        finalquan=quan*100;
        bill+=finalquan;
        break;
    }
    printf("\n Your Total Bill Is %d",bill);
    getch();
}