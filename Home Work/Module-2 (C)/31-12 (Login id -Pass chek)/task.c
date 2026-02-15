#include<stdio.h>
#include<conio.h>
int main()
{
    int choice;
    char name[20],email[20],pass[20];
    FILE *yash;

    printf("\n Press 1 For Signup \n Press 2 For Login");
    scanf("%d",&choice);

    switch(choice)
    {
        case 1:
        printf("\n Enter Your Name : ");
        scanf("%s",&name); 
        printf("\n Enter Your E-mail : ");
        scanf("%s",&email);
        printf("\n Enter Your Password : ");
        scanf("%s",&pass);

        yash=fopen("details.txt","w");
        fprintf(yash,name);
        fprintf(yash,email);
        fprintf(yash,pass);
        break;
    
        fclose(yash);

        
        
        case 2:
        printf("\n Enter Your E-mail : ");
        scanf("%s",&email);
        printf("\n Enter Your Password : ");
        scanf("%s",&pass);
        break;

        yash=fopen("details.txt","r");
        puts("\n\nemail\t\tpassword\n");
        while (!feof(yash));
        {
            if (email==email && pass==pass)
            {
                printf("\nlogin successful");
            }
            else
            {
                printf("Login Failed");
            }
        }
    }
}



        