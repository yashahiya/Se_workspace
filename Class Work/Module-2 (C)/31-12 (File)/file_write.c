#include<stdio.h>
#include<conio.h>

int main()
{
    int choice;
    char name[20],email[20],pass[20];

    FILE *yash;

    printf("\n press 1 for signup \n prees 2 for login \n ");
    scanf("%d",&choice);
    
    switch(choice)
    {
        case 1:
        printf("Enter Your Name : ");
        scanf("%s",&name);
        printf("Enter Your E-mail : ");
        scanf("%s",&email);
        printf("Enter Your Password : ");
        scanf("%s",&pass); 
        
        yash=fopen("details.txt","w");
        fprintf(yash,name);
        fprintf(yash,email);
        fprintf(yash,pass);
        break;
        
        case 2:
        break;
        
        
    }
    return 0;
}