/*
Fa�a um programa que leia tr�s valores e apresente o maior dos tr�s valores lidos seguido da mensagem �eh o maior�. 
Utilize a f�rmula:

Entrada
O arquivo de entrada cont�m tr�s valores inteiros.

Sa�da
Imprima o maior dos tr�s valores seguido por um espa�o e a mensagem "eh o maior".
*/


// abs s� funciona para achar o maior entre dois numeros por isso se acha o maior entre os dois primeiros depois
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
