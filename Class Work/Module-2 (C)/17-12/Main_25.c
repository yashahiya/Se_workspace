#include<stdio.h>
#include<conio.h>

void main()

{
    int i,j,num;
    
    printf("Enter Number : ");
    scanf("%d",&num);
    
    for(i=1;i<=num;i++)//row
    {
        for(j=1;j<=i;j++)//column
        {
            printf("*");
        }
        printf("\n");
    }
    getch();
}