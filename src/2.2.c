/*
 ============================================================================
 Name        : Narjara
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main()
{

	int anos;
	char sexo,estado;

	sexo = getchar();
	printf("Seu sexo eh M(masculino) ou F(feminino):");
	scanf("%c",&sexo);

	estado = getchar();
	printf("Informe seu estado civil sendo que devera usar C para casado e S para solteiro:");
	scanf("%c",&estado);


	if (sexo == 'F' && estado == 'C'){
		printf("\nInforme quantos anos de casados: ");
		scanf("%d",&anos);
	}

	if (sexo == 'M' && estado == 'C'){
	printf("\nSeu sexo eh: masculino\n");
	printf("Seu estado civil eh: casado\n");
	}

	if (sexo == 'F' && estado == 'C'){
	printf("\nSeu sexo eh: feminino\n");
	printf("Seu estado civil: eh casado\n");
	printf("Seus anos de casamento eh:%d\n",anos);
	}

	if (sexo == 'M' && estado == 'S'){
		printf("\nSeu sexo eh: masculino\n");
		printf("Seu estado civil eh: solteiro\n");
		}

	if (sexo == 'F' && estado == 'S'){
	printf("\nSeu sexo eh: feminino\n");
	printf("Seu estado civil eh: solteira\n");
	}




	return 0;
}
