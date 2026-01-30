#include<stdio.h>
#include<conio.h>

int main()
{
  
    int i,j,space,num;
    printf("Enter Any Number");
    scanf("%d",&num);
    
    for(i=1;i<=num;i++)//row
    {
        for(space=0;space<=num-i;space++)
        {
            printf(" ");
        }
        for(j=1;j<=i;j++)//col//2*i-1 //2-1-1
        {
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}