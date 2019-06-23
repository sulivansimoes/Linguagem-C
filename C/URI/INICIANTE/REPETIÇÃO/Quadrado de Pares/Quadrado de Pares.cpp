/*
Leia um valor inteiro N. Apresente o quadrado de cada um dos valores pares, de 1 at� N, inclusive N, se for o caso.

Entrada
A entrada cont�m um valor inteiro N (5 < N < 2000).

Sa�da
Imprima o quadrado de cada um dos valores pares, de 1 at� N, conforme o exemplo abaixo.
Tome cuidado! Algumas linguagens tem por padr�o apresentarem como sa�da 1e+006 ao inv�s de 1000000 
o que ocasionar� resposta errada. Neste caso, configure a precis�o adequadamente para que isso n�o ocorra.
*/

#include <stdio.h>
#include <math.h>

int main(void)
{
	int i,n,x;
	
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
		if(i%2==0){
			x = pow(i,2);
			printf("%d^2 = %d\n",i,x);
		}
		continue;
	}
	return 0;
}

/*
exemplo de entrada			exemplo de saida
6							2^2 = 4
							4^2 = 16
							6^2 = 36
*/
