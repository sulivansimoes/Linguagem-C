/*
Leia um valor inteiro, que � o tempo de dura��o em segundos de um determinado evento 
em uma f�brica, e informe-o expresso no formato horas:minutos:segundos.

Entrada

O arquivo de entrada cont�m um valor inteiro N.

Sa�da

Imprima o tempo lido no arquivo de entrada (segundos), convertido para horas:minutos:segundos, conforme exemplo fornecido.
*/

#include <stdio.h>
int main()
{
	int n,hora,min,seg,resto;
	
	scanf("%d",&n);
	
	hora = n/3600;
	resto = n%3600;
	min = resto/60;
    resto = resto%60;
    seg = resto;
	
	printf("%d:%d:%d\n",hora,min,seg);
	return 0;
}

/*
exemplo de entrada 					exemplo de saida
556									      0:9:16
1									  	  0:0:1
140153									38:55:53
*/
