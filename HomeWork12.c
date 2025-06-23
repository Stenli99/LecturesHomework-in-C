#include <stdio.h>
void main()
{
int num1, num2, num3, average;
printf("Enter the first mark: ");
scanf("%d",&num1);

printf("Enter the second mark: ");
scanf("%d",&num2);

printf("Enter the third mark: ");
scanf("%d",&num3);

average = (num1+num2+num3)/3;

if (average>=60)
printf("Passed!\n");

}