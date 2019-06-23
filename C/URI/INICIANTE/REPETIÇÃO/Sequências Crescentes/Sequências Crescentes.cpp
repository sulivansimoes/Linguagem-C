/*
Este programa deve ler uma vari�vel inteira X in�meras vezes (deve parar quando o valor no 
arquivo de entrada for igual a zero). Para cada valor lido imprima a sequ�ncia de 1 at� X, com um 
espa�o entre cada n�mero e seu sucessor.

Obs: cuide para n�o deixar espa�o em branco ap�s o �ltimo valor apresentado na linha ou voc� receber� Presentation Error.

Entrada
O arquivo de entrada cont�m v�rios n�meros inteiros. O �ltimo n�mero no arquivo de entrada � 0.

Sa�da
Para cada n�mero N do arquivo de entrada deve ser impressa uma linha de 1 at� N, 
conforme o exemplo abaixo. N�o deve haver espa�o em branco ap�s o �ltimo valor da linha.
*/

#include<stdio.h>

int main(void)
{
	int n,i;

	do{	
		scanf("%d",&n);
		if(n!=0){
			for(i=1;i<n;i++)
			{
				printf("%d ",i);
			}
			printf("%d",i);
			printf("\n");
		}
	}while(n!=0);
	
	return 0;
}
/*
Exemplo de Entrada						Exemplo de Sa�da
5
10
3
										01 2 3 4 5
										1 2 3 4 5 6 7 8 9 10
										1 2 3
*/
