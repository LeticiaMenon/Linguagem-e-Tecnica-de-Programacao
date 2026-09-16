#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float valorp, acoesdisp, precoatual, VPA, PVP ;
	
	printf("digite o valor patrimonial da empresa: ");
	scanf("%f", &valorp);
	
	printf("digite a quantidade de acoes disponveis: ");
	scanf("%f", &acoesdisp);
	
	printf("digite o preco atual da acao: ");
	scanf("%f", &precoatual);
	
	VPA = valorp/acoesdisp;
	
	PVP = precoatual/VPA;
	
	if (PVP< 0,0) {
		printf("pessima");
	}
	
	else if (PVP<=0,0 && PVP <0,8) {
		printf("otima");
	}
	
	else if (PVP <= 0,8 && PVP<= 1,2){
		printf("indiferente");
	}
	
	else if (PVP < 1,2 && PVP <= 2,0){
		printf("boa");
	}
	
	else{
		printf("ruim");
	}
	
	return 0;
}
