#include <stdio.h>

void main() {
    int score;

    printf("Give number : ");
    scanf("%d", &score);

    if (score >= 90) {
        printf("Excellent\n");
    } else {
        if (score >= 60) {
            printf("Passed\n");
        } else {
            printf("Failed\n");
    }
	}
	}
    