#include <stdio.h>

int main() {
    int A[] = {5, 10, -8, 3, 0, 23, 47};
    int i;
    int size = sizeof(A) / sizeof(A[0]);

    printf("Oula ta Arrays : ");
    for (i = 0; i < size; i++) {
        printf("%d ", A[i]);
    }
    printf("\n");
    return 0;
}
