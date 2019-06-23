/*
Escreva um programa que leia dois valores X e Y. A seguir, mostre uma sequência de 1 até Y, 
passando para a próxima linha a cada X números.

Entrada
O arquivo de entrada contém dois valores inteiros, (1 < X < 20) e (X < Y < 100000).

Saída
Cada sequência deve ser impressa em uma linha apenas, com 1 espaço em branco entre cada número, 
conforme exemplo abaixo. Não deve haver espaço em branco após o último valor da linha.
*/

#include <stdio.h>

int main(){
	
	int i,y,x,aux=0;
	
	scanf("%d %d",&x,&y);
	for(i=1;i<=y;i++){
		
		if(aux<x && aux > 0){printf(" ");}
		if(x==aux){
			printf("\n");
			aux=0;
		}
		
		printf("%d",i);
		aux++;
	}
	printf("\n");
	return 0;
}

/*
Exemplo de Entrada		Exemplo de Saída
3 99					1 2 3
						4 5 6
						7 8 9
						10 11 12
						...
						97 98 99
*/
