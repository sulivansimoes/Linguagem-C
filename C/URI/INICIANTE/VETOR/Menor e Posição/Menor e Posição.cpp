/*
Faça um programa que leia um valor N. Este N será o tamanho de um vetor X[N]. A seguir, 
leia cada um dos valores de X, encontre o menor elemento deste vetor e a sua posição dentro do vetor, 
mostrando esta informação.

Entrada
A primeira linha de entrada contem um único inteiro N (1 < N < 1000), indicando o 
número de elementos que deverão ser lidos em seguida para o vetor X[N] de inteiros.
 A segunda linha contém cada um dos N valores, separados por um espaço.

Saída
A primeira linha apresenta a mensagem “Menor valor:” seguida de um 
espaço e do menor valor lido na entrada. A segunda linha apresenta a mensagem “Posicao:” 
seguido de um espaço e da posição do vetor na qual se encontra o menor valor lido, lembrando 
que o vetor inicia na posição zero.

*/

#include<stdio.h>

int main(void)
{
	int n,vet[1001],menor,i,pos;
	
	scanf("%d",&n);
	vet[n];
	
	for(i=0;i<n;i++)
	{
		scanf("%d",&vet[i]);
	}
	menor=vet[0];
	pos = 0;		
	for(i=1;i<n;i++)
	{		
		if(vet[i]<menor){
			menor=vet[i];
			pos=i;
		}
	}
	printf("Menor valor: %d\n",menor);
	printf("Posicao: %d\n",pos);
	
	return 0;
}

/*
exemplo de entrada			exemplo de saida
10 							Menor valor: -5
1 2 3 4 -5 6 7 8 9 10		Posicao: 4
*/
