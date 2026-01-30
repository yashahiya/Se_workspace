#include<stdio.h>
#include<conio.h>
struct student
{
    int id;
    char name[20];
}st[50];

int main()
{
    int i,num;
    
    printf("Enter Number Of Student:");
    scanf("%d",&num);
    
    for(i=0;i<=num;i++)
    {
        printf("\n Enter Your Id:");
        scanf("%d",&st[i].id);
        printf("\n Enter Your Name:");
        scanf("%s",&st[i].name);
    }
    for(i=0;i<=num;i++)
    {
        printf("\n Your Id Is %d And Your Name is %s",st[i].id,st[i].name);
    }
    getch();
 }