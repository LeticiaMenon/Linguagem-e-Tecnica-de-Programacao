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
	
	//8
	
	float x1, dist, x2, y1, y2, p1, p2;
	
	printf("Insira as cordenadas do ponto p1: ");
	scanf("%f, %f", &x1, &y1);
	
	printf("Insira as cordenadas do ponto p2: ");
	scanf("%f, %f", &x2, &y2);
	
	p1 = pow (x2-x1, 2);
	p2 = pow (y2-y1, 2);
	
	dist = sqrt(p1+p2);
	
	printf("Distancia (%f)", dist);
