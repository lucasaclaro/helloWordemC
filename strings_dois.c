#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

/* usar a biblioteca string.h */
/* para se alterar o conteúdo de uma string durante a execução de um programa usa-se strcpy(<destino>,<origem>);*/
/* para juntar o conteúdo de duas strings usa-se strcat(<destino>,<origem>); */
/* para mostrar o tamanho da string usa-se strlen(<string>); */
/* para comparar igualdade entre string usa-se strcmp(<string1>,<string2>); Se forem iguais ele retornar o valor 0 */
/* #include <locale.h> é a biblioteca que permite caracteres em português */

/* essa variável define o valor para todas as strings como sendo 50 */
#define N 50

int main() {
	setlocale(LC_ALL, "Portuguese");
	
	char origem[N] = {"Olá, mundo!"};
	char destino[N];
	
	printf("Antes do strcpy: ");
	puts(origem);
	puts(destino);
	
	strcpy(destino, origem);
	
	printf("\nDepois do strcpy: ");
	puts(origem);
	puts(destino);
	 
	 
	 
	char s1[N] = {"Lógica de "};
	char s2[N] = {"Programação"};
	
	printf("\n\n\n\n\nAntes do strcat: ");
	printf("\nstr 1: %s\n", s1);
	printf("str 2: %s\n", s2);
	
	strcat(s1, s2);
	
	printf("\nDepois do strcat: ");
	puts(s1);
	
	
	
	
	char s[N];
	int i;
	
	printf("\n\n\n\n\nDigite um texto: ");
	gets(s);
	i = strlen(s);
	printf("\nTamanho do texto: %d", i);
	
	printf("\nImpressão dE posição em posição: ");
	for(i=0; i<strlen(s); i++){
		printf("%c", s[i]);
		
	}
	
	
	
	
	
	
	
	char hardText[N] = {"/exit"};
	char senha_usr[N];
	int ok;
	
	printf("\n\n\n\n\nDigite um texto: ");
	gets(senha_usr);
	
	ok = strcmp(hardText, senha_usr);
	
	if(ok == 0){
		printf("\Senhas iguais");
	}else{
		printf("\nSenhas diferentes");
	}
	
	
	
	
	
	
	
	
	
	
	return 0;
}
