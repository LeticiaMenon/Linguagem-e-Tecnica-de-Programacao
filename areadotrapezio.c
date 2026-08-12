#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define pi 3.141592

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int main(int argc, char *argv[]) {
	
	float areat, basema, baseme, h;
	printf ("Insira a base maior, a base menor, e a area do trapezio");
	scanf ("%f %f %f", &basema, &baseme, &h);
		areat = (basema + baseme)*h /2;
	printf ("A area do trapezio é %f", areat);
	
	
	return 0;
	
	
}
