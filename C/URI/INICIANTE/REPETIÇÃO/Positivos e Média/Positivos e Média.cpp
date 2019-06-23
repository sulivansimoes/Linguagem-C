/*
Leia 6 valores. Em seguida, mostre quantos destes valores digitados foram positivos. 
Na próxima linha, deve-se mostrar a média de todos os valores positivos digitados, com um dígito após o ponto decimal.

Entrada
A entrada contém 6 números que podem ser valores inteiros ou de ponto flutuante. Pelo menos um destes número será positivo.

Saída
O primeiro valor de saída é a quantidade de valores positivos. A próxima linha deve mostrar a média dos 
valores positivos digitados.
*/

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	float n,media;
	int i,cont;	
	
	for(i=1;i<7;i++)
	{
		scanf("%f",&n);
		if(n>0){
			cont++;
			media+=n;
		}
	}
	media/=cont;
	printf("%d valores positivos\n",cont);
	printf("%.1f\n",media);
	return 0;
}

/*
exemplo de entrada			    exemplo de saida
7								4 valores positivos
-5								7.4
6
-3.4
4.6
12
*/
