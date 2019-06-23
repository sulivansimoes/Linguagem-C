/*
Leia um conjunto n�o determinado de pares de valores M e N (parar quando algum dos valores 
for menor ou igual a zero). Para cada par lido, mostre a sequ�ncia do menor at� o maior e a soma dos 
inteiros consecutivos entre eles (incluindo o N e M).

Entrada
O arquivo de entrada cont�m um n�mero n�o determinado de valores M e N. 
A �ltima linha de entrada vai conter um n�mero nulo ou negativo.

Sa�da
Para cada dupla de valores, imprima a sequ�ncia do menor at� o maior e a soma deles, conforme exemplo abaixo.
*/


#include<stdio.h>

int main(void)
{
	int n1,n2,i,aux,soma=0;
	
	do{
		scanf("%d %d",&n1,&n2);
		
		if(n2>n1){ // faz com que o n1 sempre seja maior
			aux = n1;
			n1 = n2;
			n2 = aux;
		}	
		if(n1>0 && n2>0)
		{
			for(i=n2;i<=n1;i++)
			{
				printf("%d ",i);
				soma += i;
			}	
			printf("Sum=%d\n",soma);
			soma=0;
		}
	}while(n1>0 && n2>0);
	
	return 0;
}

/*
Exemplo de Entrada						Exemplo de Sa�da
5 2
6 3
										5 02 3 4 5 Sum=14
										3 4 5 6 Sum=18
*/
