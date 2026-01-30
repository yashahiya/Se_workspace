#include <stdio.h>
#include <conio.h>
#include <string.h>
void main()
{
    FILE *yash;
    int choice;
    char filename[20], name[20], email[20], password[20], loginemail[20], loginpass[20];
    printf("Enter File Name : ");
    scanf("%s", &filename);

    printf("Press 1 For Signup \nPress 2 For Login : ");
    scanf("%d", &choice);

    switch (choice)
    {
    case 1:
        yash = fopen(filename, "w");
        printf("Enter Name : ");
        scanf("%s", &name);
        printf("Enter Email : ");
        scanf("%s", &email);
        printf("Enter Password : ");
        scanf("%s", &password);

        fprintf(yash, "%s\n%s\n%s\n", name, email, password);
        fclose(yash);

        break;

    case 2:
        yash = fopen(filename, "r");
        if (yash == NULL)
        {
            printf("No User Found Please Signup First....");
            fclose(yash);
            break;
        }

        else
        {
            printf("Enter Email : ");
            scanf("%s", &loginemail);
            printf("Enter Password : ");
            scanf("%s", &loginpass);

            fscanf(yash, "%s", name);
            fscanf(yash, "%s", email);
            fscanf(yash, "%s", password);
    
       printf("Stored Email: %s\n", email);
        printf("Stored Password: %s\n", password);
    
            //fclose(yash);
            if (strcmp(loginemail, email) == 0)
            {
                if (strcmp(loginpass, password) == 0)
                {
                    printf("login Successfully");
                }
                else
                {
                    printf("Invalid Password");
                }
            }
                else
                {
                    printf("Invalid Email");
                }
            }
        }
    }

