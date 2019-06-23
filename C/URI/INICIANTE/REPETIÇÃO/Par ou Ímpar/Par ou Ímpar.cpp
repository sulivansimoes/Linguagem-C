/*
Leia um valor inteiro N. Este valor ser� a quantidade de valores que ser�o lidos em seguida. 
Para cada valor lido, mostre uma mensagem em ingl�s dizendo se este valor lido � par (EVEN), �mpar (ODD), 
positivo (POSITIVE) ou negativo (NEGATIVE). No caso do valor ser igual a zero (0), embora a descri��o 
correta seja (EVEN NULL), pois por defini��o zero � par, seu programa dever� imprimir apenas NULL.

Entrada
A primeira linha da entrada cont�m um valor inteiro N(N < 10000) que indica o n�mero de casos de teste. 
Cada caso de teste a seguir � um valor inteiro X (-107 < X <107).

Sa�da
Para cada caso, imprima uma mensagem correspondente, de acordo com o exemplo abaixo. T
odas as letras dever�o ser mai�sculas e sempre dever� haver um espa�o entre duas palavras impressas na mesma linha.	
*/

#include<stdio.h>

int main(void)
{
	int n,cont,i;
	
	scanf("%d",&cont);
	
	for(i=1;i<=cont;i++)
	{
		scanf("%d",&n);
		if(n>0 && n%2==0){
			printf("EVEN POSITIVE\n");
		}else{
			if(n<0 && n%2==0){
				printf("EVEN NEGATIVE\n");
			}else{
				if(n>0 && n%2!=0){
					printf("ODD POSITIVE\n");
					}else{
						if(n<0 && n%2!=0){
							printf("ODD NEGATIVE\n");
						}else{
							if(n==0){
								printf("NULL\n");
							}
						}
					}
				}
			}
		}	
}

/*
exemplo de entrada				exemplo de saida
4								
-5								ODD NEGATIVE
0								NULL
3								ODD POSITIVE
-4								EVEN NEGATIVE							
*/
