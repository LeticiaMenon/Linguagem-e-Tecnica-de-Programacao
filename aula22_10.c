#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int i, j, palindromo;
	char palavra[30];
	scanf("%s", &palavra);
	printf("inserido %s", palavra);
	for (i=0; i<30 && palavra[i] != '\0'; i++){
		printf("%d", i);
}
	for (j=i-1, i=0; i<j; i++, j--){
	
		if (palavra [i] == palavra[j]) palindromo = 1;
		else palindromo = 0;
		
		}
		
		if (palindromo) printf("eh palidromo");
		else printf("nao eh palindromo");
		
	
	
	return 0;
}
