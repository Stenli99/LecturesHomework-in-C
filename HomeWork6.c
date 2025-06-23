#include <stdio.h>

void main(){
 int epilogi;
 printf("1.Accept\n2.Reject\n3.Cancel\n Select a menu Item:");
 scanf("%d",&epilogi);
 if (epilogi == 1) {
        printf("You have chosen option Accept\n");
    } else if (epilogi == 2) {
        printf("You have chosen option Reject\n");
    } else if (epilogi == 3) {
        printf("You have chosen option Cancel\n");
    }
	
	
	
}