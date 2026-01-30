#include<conio.h>
#include<stdio.h>
struct address
{
    char city[50];
    int zip;
};
struct student
{
    char name[50];
    int age;
    struct address add;
}s1;
void main()
{
    printf("Enter Your Name:");
    scanf("%s",&s1.name);
    
    printf("Enter Your Age:");
    scanf("%d",&s1.age);
    
    printf("Enter Your City:");
    scanf("%s",s1.add.city);
    
    printf("Enter Your Zip-Code:");
    scanf("%d",&s1.add.zip);
    
    printf("\nName Is %s",s1.name);
    printf("\nAge Is %d",s1.age);
    printf("\nCity Is %s",s1.add.city);
    printf("\nZip-Code Is %d",s1.add.zip);
    
    if(s1.age>=18)
    {
        printf("\n\n Eligible To Vote");
    }
    else
    {
        printf("\n\nNot Eligible To Vote");
    }
}