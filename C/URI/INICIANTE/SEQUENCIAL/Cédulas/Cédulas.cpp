/*
Leia um valor inteiro. A seguir, calcule o menor número de notas possíveis (cédulas) 
no qual o valor pode ser decomposto. As notas consideradas são de 100, 50, 20, 10, 5, 2 e 1. A seguir 
mostre o valor lido e a relação de notas necessárias.

Entrada
O arquivo de entrada contém um valor inteiro N (0 < N < 1000000).

Saída
Imprima o valor lido e, em seguida, a quantidade mínima de notas de cada tipo necessárias, 
conforme o exemplo fornecido. Não esqueça de imprimir o fim de linha após cada linha, caso contrário seu 
programa apresentará a mensagem: “Presentation Error”.
*/

#include <stdio.h>
int main()
{
	int n,cem,cinquenta,vinte,resto,dez,cinco,um,dois;
	scanf("%d",&n);
	
	cem = n/100;
	resto= n%100;
	cinquenta= resto/50;
	resto= resto%50;
	vinte= resto/20;
	resto=resto%20;
	dez= resto/10;
	resto= resto%10;
	cinco=resto/5;
	resto=resto%5;
	dois=resto/2;
	resto=resto%2;
    um=resto;
	
	printf("%d\n",n);
	printf("%d nota(s) de R$ 100,00\n",cem);
	printf("%d nota(s) de R$ 50,00\n",cinquenta);
	printf("%d nota(s) de R$ 20,00\n",vinte);
	printf("%d nota(s) de R$ 10,00\n",dez);
	printf("%d nota(s) de R$ 5,00\n",cinco);
	printf("%d nota(s) de R$ 2,00\n",dois);
	printf("%d nota(s) de R$ 1,00\n",um);
	
	
	return 0;
}
/*
exemplo de entrada					exemplo de saida
576					             5 nota(s) de R$ 100,00
								 1 nota(s) de R$ 50,00
								 1 nota(s) de R$ 20,00
								 0 nota(s) de R$ 10,00
								 1 nota(s) de R$ 5,00
								 0 nota(s) de R$ 2,00
								 1 nota(s) de R$ 1,00
*/
