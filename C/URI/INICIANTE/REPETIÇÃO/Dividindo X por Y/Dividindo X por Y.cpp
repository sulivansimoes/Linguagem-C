/*
Escreva um algoritmo que leia 2 n�meros e imprima o resultado da divis�o do primeiro pelo segundo. 
Caso n�o for poss�vel mostre a mensagem �divisao impossivel� para os valores em quest�o.

Entrada
A entrada cont�m um n�mero inteiro N. Este N ser� a quantidade de pares de valores inteiros (X e Y) que ser�o 
lidos em seguida.

Sa�da
Para cada caso mostre o resultado da divis�o com um d�gito ap�s o ponto decimal, ou �divisao impossivel� caso 
n�o seja poss�vel efetuar o c�lculo.

Obs.: Cuide que a divis�o entre dois inteiros em algumas linguagens como o C e C++ gera outro inteiro. Utilize cast :)
*/

#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	int n1=1,n2=1,i,cont;
	float div;
	scanf("%d",&cont);
	
	for(i=1;i<=cont;i++)
	{	
		scanf("%d %d",&n1,&n2);
		div=((float)n1)/((float)n2);
		if(n2 != 0){
			printf("%.1f\n",div);
		}else
			printf("divisao impossivel\n");
	}
	return 0;
}

/*
exemplo de entrada				exemplo de saida
3					
3 -2							-1.5
-8 0							divisao impossivel
0 8								0.0
*/
