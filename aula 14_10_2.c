#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*Elabore um programa que peça ao ususario para digitar 10 valores que sejam inteiros positivos, e ignorado os negativos. 
E mostre na tela o resultado da soma e a media desses valores.
--OBS: não precisa usar vetor, usem os laços da aula de hoje
*/

int main(){

{
	int i, n, soma, med;
	i=0;
	soma = 0
	while (i<10){
		scanf("%d", &n);
		if(n>0){
			soma += n;
			i++;
		}
	}
	
	printf("soma = %d e media = %d", soma, (soma/10));
}


	
	return 0;
}
