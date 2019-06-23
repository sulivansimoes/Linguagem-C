/*
Com base na tabela abaixo, escreva um programa que leia o código de um item e a quantidade deste item. 
A seguir, calcule e mostre o valor da conta a pagar.

			    ________________________________________
               | CODIGO| ESPECIFICAÇÃO      |  PREÇO   |
			   |_______|____________________|__________|               
			   |   1   |  Cachorro quente   |  R$ 4,00 |
               |   2   |  X-Salda           |  R$ 4,50 |
               |   3   |  X-Bacon           |  R$ 5,00 |
               |   4   |  X-Torrada Simples |  R$ 2,00 |
               |   5   |  Refrigerate       |  R$ 1,50 |
               |_______|____________________|__________|
Entrada
O arquivo de entrada contém dois valores inteiros correspondentes ao código e à quantidade de um item conforme tabela acima.

Saída
O arquivo de saída deve conter a mensagem "Total: R$ " seguido pelo valor a ser pago, com 2 casas após o ponto decimal.
*/

#include <stdio.h>

#define CACHORRO 4.00
#define XSALADA 4.50
#define XBACON 5.00
#define XTORRADA 2.00
#define REFRI 1.50
int main()
{
	int cod,qtd;
	float tot=0;
	
	scanf("%d %d",&cod,&qtd);
	
	switch (cod){
		case 1 :
			tot = qtd * CACHORRO;
		break;
		case 2 :
			tot = qtd * XSALADA;
		break;
		case 3 :
			tot = qtd * XBACON;
		break;
		case 4 :
			tot = qtd * XTORRADA;
		break;
		case 5 :
			tot = qtd * REFRI;
		break;
	}
	printf("Total: R$ %.2f\n",tot);
	return 0;   
}

/*
exemplo de entrada				exemplo de saida
3 2								Total: R$ 10.00
4 3								Total: R$ 6.00
*/
