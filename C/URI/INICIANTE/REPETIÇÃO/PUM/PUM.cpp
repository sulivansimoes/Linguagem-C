/*
Escreva um programa que leia um valor inteiro N. Este N � a quantidade de linhas de 
sa�da que ser�o apresentadas na execu��o do programa.

Entrada
O arquivo de entrada cont�m um n�mero inteiro positivo N.

Sa�da
Imprima a sa�da conforme o exemplo fornecido.
*/

#include <stdio.h>

int main(){
	
	int n,line,i,y,count=1;
	
	scanf("%d",&n);
	
	for(i=0;i<n;i++){
		
		for(y=1 ; y<4 ; y++){
			printf("%d ",count++);
		}
		printf("PUM\n");
		count++;
	}
	
		
	return 0;
}

/*
exmplo Entrada				exmemplo saida
7							1 2 3 PUM
							5 6 7 PUM
							9 10 11 PUM
							13 14 15 PUM
							17 18 19 PUM
							21 22 23 PUM
							25 26 27 PUM

*/
