/*
Leia um valor inteiro X. Em seguida apresente os 6 valores �mpares consecutivos a partir 
de X, um valor por linha, inclusive o X ser for o caso.

Entrada
A entrada ser� um valor inteiro positivo.

Sa�da
A sa�da ser� uma sequ�ncia de seis n�meros �mpares.
*/

#include <stdio.h>

int main(void)
{
	int n,i,cont=1;
	
	scanf("%d",&n);
	for(i=n;cont<=6;i++)
	{
		if(i%2!=0){
			printf("%d\n",i);
			cont++;
		}
		continue;
	}
	return 0;
}
/*
exemplo de entrada 				exemplo de saida
8									9
									11
									13
									15
									17
									19
*/								
