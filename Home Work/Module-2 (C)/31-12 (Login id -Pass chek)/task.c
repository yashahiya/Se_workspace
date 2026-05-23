#include<conio.h>
#include<stdio.h>
void main()
{
    int i,num;
    char name[20],email[20],pass[20],filename[20],username[20];
    FILE *data;
    
    printf("enter the file name : ");
    gets(filename);
    data=fopen(filename,"w");
    printf("\n press 1 for signup \n prees 2 for login : ");
    scanf("%d",&num);
    
    switch(num)
    {
    case 1 :printf("enter your name : ");
            scanf("%s",&name);
            printf("enter your email : ");
            scanf("%s",&email);
            printf("enter your password : ");
            scanf("%s",&pass);
            fprintf(data,"%s%s%s",name,email,pass);
            break;
    case 2 :printf("enter your username : ");
            scanf("%s",&username);
            printf("enter your password : ");
            scanf("%s",&pass); 
            fprintf(data,"%s%s",username,pass);
            break;
    }
     
}