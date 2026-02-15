#include<stdio.h>
#include<conio.h>
void main()
{
    int i,j,num;
    
    printf("enter any number");
    scanf("%d",&num);
    
    for(i=1;i<= num;i++)
    {
        for(j=1;j<=i;j++)
        
        {
         int total=i*i;
        printf("%d",total);
        }
        
        printf("\n");
    }
    getch();
    
}