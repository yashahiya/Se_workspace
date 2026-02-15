#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
    char ch[14]="yash";
    char chh[12]="";
    
    do
    {
        printf("Enter Password : ");
        scanf("%s",&chh);
    }
    while(strcmp(chh,ch)!=0);
    
        printf("Your Answer Is Correct");
    
}