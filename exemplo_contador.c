#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int contador;
	
	printf("Digite um valor entre 0 a 9");
	
	printf("\nDigite um valor: ");
	scanf("%d", &contador);
	
	for(contador; contador <= 10; contador++)
	{
		printf("\n%d", contador);
	}
	
	printf("\n\nFim do programa");
	
	
	
	
	return 0;
}
