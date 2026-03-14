#include<conio.h>
#include<stdio.h>
int main()
{
    int i,j;
    for(i=1;i<=5;i++) //row
    {
        for(j=1;j<=i;j++)  //columns
        {
        printf("%c",'a'+j-1);
        }
        printf("\n");
    }
}