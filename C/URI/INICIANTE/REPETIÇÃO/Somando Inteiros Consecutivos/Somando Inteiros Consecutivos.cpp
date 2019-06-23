/*
Faça um algoritmo para ler um valor A e um valor N. Imprimir a soma de 
A para cada i com os valores (0 <= i <= N-1). Enquanto N for negativo ou ZERO, um novo N(apenas N) deve ser lido.

Entrada
A entrada contém somente valores inteiros, podendo ser positivos ou negativos. Todos os valores estão na mesma linha.

Saída
A saída contém apenas um valor inteiro.
*/
#include <stdio.h>
int main(){
	
	int n,a,i,result=0;
	
	scanf("%d",&a);
	do{
		scanf("%d",&n);
	}while(n<1);
	
	//3 2 (3+0)+(3+1) = 7
	//2 3 (2+0)+(2+1)+(2+2)= 9
	for(i=0;i<n; i++){
		result += (a+i);
	}
	
	printf("%d\n",result);
	
	return 0;
}

/*
Exemplo de Entrada	Exemplo de Saída
3 2					7

3 -1 0 -2 2			7		
*/
