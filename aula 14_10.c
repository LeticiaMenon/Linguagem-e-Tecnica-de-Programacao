#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	int valor [10], cont, i;
	
	for(i=0; 1<10; i++){
		scanf("%d", &valor[i]);
	}
	printf("acabou o for");
	printf("iniciando o while");
	while (i<10){
		scanf("%d", &valor[i]);
		i++;
	}
	
	i=0;
	do{
		printf("%d", valor[i]);
		i++;
	} while(i<10);
	
	
	
	
	
	
	
	
	
	
	/* 
	int valor;
	printf("insira um valor par");
	scanf("%d", &valor);
	while(valor%2 == 1) {
		
	printf("valor inserido impar, \n insira um novo valor");
	scanf("%d", &valor);
	}
	
	do{
		printf("insira um valor par");
		scanf("%d", &valor);
	} while(valor%2 == 1);
	printf("a raiz de %d = %f", valor, sqrt(valor));
	
	*/
	
	return 0;
}
