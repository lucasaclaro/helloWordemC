#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
	int v[5];
	int i;
	
	for (i = 0; i < 5; i++){
		printf("\nInsira um dado: ");
		scanf("%d", &v[i]);
		
	}
	
	
	printf("\nDados inseridos: ");
	for (i = 0; i < 5; i++){
		printf("%d ", v[i]);
		
	}
	
	
	
	return 0;
}
