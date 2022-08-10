#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
	
	int dado = 10;
	
	printf("dado = 10\n\n");
	
	dado++;
	printf("dado++ = %d\n", dado);
	
	
	dado = 10;
	dado--;
	printf("dado-- = %d\n", dado);	
	
	dado = 10;
	dado+= 3;
	printf("dado+=3 = %d\n", dado);
	
	dado = 10;
	dado-= 2;
	printf("dado-=2 = %d\n", dado);
	
	dado = 10;
	dado*= 10;
	printf("dado*=10 = %d\n", dado);
	
	
	
	return 0;
}
