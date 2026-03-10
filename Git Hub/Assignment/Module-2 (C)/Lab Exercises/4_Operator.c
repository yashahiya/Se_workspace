#include<stdio.h>
#include<conio.h>
int main()
{
    int a , b;
    
     printf("Enter first Number:");
     scanf("%d",&a);
     printf("Enter Second Number:");
     scanf("%d",&b);

     printf("\nArithmetic Operator \n");
     printf("Addition Is :%d + %d = %d \n",a,b,a+b );
     printf("Substraction Is :%d - %d = %d \n",a,b,a-b);
     printf("Multiplication Is :%d * %d = %d \n",a,b,a*b);
    
    if(b!=0)
    {
        printf("Division: %d / %d = %d\n", a, b, a / b);
        printf("Modulus: %d %% %d = %d\n", a, b, a % b);
    }
    else {
        printf("Division and Modulus not possible \n");
    }
    
    printf("\nRelational Operations \n");
    printf("%d == %d : %d\n", a, b, a == b);
    printf("%d != %d : %d\n", a, b, a != b);
    printf("%d > %d  : %d\n", a, b, a > b);
    printf("%d < %d  : %d\n", a, b, a < b);
    printf("%d >= %d : %d\n", a, b, a >= b);
    printf("%d <= %d : %d\n", a, b, a <= b);
    
    printf("\nLogical Operations \n");
    printf("(%d && %d) : %d\n", a, b, a && b);
    printf("(%d || %d) : %d\n", a, b, a || b);
    printf("!(%d) : %d\n", a, !a);
    printf("!(%d) : %d\n", b, !b);

}