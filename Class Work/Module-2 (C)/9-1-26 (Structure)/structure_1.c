#include<stdio.h>
#include<conio.h>
struct student
{
    int id;
    char name[20];
};
void main()
{
    struct student st;
    
    printf("Enter Your Id : ");
    scanf("%d",&st.id);
    
    printf("Enter Your Name : ");
    scanf("%s",&st.name);
    
    printf("\nYour Id Is %d",st.id);
    printf("\nYour Name Is %s",st.name);
    
    getch();
}