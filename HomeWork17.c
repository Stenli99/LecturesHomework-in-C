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

        switch (choice) {
            case 1:
                printf("You selected: Read from disk\n");
                break;
            case 2:
                printf("You selected: Write to disk\n");
                break;
            case 3:
                printf("You selected: Erase disk\n");
                break;
            case 4:
                printf("Exiting program. \n");
                break;
            default:
                printf("Choice doesn't exist'! Please select a number between 1 and 4. Thank you. \n");
        }
    } while (choice != 4);
}