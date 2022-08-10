#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
	
	int d;
	
	printf("Insira um numero de 1 a 7: ");
	scanf("%d", &d);
	
	switch(d){
		case 1:
			printf("\nDomingo");
			break;
			
		case 2:
			printf("\nSegunda");
			break;
			
		case 3:
			printf("\nTerca");
			break;
			
		case 4:
			printf("\nQuarta");
			break;
			
		case 5:
			printf("\nQuinta");
			break;
			
		case 6:
			printf("\nSexta");
			break;
			
		case 7:
			printf("\nSabado");
			break;
			
		default:
			printf("\nNumero invalidado");
			break;
	}
	
	
	
	
	return 0;
}
