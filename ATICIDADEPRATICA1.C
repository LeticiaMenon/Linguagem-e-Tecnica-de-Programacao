#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int n1, n2, n3, n4, aux;
	printf("digite o primeiro numero: ");
	scanf("%d", &n1);
	
	printf("digite o segundo numero: ");
	scanf("%d", &n2);
	
	printf("digite o terceiro numero: ");
	scanf("%d", &n3);
	
	printf("digite o quarto numero: ");
	scanf("%d", &n4);
	
	aux = n1;
	n1 = n3;
	n3 = n4;
	n4 = n2;
	n2 = n2;
	
	printf("%d, %d, %d, %d", n1, n2, n3, n);
	
	return 0;
}
