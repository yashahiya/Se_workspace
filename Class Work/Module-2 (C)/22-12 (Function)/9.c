#include<stdio.h>
#include<conio.h>
#include<string.h>

void main()
{
    char ch[14] = "mango";
    char ch2[12] = "";

    do
    {
        printf("What Is Your Favourite Fruit?");
        scanf("\n %s",&ch2);
    }

    while(strcmp(ch2,ch)!=0);
    
        printf("Your Answer Is Correct");

        getch();
    
}