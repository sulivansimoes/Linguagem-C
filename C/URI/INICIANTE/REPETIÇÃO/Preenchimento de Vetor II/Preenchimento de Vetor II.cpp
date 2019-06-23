/*
Fa�a um programa que leia um valor T e preencha um vetor N[1000]
com a sequ�ncia de valores de 0 at� T-1 repetidas vezes, conforme exemplo abaixo. Imprima o vetor N.

Entrada
A entrada cont�m um valor inteiro T (2 = T = 50).

Sa�da
Para cada posi��o do vetor, escreva "N[i] = x", onde i � a posi��o do vetor e x � o valor 
armazenado naquela posi��o.
*/

#include <stdio.h>

int main(){
	
	int num,count=0, i;
	int vetor[1000];
	
	scanf("%d",&num);
	
	//popula array
	for(i = 0; i< 1000; i++){
		
		if(count == num){
			count = 0;
		}
		
		vetor[i] = count++;
	}
	
	//imprime array
	for(i = 0; i< 1000; i++){
		printf("N[%d] = %d\n",i,vetor[i]);		
	}
	
	return 0;
}

/*
Exemplo de Entrada	Exemplo de Sa�da
3					N[0] = 0
					N[1] = 1
					N[2] = 2
					N[3] = 0
					N[4] = 1
					N[5] = 2
					N[6] = 0
					N[7] = 1
					N[8] = 2
					...
*/
