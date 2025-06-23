#include <stdio.h>

void main() {
    int num1, num2;

    printf("Give the first number : ");
    scanf("%d", &num1);

    printf("Give me the second number : ");
    scanf("%d", &num2);

    if (num1 > num2) {
        printf("The bigger number is: %d\n", num1);
    } else {
        if (num1 < num2) {
            printf("The second bigger number is: %d\n", num2);
        } else {
            printf("The numbers are equal\n");
        }
    }
   
}