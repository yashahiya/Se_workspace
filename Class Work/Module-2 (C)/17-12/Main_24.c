#include<conio.h>
#include<stdio.h>
void main()
{
    int i,j,num;
    
    printf("enter num");
    scanf("%d",&num);
    
    for(i=1;i<=num;i++)//throw
    {
        for(j=1;j<=num;j++)//column
        {
            printf("*");
        }
        printf("\n");
    }
    getch();
}