#include <stdio.h>
#include<conio.h>
#include<string.h>
void main(){
    char ch[10]="1234";
    char password[10]="";
    int count=0;

    do{
        printf("\nEnter Password: ");
        scanf("%s",&password);
            if(strcmp(password,ch)!=0){
                printf("\nYour Password Is Incorrect,Try Again");
                count++;
                if(count==3){
                    printf("\nYou Reached Maximum Attempts Try Again After Few Hours...");
                    break;
                }
            }
            else{
                printf("\nLogin Sucessfully");
                break;
            }
        }
        while(count!=3);
    }