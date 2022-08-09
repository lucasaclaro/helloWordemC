#include <stdio.h>
#include <stdlib.h>
#define texto "Entrada e saida de dados"


int main() {
	
	printf("%s\n", texto);
	
	int idade = 0;
	float altura = 0;
	char nome[50] = "";
	
	printf("Digite a idade: ");
	scanf("%d", &idade);
	
	printf("\nDigite a altura: ");
	scanf("%f", &altura);
	
	printf("\nDigite o nome: ");
	scanf("%s", &nome);
	
	printf("\nVoce digitou:\n nome = %s\n idade = %d\n Altura = %.2f", nome, idade, altura);
	
	
	
	return 0;
}
