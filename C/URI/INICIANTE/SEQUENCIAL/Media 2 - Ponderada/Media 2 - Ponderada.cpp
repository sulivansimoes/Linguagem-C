/*
Leia 3 valores, no caso, vari�veis A, B e C, que s�o as tr�s notas de um aluno. A seguir, calcule a m�dia do aluno,
sabendo que a nota A tem peso 2, a nota B tem peso 3 e a nota C tem peso 5. Considere que cada nota pode ir de 0 at� 
10.0, sempre com uma casa decimal.

Entrada
O arquivo de entrada cont�m 3 valores com uma casa decimal, de dupla precis�o (double).

Sa�da
Imprima a vari�vel MEDIA conforme exemplo abaixo, com 1 d�gito ap�s o ponto decimal e com um espa�o em 
branco antes e depois da igualdade. Assim como todos os problemas, n�o esque�a de imprimir o fim de linha
ap�s o resultado, caso contr�rio, voc� receber� "Presentation Error".
*/

//media ponderada se calcula multiplicando as notas pelos seu pessos e dividindo pela soma dos pesos

#include <stdio.h>

#define PA 2
#define PB 3
#define PC 5
#define PESO 10
int main()
{
	double a,b,c,media=0;
	scanf("%lf",&a);
	scanf("%lf",&b);
	scanf("%lf",&c);	
	
	media = ((PA*a)+(PB*b)+(PC*c))/PESO;
	printf("MEDIA = %.1lf\n",media);
	return 0;
}

/*
exemplo de entrada					exemplo de saida
5.0										MEDIA = 6.3
6.0
7.0										
*/
