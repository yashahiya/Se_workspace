#include<stdio.h>
#include<conio.h>
void main()
{
    FILE *yash;
    int i,number;
    float balance;
    char ch,name[20],filename[10];
    
    printf("Enter The File Name : ");
    gets(filename);
    //scanf("%s",&filename);
    
    //put data in file
    
    yash = fopen("filename","w");
    
    printf("Enter Data : ");
    for(i=0;i<3;i++)
    {
        printf("\n Enter Your Name : ");
        scanf("%s",&name);
        printf("\n Enter Your Acc No. : ");
        scanf("%d",&number);
        printf("\n Enter Your Balance : ");
        scanf("%f",&balance);
        
        fprintf(yash,"%s\n%d\n%f\n",name,number,balance);
        
    }
    fclose(yash);
    
    //get data from file
    
    yash=fopen("filename","r");
    puts("number name balance");
    
    while(!feof(yash))
    {
        fscanf(yash,"%s %d %f",&name,&number,&balance);
        printf("%s\n%d\n%f\n",name,number,balance);
        
        fclose(yash);
    }
    getch();
    
}