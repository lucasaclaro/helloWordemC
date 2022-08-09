#include <stdio.h>
#include <stdlib.h>


int main() {
	
	int a, b, soma, subtr, mult, divis;
	
	printf("Digite o primeiro valor: ");
	scanf("%d", &a);
	
	printf("\nDigite o segundo valor: ");
	scanf("%d", &b);
	
	soma = a + b;
	subtr = a - b;
	mult = a * b;
	divis = a / b;
	
	printf("\n%d + %d = %d", a, b, soma);
	printf("\n%d - %d = %d", a, b, subtr);
	printf("\n%d x %d = %d", a, b, mult);
	printf("\n%d / %d = %d", a, b, divis);
	
	
	
	
	
	
	
	
	return 0;
}
