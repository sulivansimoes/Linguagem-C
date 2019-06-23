/*
Neste problema voc� deve ler um n�mero, indicando uma linha da matriz na qual uma opera��o deve ser realizada, 
um caractere mai�sculo, indicando a opera��o que ser� realizada, e todos os elementos de uma matriz M[12][12]. 
Em seguida, calcule e mostre a soma ou a m�dia dos elementos que est�o na �rea verde da matriz, conforme for o caso. 
A imagem abaixo ilustra o caso da entrada do v

Entrada
A primeira linha de entrada contem um n�mero L (0 = L = 11) indicando a 
linha que ser� considerada para opera��o. A segunda linha de entrada cont�m um �nico caractere 
Mai�sculo T ('S' ou 'M'), indicando a opera��o (Soma ou M�dia) que dever� ser realizada com os elementos 
da matriz. Seguem os 144 valores de ponto flutuante que comp�em a matriz, sendo que a mesma � preenchida
linha por linha, da linha 0 at� a linha 11, sempre da esquerda para a direita.

Sa�da
Imprima o resultado solicitado (a soma ou m�dia), com 1 casa ap�s o ponto decimal.
*/

#include<stdio.h>

#define D 12
int main(void)
{
	float m[D][D],conta=0;
	int lin,i,j; 		
	char op;		
	
	scanf("%d ",&lin);         //Note um espa�o logo depois do %d, esse espa�o garante que o %c n�o vai ler a quebra de linha e sim o caracter seguinte, que no caso deste problema � a letra que define a opera��o.
	scanf("%c",&op);        
	
	//l� matriz
	for(i=0;i<D;i++)
	{
		for(j=0;j<D;j++)
		{
			scanf("%f",&m[i][j]);
		}
	}
	//soma linha escolhida
	for(j=0;j<D;j++)
	{
		conta += m[lin][j];
	} 
	
	//Faz impress�o de acordo com opera��o escolhida
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

/*Exemplo de Entrada	Exemplo de Sa�da
2							12.6
S
0.0
-3.5
2.5
4.1
...

*/
