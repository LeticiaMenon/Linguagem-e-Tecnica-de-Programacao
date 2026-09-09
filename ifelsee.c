int main(int argc, char *argv[]) {
	
	int a, b, c, r;
	
	printf("Insira os valores para A, B, C: ");
	scanf("%d %d %d", &a, &b, &c);
	
	if(a>b){
		r= a;
	}else{
	
		r = b;
	}
	
	if (c>r){
		r = c;
	}
	
	printf("%d eh o maior", r);
	
	//
	
	int numero;
	
	printf("Escreva um numero: ");
	scanf("%d", &numero);
	
	if(numero %2 == 0){
	scanf("%d", numero);
	printf("%d eh par", numero);
	}
	else{
	printf("%d eh impar", numero);
	}
	
	return 0;
}
