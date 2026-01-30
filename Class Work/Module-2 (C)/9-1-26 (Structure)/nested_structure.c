#include<stdio.h>
#include<conio.h>
struct address
{
    char city[50];
    int zip;
};
struct student
{
    int age;
    char name[20];
    struct address add;
    
}s1;

int main()
{
    printf("Enter Name:");
    scanf("%s",&s1.name);
    
    printf("Enter Age:");
    scanf("%d",&s1.age);
    
    printf("Enter City:");
    scanf("%s",&s1.add.city);
    
    printf("Enter Zip Code:");
    scanf("%d",&s1.add.zip);
    
    printf("\nName Is %s",s1.name);
    printf("\nAge Is %d",s1.age);
    printf("\nCity Is %s",s1.add.city);
    printf("\nZip Code Is %d",s1.add.zip);
    getch();
}