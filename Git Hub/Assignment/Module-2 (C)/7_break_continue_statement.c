#include<stdio.h>
#include<conio.h>
int main()
{
    int i;
    printf("Stop Loop When it reaches 5 : \n");
    for(i=1;i<=10;i++)
    {
        if(i==5)
        {
            break;
        }
        printf("%d",i);
    }
    
    printf("\nSkip 3 Number\n");
    for(i=1;i<=10;i++)
    {
        if(i==3)
        {
            continue;
        }
        printf("%d",i);
    }
}