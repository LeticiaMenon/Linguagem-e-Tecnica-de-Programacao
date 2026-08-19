#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int primeiro, segundo, aux;
	
	printf ("Escreva o primeiro numero: ");
	scanf ("%d", &primeiro);
		
	printf ("Escreva o segundo numero: ");
	scanf ("%d", &segundo);
	
	
    aux = primeiro;
    primeiro = segundo;
	segundo = aux;
	
		printf("%d\n %d\n", primeiro, segundo);
		
		
	//2
		

	
	
	//3
	
	int n, resultado, bit_64, bit_32, bit_16, bit_8, bit_4, bit_2;
	printf ("Coloque o valor para a conversao");
	scanf("%d", &n);
	
	bit_64 = n%2;
	resultado = n/2;
	
	bit_32 = resultado%2;
	resultado = resultado/2;
	
	bit_16 = resultado%2;
	resultado = resultado/2;
	
	bit_8 = resultado%2;
	resultado = resultado/2;
	
	bit_4 = resultado%2;
	resultado = resultado/2;
	
	bit_2 = resultado%2;
	resultado = resultado/2;
	
	printf("O numero %d em binario = %d%d%d%d%d%d%d", n, resultado%2, bit_2, bit_4, bit_8, bit_16, bit_32, bit_64);

	
	//4
	
	float salario, vendas, total;
	
	printf("\nEscreva o seu salario: ");
	scanf("%f", &salario);
	
	printf("Escreva quanto voce vendeu: ");
	scanf("%f", &vendas);
	
	total = (vendas)*0.15 + salario;
	printf("O seu total e %f\n", total);
	
	
	//5
	
	float num1, num2, num3, num4, op1, op2, op3;
	
	printf("\n Digite o primeiro numero: ");
	scanf("%f", &num1);
	
	printf("Digite o segundo numero: ");
	scanf("%f", &num2);
	
	printf("Digite o terceiro numero: ");
	scanf("%f", &num3);
	
	printf("Digite o quarto numero: ");
	scanf("%f", &num4);
	
	op1 = (num1+num2+num3+num4);
	
	op2 = (num1+num2+num3+num4) /4;
	
	op3 = (num1*num2*num3*num4);
	
	printf("As operacoes entre os numeros sao %f %f %f\n", op1, op2, op3);
	
	
	//6
	
		int numeroi, ope1, ope2, ope3, total1;
	printf("\nEscreva sua idade em segundos: ");
	scanf("%d", &numeroi);
	
	ope1 = (numeroi/365);
	ope2 = (numeroi%365);
	ope3 = (ope2/30);
	total1 = (ope2%30);
	
	printf("O seu resultade e anos: %d meses: %d dias: %d\n", ope1, ope3, total1);
		
	//7
	
	float valorraio, pi, volume;
	
	printf("\nVamos calcular o volume de uma esfera!\n");
	printf("\nDigite o valor do raio: ");
	scanf("%f", &valorraio);
	
	pi = 3.141592;
	volume = (4.0/3)*pi*valorraio*valorraio*valorraio;
	
	printf("\nO volume e: %f\n", volume);
	
	
	
	//8

	
	
	
	
	
	//9
	
	
	float nascimento, idade, ano;
	
	printf("\nDigite a sua idade: ");
	scanf("%f", &idade);
	
	printf("Digite o ano atual: ");
	scanf("%f", &ano);
	
	nascimento = (ano-idade);

	printf("O seu ano de nascimento e %f\n", nascimento);
	
	//10
    float km, metros;
    
	printf("\nColoque a velocidade: ");
	scanf("%f", &km);
	
	metros = (km/36);
	
	printf("Convertido em M/s fica: %f\n", metros);
	
	
	/////11
	
	float reais, dolar;
	
	printf("\nDigite o valor em reais: ");
	scanf("%f", &reais);
	
	printf("\nO dolar esta valendo 5.23\n");
	
	dolar = (reais*5.23);
	
	printf("\nEm dolares, o valor digitado fica: %f\n", dolar);
	
	
	
	
	/////12
    float celsius, faren;
    printf("\nDigite a temperatura em celcius: ");
    scanf("%f", &celsius);
    
    faren = (celsius)*(9.0/5.0)+32.0;
    
    printf("\nA temperatura em farenheit fica: %f\n", faren);
	
	
	
	/////13
	
	float angulo, radiano, p;
	
	printf("\nDigite o angulo em graus: ");
	scanf("%f", &angulo);
	
	p= (3,141592);
	
	radiano = (angulo)*p/180;
	
	printf("\nO angulo em radiano fica: %f\n", radiano);
	
	
	//14
	
	int numero, ant, dep;
	
	printf("\nDigite um numero: ");
	scanf("%d", &numero);
	
	ant= numero-1;
	dep= numero+1;
	
	printf("seu antecessor %d", ant);
	printf("\nseu sucessor %d\n", dep);
	
	
	//15
	
	float valortotal, prim, segu, terc;
	
	printf("\nO premio tem o valor de 780.000.00");
	
	valortotal = 780000.00;
	prim = valortotal*0.46;
	segu = valortotal*0.32;
	terc = valortotal-prim-segu;
	
	printf("\nO primeiro lugar recebeu: %f", prim);
	printf("O segundo lugar recebeu: %f", segu);
	printf("O terceiro lugar recebeu: %f\n", terc);
	
	
	//16
	
	int valor, cont1, cont2, cont3, tudo;
	
	printf("\nEscreva a duracao de um evento em segundos: ");
	scanf("%d", &valor);
	
	cont1 = valor/3600;
	cont2 = valor%3600;
	cont3 = cont2/60;
	tudo = cont2%60;
	
	printf("\nA duracao e de: horas: %d minutos: %d segundos: %d\n ", cont1, cont3, tudo);
	
	//17
	
	float tempogasto, velomedia, distancia, litros;
	
	printf("\nEscreva o tempo gasto: ");
	scanf("%f", &tempogasto);
	
	printf("\nEscreva a velocidade media: ");
	scanf("%f", &velomedia);
	
	distancia = tempogasto*velomedia;
	
	litros= distancia/12;
	
	printf("\nLitros: %.3f\n", litros);
	
	//18
	
	int valor1, valor2, valor3, calcu1, calcu2;
	
	printf("\nEscreva o primeiro valor: ");
	scanf("%d", &valor1);
	
	printf("Escreva o segundo: ");
	scanf("%d", &valor2);
	
	printf("Escreva o terceiro: \n");
	scanf("%d", &valor3);
	
	calcu1 = (valor1 + valor2 + abs(valor1-valor2))/2;
	
	calcu2 = (calcu1 + valor3 + abs(calcu1-valor3))/2;
	
	printf("%d eh o maior", calcu2);
	
	
	
	
	
	
	
	
	
	return 0;
	
}
