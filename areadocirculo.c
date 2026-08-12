int main(int argc, char *argv[]) {
	
	float area, raio;
	 printf ("Insira o raio do circulo");
	 scanf ("%f", &raio);

	area = pi*(raio*raio);
	
	printf("A area do circulo de raio %f = %f", raio, area);
