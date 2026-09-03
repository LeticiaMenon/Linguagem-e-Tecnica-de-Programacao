#include <stdio.h>
#include <stdlib.h>


void exec3 (){
	
	float reais, cota;
		printf("insira a cotação e o valor: ");
		scanf("%f %f", &cota, &reais);
		printf("Os %f reais sao %f trumps", reais, (reais/cota));
	
}

void exec4(){

	float tempC, tempF;
		printf("Insira a teperatura em celsius: ");
		scanf("%f", tempC);
		tempF = tempC * 9.0/5.0 + 32.0;
		printf("Os %f C sao %f F /n", tempC, tempF);
		
}

void exec8(){


	int sec, horas, min;
		printf("Insira o tempo em segundos: ");
		scanf("%d", sec);
		horas = sec/3600;
		min = sec - ((horas*3600))/60;
		sec = sec - ((horas*3600) + (min*60));
		printf ("\t %d:%d:%d", horas,min,sec);

}
	
	int main(int argc, char *argv[]) {
	
	int op;
	printf("Insira qual exercicio quer resolver [3|4|8] ");
	scanf("%d", &op);
	
	switch(op){

   case 3:
         exec3();
    break;

    case 4:
        exec4();
      break;

	case 8:
         exec8();
     break;
    
    }
 
	
	return 0;
}
