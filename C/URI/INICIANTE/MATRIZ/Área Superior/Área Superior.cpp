/*
Leia um caractere mai�sculo, que indica uma opera��o que deve ser realizada e uma matriz M[12][12]. 
Em seguida, calcule e mostre a soma ou a m�dia considerando somente aqueles elementos que est�o na 
�rea superior da matriz, conforme ilustrado abaixo (�rea verde

Entrada
A primeira linha de entrada contem um �nico caractere Mai�sculo O ('S' ou 'M'), indicando a 
opera��o (Soma ou M�dia) que dever� ser realizada com os elementos da matriz. Seguem 144 valores 
com ponto flutuante de dupla precis�o que comp�em a matriz.

Sa�da
Imprima o resultado solicitado (a soma ou m�dia), com 1 casa ap�s o ponto decimal.

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
	
	//l� matriz e soma tudo acima da diagonal principal e  acima da secundaria 
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
	
	//Faz impress�o conforme opera��o escolhida.
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
