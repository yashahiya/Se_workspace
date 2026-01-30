#include<stdio.h>
#include<conio.h>

int main()
{
    int i,j,space;

    for(i=1;i<=5;i++)//row
    {
        for(space=0;space<=5-i;space++)
        {
            printf(" ");
        }
        for(j=1;j<=i;j++)//column
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}