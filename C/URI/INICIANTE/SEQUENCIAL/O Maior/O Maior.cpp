/*
Faça um programa que leia três valores e apresente o maior dos três valores lidos seguido da mensagem “eh o maior”. 
Utilize a fórmula:

Entrada
O arquivo de entrada contém três valores inteiros.

Saída
Imprima o maior dos três valores seguido por um espaço e a mensagem "eh o maior".
*/


// abs só funciona para achar o maior entre dois numeros por isso se acha o maior entre os dois primeiros depois
//acha o maior entre o maior achado e o terceiro.


#include <stdio.h>
#include <math.h>
int main()
{
	int a,b,c,maior,x;
	
	scanf("%d %d %d",&a,&b,&c);
	x = (a+b+abs(a-b))/2;
	maior = (x+c+abs(x-c))/2;
	printf("%d eh o maior\n",maior);
	return 0;	
}
/*
exemplo de entrada 						exemplo de saida
7 14 106								106 eh o maior
*/
