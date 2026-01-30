#include<stdio.h>
#include<conio.h>
void main()
{
    FILE *yash;
    char c;
    yash = fopen("details.txt","r");
    
    while((c=getc(yash))!=EOF)
    {
        printf("%c",c);
    }
    getch();
}