#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int i;
	
	do{
		printf("Verifique as opcoes de sorvete abaixo");
		
		printf("\n (1) - Flocos");
		printf("\n (2) - Morango");
		printf("\n (3) - Chocolate");
		
		printf("\nEscolha a opcao desejada: ");		
		scanf("%d", &i);
		
	}while((i < 1) || (i > 3));
	
		switch(i){
			case 0: 
				printf("\nVoce escolheu o sabor de Flocos");
				break;
			
			case 1:
				printf("\nVoce escolheu o sabor de Morango");
				break;
			
			case 2:
				printf("\nVoce escolheu o sabor de Chocolate");
				break;
		}
	
	printf("\nFim do programa");
	
	
	
	
	
	
	
	return 0;
}
