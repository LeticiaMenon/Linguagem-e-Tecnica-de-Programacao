#include <stdio.h>
#include <stdlib.h>


     void ex1(){
	
    
    int n1, n2, n3, n4, n5;

    printf("Digite o primeiro numero: ");
    scanf("%d", &n1);

    printf("Digite o segundo numero: ");
    scanf("%d", &n2);

    printf("Digite o terceiro numero: ");
    scanf("%d", &n3);

    printf("Digite o quarto numero: ");
    scanf("%d", &n4);

    printf("Digite o quinto numero: ");
    scanf("%d", &n5);

    if (n2 == n1 + 1) {
        printf("%d e %d sao consecutivos\n", n1, n2);
    }

    if (n3 == n2 + 1) {
        printf("%d e %d sao consecutivos\n", n2, n3);
    }

    if (n4 == n3 + 1) {
        printf("%d e %d sao consecutivos\n", n3, n4);
    }

    if (n5 == n4 + 1) {
        printf("%d e %d sao consecutivos\n", n4, n5);
    }
}

    void ex2(){
	
    float peso, altura, imc;

    printf("Digite seu peso em kg: ");
    scanf("%f", &peso);

    printf("Digite sua altura em metros: ");
    scanf("%f", &altura);

    imc = peso / (altura * altura);

    printf("Seu IMC e: %.2f\n", imc);

    if (imc < 18.5) {
        printf("Classificacao: Abaixo do peso");
    }
    else if (imc <= 24.9) {
        printf("Classificacao: Normal");
    }
    else if (imc <= 29.9) {
        printf("Classificacao: Acima do peso");
    }
    else {
        printf("Classificacao: Obeso");
    }
}

    void ex3(){
    int A = 6;
    int B = 0;
    int C = 0;

    printf("Inicio: A = %d, B = %d, C = %d\n", A, B, C);

    A = A - 1;
    C = C + 1;
    printf("A -> C: A = %d, B = %d, C = %d\n", A, B, C);

    
    A = A - 2;
    B = B + 2;
    printf("A -> B: A = %d, B = %d, C = %d\n", A, B, C);

    
    C = C - 1;
    B = B + 1;
    printf("C -> B: A = %d, B = %d, C = %d\n", A, B, C);

    
    A = A - 3;
    C = C + 3;
    printf("A -> C: A = %d, B = %d, C = %d\n", A, B, C);

    
    B = B - 1;
    A = A + 1;
    printf("B -> A: A = %d, B = %d, C = %d\n", A, B, C);

    
    B = B - 2;
    C = C + 2;
    printf("B -> C: A = %d, B = %d, C = %d\n", A, B, C);

    
    A = A - 1;
    C = C + 1;
    printf("A -> C: A = %d, B = %d, C = %d\n", A, B, C);
    
	}
	
	void ex4(){
		
	int n1, n2, n3, n4;

    printf("Digite o primeiro numero: ");
    scanf("%d", &n1);

    printf("Digite o segundo numero: ");
    scanf("%d", &n2);

    printf("Digite o terceiro numero: ");
    scanf("%d", &n3);

    printf("Digite o quarto numero: ");
    scanf("%d", &n4);

    printf("Numeros impares:\n");

    if (n1 % 2 != 0) {
        printf("%d\n", n1);
    }

    if (n2 % 2 != 0) {
        printf("%d\n", n2);
    }

    if (n3 % 2 != 0) {
        printf("%d\n", n3);
    }

    if (n4 % 2 != 0) {
        printf("%d\n", n4);
    }

    printf("Multiplos de 5:\n");

    if (n1 % 5 == 0) {
        printf("%d\n", n1);
    }

    if (n2 % 5 == 0) {
        printf("%d\n", n2);
    }

    if (n3 % 5 == 0) {
        printf("%d\n", n3);
    }

    if (n4 % 5 == 0) {
        printf("%d\n", n4);
    }

	}
	
	void ex5(){
		
	int itens, capacidade, mochilas;

    printf("Digite a quantidade total de itens: ");
    scanf("%d", &itens);

    printf("Digite a capacidade de cada mochila: ");
    scanf("%d", &capacidade);

    mochilas = itens / capacidade;

    printf("Mochilas totalmente preenchidas: %d", mochilas);
	}
	
	void ex6(){
		
	float valor, resultado;
    int codigo;

    printf("Digite o valor a ser convertido: ");
    scanf("%f", &valor);

    printf("Digite o codigo da unidade: ");
    scanf("%d", &codigo);

    if (codigo == 1) {
        
        resultado = valor * 1.8 + 32;
        printf("Resultado: %.2f F", resultado);
    }

    else if (codigo == 2) {
        
        resultado = valor + 273.15;
        printf("Resultado: %.2f K", resultado);
    }

    else if (codigo == 3) {
        
        resultado = valor - 273.15;
        printf("Resultado: %.2f C", resultado);
    }

    else if (codigo == 4) {
        
        resultado = valor / 1609.34;
        printf("Resultado: %.2f mi", resultado);
    }

    else if (codigo == 5) {
        
        resultado = valor * 1609.34;
        printf("Resultado: %.2f m", resultado);
    }

    else if (codigo == 8) {
        
        resultado = valor * 2.205;
        printf("Resultado: %.2f lb", resultado);
    }

    else if (codigo == 9) {
        
        resultado = valor / 2.205;
        printf("Resultado: %.2f kg", resultado);
    }

    else if (codigo == 10) {
        
        resultado = valor / 1.609;
        printf("Resultado: %.2f mph", resultado);
    }

    else if (codigo == 11) {
        
        resultado = valor * 1.609;
        printf("Resultado: %.2f km/h", resultado);
    }

    else {
        printf("Unidade invalida");
    }
	}
	
	void ex7(){
		
	int capacidade, qtd_itens, n_mochilas, resto;
    
    printf("Insira a quantidade de itens a serem dispostos nas mochilas: \n");
    scanf("%d",&qtd_itens);
    printf("Insira a capacidade de itens de cada mochila: \n");
    scanf("%d",&capacidade);
    
    n_mochilas = qtd_itens/capacidade;
    resto = qtd_itens%capacidade; 
    
    printf("Legendario, são %d mochilas para seus itens, e sobram %d itnes", n_mochilas, resto);
	}
	
	void ex8(){
	
	int a, b, c;

    printf("Digite o valor de a: ");
    scanf("%d", &a);

    printf("Digite o valor de b: ");
    scanf("%d", &b);

    printf("Digite o valor de c: ");
    scanf("%d", &c);

    if (a == b || a == c || b == c) {
        printf("Os numeros tem que ser distintos");
    }
    else if (a < b && b < c) {
        printf("%d %d %d", a, b, c);
    }
    else if (a < c && c < b) {
        printf("%d %d %d", a, c, b);
    }
    else if (b < a && a < c) {
        printf("%d %d %d", b, a, c);
    }
    else if (b < c && c < a) {
        printf("%d %d %d", b, c, a);
    }
    else if (c < a && a < b) {
        printf("%d %d %d", c, a, b);
    }
    else {
        printf("%d %d %d", c, b, a);
    }
	}
	
	void ex9(){
		
	 int valor1, valor2, codigo;

    printf("Digite o primeiro valor: ");
    scanf("%d", &valor1);

    printf("Digite o segundo valor: ");
    scanf("%d", &valor2);

    printf("Digite o codigo da operacao: ");
    scanf("%d", &codigo);

    if (codigo == 1) {
        if (valor1 > valor2) {
            printf("Verdadeiro");
        }
        else {
            printf("Falso");
        }
    }

    else if (codigo == 2) {
        if (valor1 < valor2) {
            printf("Verdadeiro");
        }
        else {
            printf("Falso");
        }
    }

    else if (codigo == 3) {
        if (valor1 == valor2) {
            printf("Verdadeiro");
        }
        else {
            printf("Falso");
        }
    }

    else if (codigo == 4) {
        if (valor1 != valor2) {
            printf("Verdadeiro");
        }
        else {
            printf("Falso");
        }
    }

    else {
        printf("Operador invalido");
    }
	}
	
	int main(int argc, char *argv[]) {

{
	
	int op;
	printf ("Digite o exercicio que voce quer resolver sendo de 1 a 3 prova ADSIS, 4 a 6 prova ESOFT A e 7 a 9 ESOFT B\n");
	scanf ("%d", &op);
	
	switch(op){

   case 1:
         ex1();
    break;

    case 2:
        ex2();
      break;

	case 3:
         ex3();
     break;
     	
	case 4:
         ex4();
     break;
    
    case 5:
         ex5();
     break;
     
    case 6:
         ex6();
     break;
     
    case 7:
         ex7();
     break;
    	
	case 8:
         ex8();
     break;
    
    case 9:
         ex9();
     break;
 }
    
    
    }
	
	return 0; 
}
