#include<stdio.h>
#include<conio.h>
struct book
{
    int num;
    char bookname[20];
    int quantity;
    
}b1;
void main()
{
    struct book b1;
    int count = 0;
    
    printf("Enter Book Name : ");
    scanf("%s",&b1.bookname);
    count++;
    
    printf("%s %d",b1.bookname,count);
    
    getch();
}