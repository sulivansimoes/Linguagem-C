/*
Escreva um programa que leia tr�s valores com ponto flutuante de dupla precis�o: A, B e C. Em seguida, calcule e mostre: 
a) a �rea do tri�ngulo ret�ngulo que tem A por base e C por altura. 
b) a �rea do c�rculo de raio C. (pi = 3.14159) 
c) a �rea do trap�zio que tem A e B por bases e C por altura. 
d) a �rea do quadrado que tem lado B. 
e) a �rea do ret�ngulo que tem lados A e B. 

Entrada
O arquivo de entrada cont�m tr�s valores com um d�gito ap�s o ponto decimal.

Sa�da
O arquivo de sa�da dever� conter 5 linhas de dados. Cada linha corresponde a uma das �reas descritas acima, 
sempre com mensagem correspondente e um espa�o entre os dois pontos e o valor. O valor calculado deve ser apresentado 
com 3 d�gitos ap�s o ponto decimal.
*/

#include <stdio.h>
#include <math.h>
#define PI 3.14159
int main()
{
	double a,b,c,tri,circ,trape,quadra,ret;
	
	scanf("%lf %lf %lf",&a,&b,&c);	
	tri = ((a*c)/2);
	circ = PI*(pow(c,2));
	trape = ((a+b)*c)/2;
	quadra= b*b;
	ret = a*b;	
	printf("TRIANGULO: %.3lf\n",tri);
	printf("CIRCULO: %.3lf\n",circ);
	printf("TRAPEZIO: %.3lf\n",trape);
	printf("QUADRADO: %.3lf\n",quadra);
	printf("RETANGULO: %.3lf\n",ret);
	return 0;
}
/*
exemplo de entrada					exemplo de saida
3.0 4.0 5.2							TRIANGULO: 7.800
									CIRCULO: 84.949
									TRAPEZIO: 18.200
									QUADRADO: 16.000
									RETANGULO: 12.000
*/
