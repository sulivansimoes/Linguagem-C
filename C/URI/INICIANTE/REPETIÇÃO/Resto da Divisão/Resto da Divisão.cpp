/*
Escreva um programa que leia 2 valores X e Y e que imprima todos os valores entre eles cujo 
resto da divisão dele por 5 for igual a 2 ou igual a 3.

Entrada
O arquivo de entrada contém 2 valores inteiros quaisquer, não necessariamente em ordem crescente.

Saída
Imprima todos os valores conforme exemplo abaixo, sempre em ordem crescente.
*/

#include <stdio.h>

int main(void)
{
	int n1,n2,i,aux;  
	
	scanf("%d",&n1);
	scanf("%d",&n2);
	
	if(n2>n1){ // faz com que n1 sempre seja maior que n2
		aux = n1;
		n1 = n2;
		n2 = aux;
	}
	for(i=n2+1;i<n1;i++)
	{
		if(i%5==2 || i%5==3){
			printf("%d\n",i);
		}
	}
	return 0;
}

/*
exemplo de entrada				exemplo de saida
10								  12
18								  13
								  17
*/	
