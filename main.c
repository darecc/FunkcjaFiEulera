#include <stdio.h>
#include <stdlib.h>
#include "phi.h"

int main(int argc, char *argv[]) {
	
	printf("Podaj liczbe n wieksza od 1\n");
	int n;
	scanf("%i", &n);
	if (n < 2) 
	{
		printf("Nastepnym razem nie wyglupiaj sie!");
		return -1;
	}
	
	int wynik = phi(n);
	printf("Liczba fi dla %i wynosi %i \n", n, wynik);
	return 0;
}
