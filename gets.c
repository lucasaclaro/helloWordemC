#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
	char s[10];
	
	printf("Digite algo (leitura pelo gets): ");
	gets(s);
	fflush(stdin);
	
	puts("\nResultado: ");
	puts(s);
	puts("");
	
	printf("\nDigite algo (leitura pelo fgets): ");
	fgets(s, 10, stdin);
	fflush(stdin);
	
	puts("\nResultado: ");
	puts(s);
	
	
	
	
	return 0;
}
