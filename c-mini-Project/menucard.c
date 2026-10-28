#include <stdio.h>
int main()


{
    int choice, quantity;
     int total = 0;
 while (1)
    {
         printf("\n");
        printf("====================================\n");
        printf("       WELCOME TO EMERTXE CAFE\n");
        printf("====================================\n");
        printf("              MENU CARD\n");
        printf("------------------------------------\n");
        printf("  1. Coffee        - Rs. 50\n");
        printf("  2. Tea           - Rs. 20\n");
        printf("  3. Burger        - Rs. 100\n");
        printf("  4. Pizza         - Rs. 150\n");
        printf("  5. Pasta         - Rs. 120\n");
        printf("  6. Chocolate Cake- Rs. 80\n");
        printf("  7. Sandwich      - Rs. 80\n");
        printf("  8. Exit\n");
    printf("------------------------------------\n");

           printf("Enter your choice: ");
           scanf("%d", &choice);


        
        if (choice == 8)
        {
            break;
        }

        if (choice < 1 || choice > 8)
        {
            printf("Invalid choice! Please try again.\n");
            continue;
        }

        printf("Enter quantity: ");
        scanf("%d", &quantity);

        
        if (quantity <= 0)
        {
            printf("Invalid quantity! Please try again.\n");
            continue;
        }

        if (choice == 1)
            total = total + 50 * quantity;
         else if (choice == 2)
            total = total + 20 * quantity;
         else if (choice == 3)
            total = total + 100 * quantity;
         else if (choice == 4)
            total = total + 150 * quantity;
         else if (choice == 5)
            total = total + 120 * quantity;
         else if (choice == 6)
            total = total + 80 * quantity;
          else if (choice == 7)
        total = total + 80 * quantity;

        printf("\n------------------------------------\n");
        printf("  Item added successfully!\n");
        printf("  Current Bill: Rs. %d\n", total);
        printf("------------------------------------\n");
    }


    
    printf("\n");
    printf("************************************\n");
    printf("          EMERTXE CAFE BILL\n");
    printf("************************************\n");
    printf("  Total Amount: Rs. %d\n", total);
    printf("------------------------------------\n");
    printf("  Thank you for visiting!\n");
    printf("  Have a sweet day!\n");
    printf("************************************\n");
    return 0;
}
