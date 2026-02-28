#include<conio.h>
#include<stdio.h>
int main()
{
    int num=14;
    int *ptr;
    
    ptr=&num;
    printf("Original value of num: %d\n", num);
   
    
    *ptr = 25;
    printf("\nAfter modifying using pointer:\n");
    printf("Updated value of num: %d\n", num);


}