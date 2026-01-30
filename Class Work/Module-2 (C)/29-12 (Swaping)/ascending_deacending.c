#include<stdio.h>
#include<conio.h>
void main()
{
    int marks[5],choice,i,j,temp;

    for(i=0;i<5;i++)
    {
        printf("Enter Marks %d: ",i+1);
        scanf("%d",&marks[i]);
    }
    for(i=0;i<5;i++)
    {
        printf("\n Your Marks Is : %d",marks[i]);
    }

    printf("\n Prees 1 For Ascending Press 2 For Descending");
    scanf("%d",&choice);

    switch(choice)
    {
        case 1:
        for(i=0;i<5;i++)
            {
                for(j=0;j<5;j++)
                {
                    if(marks[j] > marks[j+1])
                    {
                        temp = marks[j];
                        marks[j] = marks[j+1];
                        marks[j+1] = temp;
                    }
                }
            }

            printf("\n ascending order : ");
            for(i=0;i<5;i++)
            {
                printf("\n %d",marks[i]);
                
            }
        break;

        case 2:
            for(i=0;i<5;i++)
            {
                for(j=0;j<5;j++)
                {
                    if(marks[j] < marks[j+1])
                    {
                        temp = marks[j];
                        marks[j] = marks[j+1];
                        marks[j+1] = temp;
                    }
                }
            }

            printf("\n descending order : ");
            for(i=0;i<5;i++)
            {
                printf("\n %d",marks[i]);
            }

        break;

        default : printf("not valid");
        break;
    }
}