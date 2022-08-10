#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
	float m;
	
	printf("Insira a nota: ");
	scanf("%f", &m);
	
	if(m >= 7) {
		printf("\nAluno aprovado");
	} else{
		printf("\nAluno reprovado");
	}
		

	
	
	return 0;
}
