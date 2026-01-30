#include<stdio.h>
#include<conio.h>
void main()
{
    int i , j , num;
    char a ;
    
    printf("Enter Any Number : ");
    scanf("%d",&num);
    
    for(i = 1 ; i <= num ; i++)
    {
        a='A';
        for(j = 1 ; j<= i ; j++)
        {
        printf("%c",a);
        a++;
        }
      printf("\n");  
    }
    getch();
}