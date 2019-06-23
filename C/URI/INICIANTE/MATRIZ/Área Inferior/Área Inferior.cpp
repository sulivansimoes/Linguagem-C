/*
Leia um caractere maiúsculo, que indica uma operação que deve ser realizada e uma matriz M[12][12]. 
Em seguida, calcule e mostre a soma ou a média considerando somente aqueles elementos que estão na 
área inferior da matriz, conforme ilustrado abaixo (área verde).

Entrada
A primeira linha de entrada contem um único caractere 
Maiúsculo O ('S' ou 'M'), indicando a operação (Soma ou Média) que 
deverá ser realizada com os elementos da matriz. Seguem os 144 valores de ponto flutuante de 
dupla precisão (double) que compõem a matriz.

Saída
Imprima o resultado solicitado (a soma ou média), com 1 casa após o ponto decimal.

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
	
	//lê matriz e soma tudo abaixo da diagonal principal e  abaixo da secundaria 
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
	
	//Faz impressão conforme operação escolhida.
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
