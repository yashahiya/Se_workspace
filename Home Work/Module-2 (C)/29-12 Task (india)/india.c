#include<stdio.h>
#include<conio.h>
void main()
{
    int i,j;
    char ch[5]="INDIA";
    
    for(i=0;i<=4;i++)
    {
        for(j=0;j<=i;j++)
        {
            
            printf("%c",ch[j]);
            
            
        }
        
        printf("\n");
    }
    getch();
}