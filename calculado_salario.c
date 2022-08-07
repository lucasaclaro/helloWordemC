#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	float salario, inss, sal_liquido;
	
	printf("Digite o salario bruto do colaborador: ");
	scanf("%f", &salario);
	
	
	if(salario <= 1693.72)
	{
		inss = salario *0.08;			
	}
	
	else
	if(salario >= 1693,73 && salario <= 2822.90)
	{
		inss = salario * 0.09;
	}	
	
	else
	if(salario >=2822.91 && salario <= 5646.80)
	{
		inss = salario * 0.11;
	}
	
	else
	if(salario >= 5646.81)
	{
		inss = 621.04;
	}
	
	sal_liquido = (salario - inss);
	
	printf("\nDesconto INSS: %2.f", inss);
	
	printf("\nSalario liquido: %2.f", sal_liquido);
	
	
		
	return 0;
}
