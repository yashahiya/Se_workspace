#include<conio.h>
#include<stdio.h>

//with return type without para
int add()
{
    int a = 6;
    int b = 4;
    int c = a+b;

    return c;
}
void main()
{
    printf("%d",add());
    getch();
}