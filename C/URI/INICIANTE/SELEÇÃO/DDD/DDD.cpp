/*
Leia um número inteiro que representa um código de DDD para discagem interurbana. Em seguida, informe à qual 
cidade o DDD pertence, considerando a tabela abaixo:

DDD					Destination
61					Brasilia
71					Salvador
11					Sao Paulo
21					Rio de Janeiro
32					Juiz de Fora
19					Campinas
27					Vitoria
31					Belo Horizonte

Se a entrada for qualquer outro DDD que não esteja presente na tabela acima, o programa deverá informar:
DDD nao cadastrado

Entrada
A entrada consiste de um único valor inteiro.

Saída
Imprima o nome da cidade correspondente ao DDD existente na entrada. Imprima DDD 
nao cadastrado caso não existir DDD correspondente ao número digitado.
*/

#include <stdio.h>

int main()
{
	int num;
	
	scanf("%d",&num);
	
	switch(num)
	{
		case 61 :
			printf("Brasilia\n");
		break;
		case 71 :
			printf("Salvador\n");
		break;
		case 11 :
			printf("Sao Paulo\n");
		break;
		case 21 :
			printf("Rio de Janeiro\n");
		break;
		case 32 :
			printf("Juiz de Fora\n");
		break;
		case 19 :
			printf("Campinas\n");
		break;
		case 27 :
			printf("Vitoria\n");
		break;
		case 31 :
			printf("Belo Horizonte\n");
		break;
		default :
			printf("DDD nao cadastrado\n");
		break;
	}
  return 0;
}

/*
exemplo de entrada				exemplo de saida
11								Sao Paulo
*/
