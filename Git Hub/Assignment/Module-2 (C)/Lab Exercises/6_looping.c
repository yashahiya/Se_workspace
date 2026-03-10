#include<conio.h>
#include<stdio.h>
int main()
{
    int i;
    printf("For Loop\n");
    for(i=1;i<=10;i++)
    {
        printf("%d",i);
    }
    printf("\n");
    
    
    
    printf("while Loop\n");
    i=1;
    while(i<=10)
    {
        printf("%d",i);
        i++;
    }
    
    
    printf("\nDo-While Loop\n");
    i = 1;
    do
    {
        printf("%d",i);
        i++;
    }
    while(i<=10);
    
    
}