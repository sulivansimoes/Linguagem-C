/*
Escreva um algoritmo que leia um inteiro N (0 = N = 100), correspondente a ordem 
de uma matriz M de inteiros, e construa a matriz de acordo com o exemplo abaixo.

Entrada
A entrada consiste de v�rios inteiros, um valor por linha, correspondentes as ordens das matrizes a 
serem constru�das. O final da entrada � marcado por um valor de ordem igual a zero (0).

Sa�da
Para cada inteiro da entrada imprima a matriz correspondente, de acordo com o exemplo. 
(os valores das matrizes devem ser formatados em um campo de tamanho 3 justificados � direita e separados por espa�o. 
Ap�s o �ltimo caractere de cada linha da matriz n�o deve haver espa�os em branco. Ap�s a impress�o de cada matriz 
deve ser deixada uma linha em branco.

Exemplo de Entrada					Exemplo de Sa�da
1									  1 
2
3									  1   2
4									  2   1
5									
0									  1   2   3
									  2   1   2
									  3   2   1
									
									  1   2   3   4
									  2   1   2   3
									  3   2   1   2
									  4   3   2   1
									
									  1   2   3   4   5
									  2   1   2   3   4
									  3   2   1   2   3
									  4   3   2   1   2
									  5   4   3   2   1
*/
#include<stdio.h>

int main(void)
{
	int d,j,i;
	int m[d][d];
	
	scanf("%d",&d);
	
	while(d != 0)
	{
		for(i=0;i<d;i++)
		{
			for(j=0;j<d;j++)
			{
				if(i=j){
					m[i][j] = 1;}
				if(i<j){ //Acima da diagonal pricipal
					
				}
			}
		}
	}
}
