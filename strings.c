#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
	char s[10];
	
/* nesse caso ele lê até o espaço */
	printf("Digite algo (scanf convencional): ");
	scanf("%s", s);
	fflush(stdin);
	
	printf("\nResultado: %s\n\n", s);
	
/* nesse caso ele lê mesmo depois do espaço */

	printf("Digite algo (scanf aprimorado): ");
	
/* aqui no scanf deve-se colocar o número do char - 1.    Nesse caso, 10 - 1 = 9 */

	scanf("%9[^\n]s", s);
	fflush(stdin);
	
	printf("\nResultado: %s\n\n", s);
	
	
	
	
	return 0;
}
