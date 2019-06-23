/*
Leia um caractere maiúsculo, que indica uma operação que deve ser realizada e uma matriz M[12][12]. 
Em seguida, calcule e mostre a soma ou a média considerando somente aqueles elementos que estão acima 
da diagonal principal da matriz, conforme ilustrado abaixo (área verde).

Entrada
A primeira linha de entrada contem um único caractere Maiúsculo O ('S' ou 'M'), indicando a operação 
(Soma ou Média) que deverá ser realizada com os elementos da matriz. Seguem os 144 valores de ponto flutuante 
que compõem a matriz.

Saída
Imprima o resultado solicitado (a soma ou média), com 1 casa após o ponto decimal.

 -> Formula p/ nº acima da diagonal principal: Linha < Coluna 
*/

#include <stdio.h>

#define D 12

int main(void)
{
	int i,j,cont=0;
	float m[D][D],conta=0;	
	char op;
	
	scanf("%c",&op);	//lê operador
	
	//lê matriz
	for(i=0;i<D;i++) 
	{
		for(j=0;j<D;j++)
		{
			scanf("%f",&m[i][j]);
		}
	}
	
	//Soma tudo acima da diagonal principal
	for(i=0;i<D;i++)
	{
		for(j=0;j<D;j++)
		{
			if(i<j){
			  	cont += 1;
			  	conta += m[i][j];
			}
			 	
		}
		
	}
	
	// Faz impressão de acordo com a opeção escolhida
	switch(op)
	{
		case 'S' :
			printf("%.1f\n",conta);
		break;
		case 'M' :
			conta /= cont;
			printf("%.1f\n",conta);
		break;
	}
	return 0;
	
}

/*
Exemplo de Entrada		Exemplo de Saída
S						12.6
1.0
0.0
-3.5
2.5
4.1
...

*/

