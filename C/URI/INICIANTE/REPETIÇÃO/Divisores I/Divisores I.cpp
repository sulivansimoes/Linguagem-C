/*
Ler um n�mero inteiro N e calcular todos os seus divisores.

Entrada
O arquivo de entrada cont�m um valor inteiro.

Sa�da
Escreva todos os divisores de N, um valor por linha.
*/
#include<stdio.h>

int main(void)
{
	int n,i;
	
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
		if(n%i==0){
			printf("%d\n",i);
		}
	}
	return 0;
}

/*
Exemplo de Entrada			Exemplo de Sa�da
6							1
							2
							3
							6
*/
