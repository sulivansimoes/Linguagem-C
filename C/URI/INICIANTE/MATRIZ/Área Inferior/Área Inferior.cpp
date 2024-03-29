/*
Leia um caractere mai�sculo, que indica uma opera��o que deve ser realizada e uma matriz M[12][12]. 
Em seguida, calcule e mostre a soma ou a m�dia considerando somente aqueles elementos que est�o na 
�rea inferior da matriz, conforme ilustrado abaixo (�rea verde).

Entrada
A primeira linha de entrada contem um �nico caractere 
Mai�sculo O ('S' ou 'M'), indicando a opera��o (Soma ou M�dia) que 
dever� ser realizada com os elementos da matriz. Seguem os 144 valores de ponto flutuante de 
dupla precis�o (double) que comp�em a matriz.

Sa�da
Imprima o resultado solicitado (a soma ou m�dia), com 1 casa ap�s o ponto decimal.

FORMULA P/ PEGAR TUDO ABAIXO DA DIAGONAL PRINCIAL: LINHA > COLUNA
FORLULA P/ PEGAR TUDO ABAIXO DA DIAGONAL SECUNDARIA: LINHA + COLUNA > ORDEM -1
*/

#include <stdio.h>

#define D 12
int main(void)
{
	float m[D][D],conta=0;
	int i,j,cont=0;
	char op;
	
	scanf("%c",&op);
	
	//l� matriz e soma tudo abaixo da diagonal principal e  abaixo da secundaria 
	for(i=0;i<D;i++)
	{
		for(j=0;j<D;j++)
		{
			scanf("%f",&m[i][j]);
			if(i>j && i+j > D-1){
				cont += 1;
				conta += m[i][j];
			}
		}
	}
	
	//Faz impress�o conforme opera��o escolhida.
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
