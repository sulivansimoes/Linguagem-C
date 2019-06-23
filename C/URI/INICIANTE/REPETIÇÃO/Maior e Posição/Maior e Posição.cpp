/*
Leia 100 valores inteiros. Apresente ent�o o maior valor lido e a posi��o dentre os 100 valores lidos.

Entrada
O arquivo de entrada cont�m 100 n�meros inteiros, positivos e distintos.

Sa�da
Apresente o maior valor lido e a posi��o de entrada, conforme exemplo abaixo.
*/
#include<stdio.h>

int main(void)
{
	int i,maior,n,pos;
	
	for(i=1;i<101;i++)
	{
		scanf("%d",&n);
		if(n>maior){
			maior=n;
			pos=i;
		}
	}
	printf("%d\n",maior);
	printf("%d\n",pos);
	return 0;
}

/*
exemplo de entrada				exemplo de saida
2								34565
113								4
45
34565
6
...
8
 
*/
