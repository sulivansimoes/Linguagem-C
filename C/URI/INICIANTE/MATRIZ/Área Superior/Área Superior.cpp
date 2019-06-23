/*
Leia um caractere maiúsculo, que indica uma operação que deve ser realizada e uma matriz M[12][12]. 
Em seguida, calcule e mostre a soma ou a média considerando somente aqueles elementos que estão na 
área superior da matriz, conforme ilustrado abaixo (área verde

Entrada
A primeira linha de entrada contem um único caractere Maiúsculo O ('S' ou 'M'), indicando a 
operação (Soma ou Média) que deverá ser realizada com os elementos da matriz. Seguem 144 valores 
com ponto flutuante de dupla precisão que compõem a matriz.

Saída
Imprima o resultado solicitado (a soma ou média), com 1 casa após o ponto decimal.

FORMULA P/ PEGAR ACIMA DA DIAGONAL PRINCIPAL: LINHA < COLUNA
FORMULA P/ PEGAR ACIMA DA DIAGONAL SECUNDADRIA: LINHA + COLUNA < ORDEM - 1
*/

#include <stdio.h>

#define D 12

int main(void)
{
	double m[D][D], conta=0;
	int i,j,cont=0;
	char op;
	
	scanf("%c",&op);
	
	//lê matriz e soma tudo acima da diagonal principal e  acima da secundaria 
	for(i=0;i<D;i++)
	{
		for(j=0;j<D;j++)
		{
			scanf("%lf",&m[i][j]);
			if(i<j && (i+j < D-1)){
				cont += 1;
				conta += m[i][j];
			}
		}
	}
	
	//Faz impressão conforme operação escolhida.
	switch(op)
	{
		case 'S' :
			printf("%.1lf\n",conta);
		break;
		case 'M' :
			conta /= cont;
			printf("%.1lf\n",conta);
		break;
	}
	return 0;
}
