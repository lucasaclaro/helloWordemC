#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
	float nota1;
	float nota2; 
	float media;
	
	printf("Insira a primeira nota: ");
	scanf("%2f", &nota1);
	
	printf("\nInsira a segunda nota: ");
	scanf("%2f", &nota2);
	
	media = (nota1 + nota2) / 2;


	printf("\nA media entre as notas digitadas foi %.2f", media);	
	
	return 0;
}
