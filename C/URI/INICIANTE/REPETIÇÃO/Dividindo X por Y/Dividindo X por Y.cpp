/*
Escreva um algoritmo que leia 2 números e imprima o resultado da divisão do primeiro pelo segundo. 
Caso não for possível mostre a mensagem “divisao impossivel” para os valores em questão.

Entrada
A entrada contém um número inteiro N. Este N será a quantidade de pares de valores inteiros (X e Y) que serão 
lidos em seguida.

Saída
Para cada caso mostre o resultado da divisão com um dígito após o ponto decimal, ou “divisao impossivel” caso 
não seja possível efetuar o cálculo.

Obs.: Cuide que a divisão entre dois inteiros em algumas linguagens como o C e C++ gera outro inteiro. Utilize cast :)
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
