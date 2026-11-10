#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* EXERCICIO 1 */
void ler100(int numeros[100]) {
    int i;
    for (i = 0; i < 100; i++) {
        printf("Digite o numero %d: ", i + 1);
        scanf("%d", &numeros[i]);
    }
}

void mostrarInverso(int numeros[100]) {
    int i;
    printf("Numeros na ordem inversa:\n");
    for (i = 99; i >= 0; i--) {
        printf("%d ", numeros[i]);
    }
    printf("\n");
}

void ordenarDecrescente(int numeros[100]) {
    int i, j, auxiliar;
    for (i = 0; i < 100; i++) {
        for (j = i + 1; j < 100; j++) {
            if (numeros[i] < numeros[j]) {
                auxiliar = numeros[i];
                numeros[i] = numeros[j];
                numeros[j] = auxiliar;
            }
        }
    }
}

void exercicio1(void) {
    int numeros[100];
    int i;
    printf("\nEXERCICIO 1 - INVERSO E ORDEM DECRESCENTE\n");
    ler100(numeros);
    mostrarInverso(numeros);
    ordenarDecrescente(numeros);
    printf("Numeros do maior para o menor:\n");
    for ( i = 0; i < 100; i++) {
        printf("%d ", numeros[i]);
    }
    printf("\n");
}

/* EXERCICIO 2 */
void exercicio2(void) {
    double numero;
    int expoente = 0;
    printf("\nEXERCICIO 2 - NOTACAO CIENTIFICA\n");
    printf("Digite um numero positivo: ");
    scanf("%lf", &numero);
    if (numero <= 0) {
        printf("Numero invalido. Digite um valor positivo.\n");
    } else {
        while (numero >= 10) {
            numero = numero / 10;
            expoente++;
        }
        while (numero < 1) {
            numero = numero * 10;
            expoente--;
        }
        printf("Notacao cientifica: %f x 10^%d\n", numero, expoente);
    }
}

/* EXERCICIO 3 */
void exercicio3(void) {
    int numero, binario[7], i = 0, j;
    printf("\nEXERCICIO 3 - BINARIO\n");
    printf("Digite um numero de 1 a 64: ");
    scanf("%d", &numero);
    if (numero < 1 || numero > 64) {
        printf("Numero invalido.\n");
    } else {
        while (numero > 0) {
            binario[i] = numero % 2;
            numero = numero / 2;
            i++;
        }
        printf("Numero em binario: ");
        for (j = i - 1; j >= 0; j--) {
            printf("%d", binario[j]);
        }
        printf("\n");
    }
}

/* EXERCICIO 4 */
int calcularMaior(int a, int b) {
    return (a + b + abs(a - b)) / 2;
}

void exercicio4(void) {
    int numeros[10], i, maior;
    printf("\nEXERCICIO 4 - MAIOR DE 10 VALORES\n");
    for (i = 0; i < 10; i++) {
        printf("Digite o numero %d: ", i + 1);
        scanf("%d", &numeros[i]);
    }
    maior = numeros[0];
    for (i = 1; i < 10; i++) {
        maior = calcularMaior(maior, numeros[i]);
    }
    printf("%d eh o maior\n", maior);
}

/* EXERCICIO 5 */
void verificarParidade(int numero) {
    if (numero % 2 == 0) {
        printf("Par");
    } else {
        printf("Impar");
    }
}

void verificarPrimo(int numero) {
    int i, divisores = 0;
    if (numero <= 1) {
        printf("Nao primo");
    } else {
        for (i = 1; i <= numero; i++) {
            if (numero % i == 0) {
                divisores++;
            }
        }
        if (divisores == 2) {
            printf("Primo");
        } else {
            printf("Nao primo");
        }
    }
}

void exercicio5(void) {
    int numeros[100], i;
    printf("\nEXERCICIO 5 - PARIDADE E PRIMALIDADE\n");
    for (i = 0; i < 100; i++) {
        printf("Digite o numero %d: ", i + 1);
        scanf("%d", &numeros[i]);
    }
    for (i = 0; i < 100; i++) {
        printf("Numero %d: ", numeros[i]);
        verificarParidade(numeros[i]);
        printf(" - ");
        verificarPrimo(numeros[i]);
        printf("\n");
    }
}

/* EXERCICIO 6 */
void exercicio6(void) {
    double x1[10], y1[10], x2[10], y2[10], distancia;
    int i;
    printf("\nEXERCICIO 6 - DISTANCIA ENTRE PONTOS\n");
    for (i = 0; i < 10; i++) {
        printf("\nPar de pontos %d\n", i + 1);
        printf("X1: "); scanf("%lf", &x1[i]);
        printf("Y1: "); scanf("%lf", &y1[i]);
        printf("X2: "); scanf("%lf", &x2[i]);
        printf("Y2: "); scanf("%lf", &y2[i]);
    }
    for (i = 0; i < 10; i++) {
        distancia = sqrt((x2[i] - x1[i]) * (x2[i] - x1[i]) +
                         (y2[i] - y1[i]) * (y2[i] - y1[i]));
        printf("Distancia do par %d: %.2f\n", i + 1, distancia);
    }
}

/* EXERCICIO 7 */
void exercicio7(void) {
    int numeros[100], i, j, inicio = 0, encontrou = 0;
    printf("\nEXERCICIO 7 - SEQUENCIAS CONSECUTIVAS\n");
    for (i = 0; i < 100; i++) {
        printf("Digite o numero %d: ", i + 1);
        scanf("%d", &numeros[i]);
    }
    printf("Sequencias consecutivas encontradas:\n");
    for (i = 1; i < 100; i++) {
        if (numeros[i] != numeros[i - 1] + 1) {
            if (i - inicio >= 2) {
                encontrou = 1;
                for (j = inicio; j < i; j++) {
                    printf("%d ", numeros[j]);
                }
                printf("\n");
            }
            inicio = i;
        }
    }
    if (100 - inicio >= 2) {
        encontrou = 1;
        for (j = inicio; j < 100; j++) {
            printf("%d ", numeros[j]);
        }
        printf("\n");
    }
    if (encontrou == 0) {
        printf("Nenhuma sequencia consecutiva encontrada.\n");
    }
}

int main(void) {
    int opcao = -1;

    while (opcao != 0) {
        printf("\n========== MENU DE EXERCICIOS ==========\n");
        printf("1 - Ordem inversa e decrescente\n");
        printf("2 - Notacao cientifica\n");
        printf("3 - Conversao para binario\n");
        printf("4 - Maior entre 10 numeros\n");
        printf("5 - Paridade e primalidade\n");
        printf("6 - Distancia entre pontos\n");
        printf("7 - Numeros consecutivos\n");
        printf("0 - Sair\n");
        printf("Qual exercicio deseja resolver? ");

        if (scanf("%d", &opcao) != 1) {
            printf("Entrada invalida. Encerrando.\n");
            return 1;
        }

        if (opcao == 1) {
            exercicio1();
        } else if (opcao == 2) {
            exercicio2();
        } else if (opcao == 3) {
            exercicio3();
        } else if (opcao == 4) {
            exercicio4();
        } else if (opcao == 5) {
            exercicio5();
        } else if (opcao == 6) {
            exercicio6();
        } else if (opcao == 7) {
            exercicio7();
        } else if (opcao == 0) {
            printf("Programa encerrado!\n");
        } else {
            printf("Opcao invalida! Escolha de 0 a 7.\n");
        }
    }

    return 0;
}
