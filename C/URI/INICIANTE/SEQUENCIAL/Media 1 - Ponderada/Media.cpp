/*
Leia 2 valores de ponto flutuante de dupla precis�o A e B, que correspondem a 2 notas de um aluno. 
A seguir, calcule a m�dia do aluno, sabendo que a nota A tem peso 3.5 e a nota B tem peso 7.5 (A soma dos pesos portanto � 11). Assuma que cada nota pode ir de 0 at� 10.0, sempre com uma casa decimal.

Entrada
O arquivo de entrada cont�m 2 valores com uma casa decimal cada um.

Sa�da
Calcule e imprima a vari�vel MEDIA conforme exemplo abaixo, com 5 d�gitos ap�s o ponto decimal e 
com um espa�o em branco antes e depois da igualdade. Utilize vari�veis de dupla precis�o (double) e como todos os problemas, 
n�o esque�a de imprimir o fim de linha ap�s o resultado, caso contr�rio, voc� receber� "Presentation Error".
*/

/*
   Media ponderada � quando as notas tem pesos, esse tipo de media � calculado da seguinte maneira: s�o as notas multiplicadas
   pelo seu peso e o resultado dividido pela soma dos pesos.
*/

#include <stdio.h>

#define PA 3.5
#define PB 7.5
#define PESO 11
int main()
{
	double a,b,media=0;
	scanf("%lf",&a);
	scanf("%lf",&b);
	
	media = ((PA*a)+(PB*b))/PESO;
	printf("MEDIA = %.5lf\n",media);
	
	return 0;
	
}

/*
exemplo de entrada      exemplo de saida
a= 5.0                   MEDIA = 6.43182
b= 7.1
*/
