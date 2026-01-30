#include<stdio.h>
#include<conio.h>

//function creation
int addition(int a,int b)
{
    return a+b;
}

int multi(int a,int b)
{
    return a*b;
}

int main()
{
    //function call
    printf("\n %d", addition(5,2));
    printf("\n %d",addition(4,2));
    printf("\n %d",addition(4,4));
    printf("\n %d",addition(2,2));
    printf("\n %d",multi(2,2));
    printf("\n %d",multi(4,4));


    return 0;
}