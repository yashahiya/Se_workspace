#include<stdio.h>
#include<conio.h>
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
    struct student s1={"john Deo",20,{"new York",10001}};
    printf("\n%s",s1.add.city);
    printf("\n%d",s1.add.zip);
    printf("\n%s",s1.name);
    printf("\n%d",s1.age);
}