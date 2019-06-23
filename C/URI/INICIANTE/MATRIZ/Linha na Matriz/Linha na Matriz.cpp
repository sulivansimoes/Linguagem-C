/*
Neste problema você deve ler um número, indicando uma linha da matriz na qual uma operação deve ser realizada, 
um caractere maiúsculo, indicando a operação que será realizada, e todos os elementos de uma matriz M[12][12]. 
Em seguida, calcule e mostre a soma ou a média dos elementos que estão na área verde da matriz, conforme for o caso. 
A imagem abaixo ilustra o caso da entrada do v

Entrada
A primeira linha de entrada contem um número L (0 = L = 11) indicando a 
linha que será considerada para operação. A segunda linha de entrada contém um único caractere 
Maiúsculo T ('S' ou 'M'), indicando a operação (Soma ou Média) que deverá ser realizada com os elementos 
da matriz. Seguem os 144 valores de ponto flutuante que compõem a matriz, sendo que a mesma é preenchida
linha por linha, da linha 0 até a linha 11, sempre da esquerda para a direita.

Saída
Imprima o resultado solicitado (a soma ou média), com 1 casa após o ponto decimal.
*/

#include<stdio.h>

#define D 12
int main(void)
{
	float m[D][D],conta=0;
	int lin,i,j; 		
	char op;		
	
	scanf("%d ",&lin);         //Note um espaço logo depois do %d, esse espaço garante que o %c não vai ler a quebra de linha e sim o caracter seguinte, que no caso deste problema é a letra que define a operação.
	scanf("%c",&op);        
	
	//lê matriz
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
	
	//Faz impressão de acordo com operação escolhida
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

/*Exemplo de Entrada	Exemplo de Saída
2							12.6
S
0.0
-3.5
2.5
4.1
...

*/
