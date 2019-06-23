/*
Neste problema você deve ler um número que indica uma coluna de uma matriz na qual uma operação deve 
ser realizada, um caractere maiúsculo, indicando a operação que será realizada, e todos os elementos 
de uma matriz M[12][12]. Em seguida, calcule e mostre a soma ou a média dos elementos que estão na área 
verde da matriz, conforme for o caso. A imagem abaixo ilustra o caso da entrada do valor 5 para a coluna 
da matriz, demonstrando os elementos que deverão ser considerados na operação.

Entrada
A primeira linha de entrada contem um número C (0 = C = 11) indicando a 
coluna que será considerada para operação. A segunda linha de entrada contém um único 
caractere Maiúsculo T ('S' ou 'M'), indicando a operação (Soma ou Média) que deverá ser realizada 
com os elementos da matriz. Seguem os 144 valores de ponto flutuante que compõem a matriz.

Saída
Imprima o resultado solicitado (a soma ou média), com 1 casa após o ponto decimal.
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
	
	//lê matriz
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
	
	//Faz impressão de acordo com operação escolhida.
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


