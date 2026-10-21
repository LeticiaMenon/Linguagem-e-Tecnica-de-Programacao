#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
int n, aux=0, mult=1;
    scanf ("%d", &n);
    
    while (n > 0){
	    aux = aux + (n % 2) * mult;
		n = n/2;
		mult = mult *10;
	}
    printf ("%d", aux);
		
	return 0;
}
