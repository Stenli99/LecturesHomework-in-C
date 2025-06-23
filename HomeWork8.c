#include<stdio.h>

void main(){
	int a,b,prosfesh,aferesh,diaresh,pososto,polaplasiasmos;
	printf("grapse mou ena arifmo : ");
	scanf("%d",&a);
	printf("grapse mou akoma ena arifmo : ");
	scanf("%d",&b);
	
	prosfesh=a+b;
	aferesh=a-b;
	diaresh=a/b;
	pososto=(a/b)*100.0;
	polaplasiasmos=a*b;
	
	printf("Prosfesh : %d\n",prosfesh);
	printf("Aferesh : %d\n",aferesh);
	printf("Diaresh : %d\n",diaresh);
	printf("Pososto : %d\n",pososto);
	
}