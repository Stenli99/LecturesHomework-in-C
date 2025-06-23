#include <stdio.h>

int main() {
  int a, b, result;

  printf("Ena arifmo : ");
  scanf("%d", &a);

  printf("Akoma ena arifmo : ");
  scanf("%d", &b);

  result = a +(a*b + a) - b;

  printf("Answer: %d\n", result);
}