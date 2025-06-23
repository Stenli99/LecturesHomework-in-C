#include <stdio.h>

int main() {
    int grades[20];
    int n, i, sum = 0;
    float average;

    printf("How many students? (max 20): ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        printf("Enter grade for student %d: ", i + 1);
        scanf("%d", &grades[i]);
        sum += grades[i];
    }

    printf("\nGrades entered: ");
    for (i = 0; i < n; i++) {
        printf("%d ", grades[i]);
    }

    average = (float)sum / n;
    printf("\nAverage grade: %.2f\n", average);

    return 0;
}
