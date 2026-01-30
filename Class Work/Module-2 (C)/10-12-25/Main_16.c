#include<stdio.h>
#include<conio.h>
void main()
{
    char ch;
    
    printf("Enter Character : ");
    scanf("%c",&ch);
    
    if(ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
    {
        printf("It Is A Vowel");
    }
    else
    {
        printf("It Is A Consonant");
    }
    getch();
    
}