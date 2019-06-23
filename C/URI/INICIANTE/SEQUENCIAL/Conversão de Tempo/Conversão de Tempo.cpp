/*
Leia um valor inteiro, que é o tempo de duração em segundos de um determinado evento 
em uma fábrica, e informe-o expresso no formato horas:minutos:segundos.

Entrada

O arquivo de entrada contém um valor inteiro N.

Saída

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
