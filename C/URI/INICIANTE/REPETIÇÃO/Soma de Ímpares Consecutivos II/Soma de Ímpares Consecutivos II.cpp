/*
Leia um valor inteiro N que é a quantidade de casos de teste que vem a seguir. 
Cada caso de teste consiste de dois inteiros X e Y. Você deve apresentar a soma de todos 
os ímpares existentes entre X e Y.

Entrada
A primeira linha de entrada é um inteiro N que é a quantidade de casos de teste que vem a seguir. 
Cada caso de teste consiste em uma linha contendo dois inteiros X e Y.

Saída
Imprima a soma de todos valores ímpares entre X e Y.
*/
#include<stdio.h>

int main(void)
{
	int vz,n1,n2,soma=0,i,aux,j;
	
	scanf("%d",&vz);
	
	for(i=1;i<=vz;i++)
	{
		scanf("%d %d",&n1,&n2);
		if(n2>n1){ // faz com que n1 sempre seja o maior
			aux = n1;
			n1 = n2;
			n2 = aux;
		}
		for(j=n2+1;j<n1;j++)
		{
			if(j%2!= 0){ // se for impar	
				soma+=j;
			}
		}
		printf("%d\n",soma);
		soma = 0;
	}
	return 0;
}

/*
exemplo de entrada					exemplo de saida
7
4 5
13 10
6 4
3 3
3 5
3 4
3 8										0
										11
										5
										0
										0
										0
										12
*/
