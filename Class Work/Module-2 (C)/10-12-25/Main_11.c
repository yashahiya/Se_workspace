#include<stdio.h>
#include<conio.h>
void main()
{
    int marks;
    
    printf("Enter Your Marks: ");
    scanf("%d",&marks);
    
    if(marks>=70)
    {
        printf("Grade A");
    }
      if(marks>=60)
    {
        printf("Grade B");
    }
      if(marks>=50)
    {
        printf("Grade C");
    }
      if(marks>=40)
    {
        printf("Grade D");
    }
    else
    {
        printf("Fail");
    }
    getch();
}