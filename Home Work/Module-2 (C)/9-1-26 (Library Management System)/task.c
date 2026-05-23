// Manage Library Management System 
// which performs below actions
// 1. Add Book
// 2. Display Books
// 3. Issue Book
// 4. Return Book
// 5. Exit
#include <stdio.h>
#include <conio.h>


struct Book //book ni detail mate use kri u chhe 
{
    int id;  // book id 
    char name[30]; // book name
    int quantity; // hal ketlo stock chhe 
    int f_qty; // pela no stock
};

int main() 
{
    struct Book b[50];   // Array 50 no chhe  of structure
    int choice, n = 0, i, id;

    do 
{
        printf("\n1. Add Book");
        printf("\n2. Display Books");
        printf("\n3. Issue Book");
        printf("\n4. Return Book");
        printf("\n5. Exit");
        printf("\nEnter your choice no :");
        scanf("%d", &choice);

        switch (choice) 
        {

            case 1:   // Add Book
                printf("\n Enter Book ID: ");
                scanf("%d", &b[n].id);

                printf("\n Enter Book Name: ");
                scanf(" %[^\n]", b[n].name);
                
                b[n].quantity = 5;  // 5 book no stock chhe 
                b[n].f_qty = 5;     // accounting stock

                
                n++;   // next book jgya mate 
                printf("\n Book Added Successfully");
                break;


            case 2:   // Display Books
                if (n == 0) 
                {
                    printf("\n No Books Available");
                } 
                else 
                {
                    for (i = 0; i < n; i++) 
                    {
                        int sold = b[i].f_qty - b[i].quantity; // qyt mate sold = 5-1
                        
                        printf("\n ID: %d", b[i].id);
                        printf("\n Name: %s", b[i].name);
                        printf("\n Available Quantity: %d", b[i].quantity);
                        printf("\n Books Issued (Sold): %d", sold);
                    }
                }
                break;



            case 3:   // Issue Book
                printf("\n Enter Book ID to Issue: ");
                scanf("%d", &id);
                    
                        for (i = 0; i < n; i++) 
                        {
                            if (b[i].id == id) // book id sachi chhe k nai e jove 
                            {
                    
                                if (b[i].quantity > 0) // stock ma hoi to inder jai 
                                {
                    
                                    int before = b[i].quantity;   // issue pela 
                                    b[i].quantity--;              // issue
                                    int after = b[i].quantity;    // issue pchi
                    
                                    printf("\nBook Issued Successfully");
                                    printf("\nQuantity Before Issue: %d", before);
                                    printf("\nQuantity After Issue : %d", after);
                    
                                } 
                                else 
                                {
                                    printf("\nBook Not Available");
                                }
                                break;
                            }
                        }
                        break;


           case 4:   // Return Book
                printf("\nEnter Book ID to Return: ");
                scanf("%d", &id);
            
                    for (i = 0; i < n; i++) 
                    {
                        if (b[i].id == id) 
                        {
                
                            int before = b[i].quantity;   // return pela stock
                            b[i].quantity++;              // return avel che etle qut vadhar va mate
                            int after = b[i].quantity;    // return pchi stock
                
                            printf("\nBook Returned Successfully");
                            printf("\nStock Before Return: %d", before);
                            printf("\nStock After Return : %d", after);
                
                            break;
                        }
                    }
                    break;


            case 5:
                printf("\nExit");
                break;

            default:
                printf("\nInvalid Choice");
        }

    } while (choice != 5); // jya sudhi 5 no nakhe tya sudhi loop chale 

    return 0;
}