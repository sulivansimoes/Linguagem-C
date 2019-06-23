/*
Escreva um programa que leia dois valores X e Y. A seguir, mostre uma sequ�ncia de 1 at� Y, 
passando para a pr�xima linha a cada X n�meros.

Entrada
O arquivo de entrada cont�m dois valores inteiros, (1 < X < 20) e (X < Y < 100000).

Sa�da
Cada sequ�ncia deve ser impressa em uma linha apenas, com 1 espa�o em branco entre cada n�mero, 
conforme exemplo abaixo. N�o deve haver espa�o em branco ap�s o �ltimo valor da linha.
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
Exemplo de Entrada		Exemplo de Sa�da
3 99					1 2 3
						4 5 6
						7 8 9
						10 11 12
						...
						97 98 99
*/
