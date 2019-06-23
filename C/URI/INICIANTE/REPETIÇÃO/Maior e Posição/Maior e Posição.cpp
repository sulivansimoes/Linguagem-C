/*
Leia 100 valores inteiros. Apresente então o maior valor lido e a posição dentre os 100 valores lidos.

Entrada
O arquivo de entrada contém 100 números inteiros, positivos e distintos.

Saída
Apresente o maior valor lido e a posição de entrada, conforme exemplo abaixo.
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
