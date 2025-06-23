#include <stdio.h>

int main() {
    int choice;

    do {
    
        printf("\nMenu:\n");
        printf("1. Read from disk\n");
        printf("2. Write to disk\n");
        printf("3. Erase disk\n");
        printf("4. Exit\n");
        printf("Enter your choice (1-4): ");
        
        
        scanf("%d", &choice);

        
        if (choice == 1) {
            printf("You selected: Read from disk\n");
        }
        else if (choice == 2) {
            printf("You selected: Write to disk\n");
        }
        else if (choice == 3) {
            printf("You selected: Erase disk\n");
        }
        else if (choice == 4) {
            printf("Exiting program. Goodbye!\n");
        }
        else {
            printf("Invalid choice! Please select a number between 1 and 4.\n");
        }

    } while (choice != 4);  
}