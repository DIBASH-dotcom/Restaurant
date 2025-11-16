#include <stdio.h>

int main() {
    int choice;
    int quantity;
    int totalBill = 0;

    while(1) { 
        printf(" Menu\n");
        printf("1. Pizza - 200\n");
        printf("2. Burger - 100\n");
        printf("3. Sandwich - 50\n");
        printf("4. Cold Drink - 30\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        if(choice == 5) {
            break; 
        }

        printf("Enter quantity: ");
        scanf("%d", &quantity);

        switch(choice) {
            case 1:
                totalBill += 200 * quantity;
                break;
            case 2:
                totalBill += 100 * quantity;
                break;
            case 3:
                totalBill += 50 * quantity;
                break;
            case 4:
                totalBill += 30 * quantity;
                break;
            default:
                printf("Invalid choice\n");
        }
    }

    printf("Your total bill is: %d\n", totalBill);

    return 0;
}
