#include<stdio.h>
#include<conio.h>
void main()

{
    int num;
    
    printf("\n Enter Num: \n Prees-1 For English \n Press-2 For Hindi \n Press-3 For Gujrati ");
    scanf("%d",&num);
    
    switch(num)
    {
        case 1:printf("\n Your Language Is English");
        break;
        case 2:printf("\n Your Language Is Hindi");
        break;
        case 3:printf("\n Your Language Is Gujrati");
        break;
        default:printf("\n Your Number Is Not Valid");
        break;
    }
    
    getch();
}
