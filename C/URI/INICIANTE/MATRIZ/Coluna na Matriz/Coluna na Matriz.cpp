/*
Neste problema voc� deve ler um n�mero que indica uma coluna de uma matriz na qual uma opera��o deve 
ser realizada, um caractere mai�sculo, indicando a opera��o que ser� realizada, e todos os elementos 
de uma matriz M[12][12]. Em seguida, calcule e mostre a soma ou a m�dia dos elementos que est�o na �rea 
verde da matriz, conforme for o caso. A imagem abaixo ilustra o caso da entrada do valor 5 para a coluna 
da matriz, demonstrando os elementos que dever�o ser considerados na opera��o.

Entrada
A primeira linha de entrada contem um n�mero C (0 = C = 11) indicando a 
coluna que ser� considerada para opera��o. A segunda linha de entrada cont�m um �nico 
caractere Mai�sculo T ('S' ou 'M'), indicando a opera��o (Soma ou M�dia) que dever� ser realizada 
com os elementos da matriz. Seguem os 144 valores de ponto flutuante que comp�em a matriz.

Sa�da
Imprima o resultado solicitado (a soma ou m�dia), com 1 casa ap�s o ponto decimal.
*/

#include<stdio.h>

#define D 12
int main(void)
{
	float m[D][D],conta=0;
	int i,j,col;
	char op;
	
	scanf("%d ",&col);
	scanf("%c",&op);
	
	//l� matriz
	for(i=0;i<D;i++)
	{
		for(j=0;j<D;j++)
		{
			scanf("%f",&m[i][j]);
		}
	}
	
	// Soma coluna escolhida da matriz.
	for(i=0;i<D;i++)
	{
		conta += m[i][col];
	}
	
	//Faz impress�o de acordo com opera��o escolhida.
	switch(op)
	{
		case 'S' :
			printf("%.1f\n",conta);
		break;
		case 'M' :
			conta /= D;
			printf("%.1f\n",conta);
		break;
	}
  return 0;
}


