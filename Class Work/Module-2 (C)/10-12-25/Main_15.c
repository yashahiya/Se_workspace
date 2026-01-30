#include<stdio.h>
#include<conio.h>
void main()
{
    char ch;
    
    printf("Enter Character : ");
    scanf("%c",&ch);
    
    //vowel cosonant
    switch(ch)
    {
        case 'A':printf("It Is Vowel");
        break;
        
        case 'E':printf("It Is Vowel");
        break;
        
        case 'I':printf("It Is Vowel");
        break;
        
        case 'O':printf("It Is Vowel");
        break;
        
        case 'U':printf("It Is Vowel");
        break;
        
        default:printf("It Is Cosonant");
    }
    getch();
    
}