#include <stdio.h>
#include<stdlib.h>

int main{
	int  n1 = 0, n2 = 0;
	char operador;
		
		printf("---Calculadora---");
		
		printf("Informe a n1: ");
		scanf("%d", &n1);

		printf("Informe a operacao: ");
		scanf("%d", &operador);
	
		printf("Informe a n2: "):
		scanf("%d", &n2);


		switch(operador){ //char ou int
			case  '+':
				printf("SOMA: %d", n1+n2);
			break;
			
			case '-':
				printf("SUB: %d", n1-n2);
			break;

			case '*':
				printf("MULTI: %d", n1*n2);
			break;

		
			default:
				pritf("Operador invalido\n"); //Nem sempre necess�rio

}

}





