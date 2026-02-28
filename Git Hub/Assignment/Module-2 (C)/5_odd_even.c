#include<conio.h>
#include<stdio.h>
int main()
{
    int a,b;

    printf("Enter The Number :");
    scanf("%d",&a);
    
    if(a%2 == 0)
    {
        printf("Given Number Is Even \n");
    }
    else
    {
        printf("Number Is Odd \n");
    }
    
    
    printf("Enter The Number For Select Month :");
    scanf("%d",&b);
    
    switch(b)
    {
        case 1:
        printf("January");
        break;
        case 2:
        printf("Feb");
        break;
        case 3:
        printf("March");
        break;
        case 4:
        printf("April");
        break;
        case 5:
        printf("May");
        break
        ;case 6:
        printf("June");
        break;
        case 7:
        printf("July");
        break;
        case 8:
        printf("Aug");
        break;
        case 9:
        printf("Sep");
        break;
        case 10:
        printf("Oct");
        break;
        case 11:
        printf("Nov");
        break;
        case 12:
        printf("Dec");
        break;
    }
    
}
