/*
Leia um caractere mai�sculo, que indica uma opera��o que deve ser realizada e uma matriz M[12][12]. 
Em seguida, calcule e mostre a soma ou a m�dia considerando somente aqueles elementos que est�o acima 
da diagonal principal da matriz, conforme ilustrado abaixo (�rea verde).

Entrada
A primeira linha de entrada contem um �nico caractere Mai�sculo O ('S' ou 'M'), indicando a opera��o 
(Soma ou M�dia) que dever� ser realizada com os elementos da matriz. Seguem os 144 valores de ponto flutuante 
que comp�em a matriz.

Sa�da
Imprima o resultado solicitado (a soma ou m�dia), com 1 casa ap�s o ponto decimal.

 -> Formula p/ n� acima da diagonal principal: Linha < Coluna 
*/

#include <stdio.h>

#define D 12

int main(void)
{
	int i,j,cont=0;
	float m[D][D],conta=0;	
	char op;
	
	scanf("%c",&op);	//l� operador
	
	//l� matriz
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
	
	// Faz impress�o de acordo com a ope��o escolhida
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
Exemplo de Entrada		Exemplo de Sa�da
S						12.6
1.0
0.0
-3.5
2.5
4.1
...

*/

