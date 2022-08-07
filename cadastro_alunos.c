#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char nome[30];
	char endereco[30];
	int idade;
	
	printf("Nome: ");
	scanf("%s", &nome);
	
	printf("\n Endereco: ");
	scanf("%s", &endereco);
	
	printf("\n Idade: ");
	scanf("%d", &idade);
	
	printf("\n Aluno cadastrado com sucesso! \n");
	printf("Nome: %s \n", nome);
	printf("Endereco: %s \n", endereco);
	printf("Idade: %d", idade);
	
	return 0;
}
